#include "book_management.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern struct BookArray bookArray;

int printBooks(struct BookArray printBooks)
{
    if (printBooks.length > 0){
        printf("The book(s) found are as follows:\n");
        for (int i = 0; i < printBooks.length; i ++){
            printf("%s by %s, %i edition\n", printBooks.array[i].title, printBooks.array[i].author, printBooks.array[i].year);
        }
        return 0;
    }
    return 1;
}

struct BookArray find_book_by_title(const char *title)
{
    bookName.array = calloc(50, sizeof(struct Book));
    bookName.length = 0;
    for (int i = 0; i < bookArray.length; i++)
    {
        if (strcmp(bookArray.array[i].title, title) == 0)
        {
            bookName.array[i].title = calloc(50, sizeof(char));
            bookName.array[bookName.length] = bookArray.array[i];
            bookName.length += 1;
        }
    }
    if (bookName.length < 1){
        printf("The book was not found.\n Please try again with the correct name.\n Note that we may not have it in stock :(\n");
    }
    return bookName;
}

struct BookArray find_book_by_author(const char *author)
{
    bookAuthor.array = calloc(50, sizeof(struct Book));
    bookAuthor.length = 0;
    for (int i = 0; i < bookArray.length; i++)
    {
        if (strcmp(bookArray.array[i].author, author) == 0)
        {
            bookAuthor.array[i].title = calloc(50, sizeof(char));
            bookAuthor.array[i].author = calloc(50, sizeof(char));
            bookAuthor.array[bookAuthor.length] = bookArray.array[i];
            bookAuthor.length += 1;
        }
    }
    if (bookAuthor.length < 1){
        printf("The book(s) by that author were not found.\n Please try again with his/her correct details.\n Note that we may not have his/her works in stock :(\n");
    }
    return bookAuthor;
}

struct BookArray find_book_by_year(unsigned int year)
{
    bookYear.array = calloc(50, sizeof(struct Book));
    bookYear.length = 0;
    for (int i = 0; i < bookArray.length; i++)
    {
        if (year ==bookArray.array[i].year)
        {
            bookYear.array[i].title = calloc(50, sizeof(char));
            bookYear.array[bookYear.length] = bookArray.array[i];
            bookYear.length+=1;
        }
    }
    if (bookYear.length < 1)
        {
            printf("The book(s) during that year were not found.\n Please try again with the correct year.\n Note that we may not have books from that year in stock :(\n");
        }
    return bookYear;
}

int book_array()
{
    bookArray.array = calloc(100, sizeof(struct Book));
    for (int i = 0; i < 100; i++)
    {
        bookArray.array[i].title = calloc(50, sizeof(char));
        bookArray.array[i].author = calloc(50, sizeof(char));
    }
    return 0;
}

struct Book *bookInQuestion(char *title)
{
    struct Book *bookInQuestion = calloc(10, sizeof(struct Book));
    int count;
    for (int i = 0; i < bookArray.length; i++)
    {
        if ((strcmp(title, bookArray.array[i].title) == 0))
        {
            bookInQuestion = &bookArray.array[i];
            count++;
        }
    }
    if (count == 0){
        printf("Book not found");
    }
    return bookInQuestion;
}

int store_books(FILE *file){
    file =  fopen("books.txt","w+");
    for (int i=0; i < bookArray.length; i++){
        fprintf(file, "%s,%s,%u,%u\n", bookArray.array[i].title, bookArray.array[i].author, bookArray.array[i].year, bookArray.array[i].copies);
    }
    fclose(file);
    return 0;
}

int load_books(FILE *file){
    bookArray.length;
    char string[256];
    file = fopen("books.txt", "a+");
    fclose(file);

    if (file = fopen("books.txt", "r")){
        char *token = calloc(50, sizeof(char));

        while (fgets(string, 256, file) != NULL){
            token = strtok(string, ",");
            strcpy(bookArray.array[bookArray.length].title, token);
            token = strtok(NULL, ",");
            strcpy(bookArray.array[bookArray.length].author, token);
            token = strtok(NULL, ",");
            bookArray.array[bookArray.length].year = atoi(token);
            token = strtok(NULL, "\n");
            bookArray.array[bookArray.length].copies = atoi(token);
            bookArray.length++;
        }
    }
    return 0;
}

int add_book(struct Book book)
{
    FILE * file;
    bookArray.array[bookArray.length]=book;
    bookArray.length += 1;
    store_books(file);
    return 0;
}

int found_book(struct Book book){
    FILE *file;
    for (int i = 0; i < bookArray.length; i++)
    {
        if (strcmp(book.title, bookArray.array[i].title) == 0 &&
            strcmp(book.author, bookArray.array[i].author) == 0 &&
            book.year == bookArray.array[i].year ){
            return 0;
        }    
    }
    printf("Book not found.\n");
    return 1;
}

int remove_book(struct Book book)
{
    FILE *file;
    for (int i = 0; i < bookArray.length; i++)
    {
        if ( strcmp(book.title, bookArray.array[i].title) ==0 &&
            strcmp(book.author, bookArray.array[i].author) ==0 &&
            book.year == bookArray.array[i].year){
                bookArray.array[i] = bookArray.array[i + 1];
                
                for (int j=i; j < bookArray.length;j++){
                   bookArray.array[j] = bookArray.array[j + 1];
                }
                bookArray.length--;
                store_books(file);
                return 0;
        }
    }
    return 1;
}

int borrow(char *username, char *title, char *author, unsigned int year){
    FILE *file;
    struct Book book;
    book.title = calloc(50, sizeof(char));
    book.title = title;
    book.author = calloc(50, sizeof(char));
    book.author=author;
    book.year = year;
    file = fopen("loans.txt", "a+");
    if (file == NULL)
    {
        printf("Unable to create file.\n");
        fclose(file);
        return 1;
    }

    for (int i = 0; i < bookArray.length; i++)
    {
        if (strcmp(title, bookArray.array[i].title) ==0 &&
            strcmp(author, bookArray.array[i].author) ==0 &&
            year == bookArray.array[i].year &&
            bookArray.array[i].copies>0){
            fprintf(file, "%s,%s,%s,%u\n", username, title, author, year);
            bookArray.array[i].copies--;
            store_books(file);
            printf("%s has sucessfully borrowed a copy of %s by %s; %i edition.\n", username, title, author, year);
            fclose(file);
            return 0;
        }
        }
    printf("Book Not Found.\n");
    }

int return_book(char *username, char *title, char *author, unsigned int year){
    FILE * loansfile;
    FILE * returnsfile;
    struct Book book;
    book.title = calloc(50, sizeof(char));
    book.title = title;
    book.author = calloc(50, sizeof(char));
    book.author=author;
    book.year = year;
    char string[256];
    char user_with_book[20];
    char user_with_book_title[50];
    char user_with_book_author[30];
    unsigned int user_with_book_year;
    int count = 0;

    loansfile = fopen("loans.txt", "r");
    if (loansfile == NULL)
    {
        printf("Error creating file.\n");
        fclose(loansfile);
        return 1;
    }

    returnsfile = fopen("returns.txt", "w+");
    if (returnsfile == NULL)
    {
        printf("Error creating file.\n");
        fclose(returnsfile);
        return -1;
    }

    for (int i = 0; i < bookArray.length; i++){
        if (found_book(book) ==0) {
            char *token = calloc(50, sizeof(char));
            while (fgets(string, 256, loansfile) != NULL){
                token = strtok(string, ",");
                strcpy(user_with_book, token);
                token = strtok(NULL, ",");
                strcpy(user_with_book_title, token);
                token = strtok(NULL, ",");
                strcpy(user_with_book_author, token);
                token = strtok(NULL, ",");
                user_with_book_year = atoi(token);

                if (strcmp(username, user_with_book) == 0 && 
                    strcmp(title, user_with_book_title) == 0 &&
                    strcmp(author, user_with_book_author) == 0 && 
                    year == user_with_book_year && count ==0){
                    count += 1;
                }
                else
                {
                    fprintf(returnsfile, "%s,%s,%s,%u\n", user_with_book,
                            user_with_book_title,
                            user_with_book_author,
                            user_with_book_year);
                }
            }
            fclose(returnsfile);

            for (int i = 0; i < bookArray.length; i++){
                if (strcmp(title, bookArray.array[i].title) == 0 &&
                    strcmp(author, bookArray.array[i].author) == 0 &&
                    year == bookArray.array[i].year){
                            count = i;
                            bookArray.array[i].copies++;
                            store_books(loansfile);
                            fclose(loansfile);
                            remove("loans.txt");
                            rename("returns.txt", "loans.txt");
                            printf("Return sucessful\n");
                            return 0;
                        }
                    }
                }
            }
    printf("Book Not Found.\n");
}