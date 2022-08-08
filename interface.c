#include "interface.h"
#include "user.h"
#include "admin.h"
#include "book_management.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char session[50];

void login(){
    FILE *file;
    book_array();
    load_books(file);
    int option =0;

    do{
        printf("1)User login\n");
        printf("2)Librarian login\n");
        printf("3)Register User\n");
        printf("4)Register Admin\n");
        printf("5)Exit\n");

        scanf("%d", &option);

        switch (option){
        case 1:
        {
            char *username = calloc(50, sizeof(char));
            char *password = calloc(50, sizeof(char));
            printf("Username: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%s", username);
            printf("Password:");
            scanf("%s", password);
            if (loginUser(username,password) == 0)
            {
                strcpy(session, username);
                user_interface();
            }
            break;
        }

        case 2:
        {
            char *usernameAdmin = calloc(50, sizeof(char));
            char *passwordAdmin = calloc(50, sizeof(char));
            printf("Username: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%s", usernameAdmin);
            printf("Password:");
            scanf("%s", passwordAdmin);
            ;
            if (loginAdmin(usernameAdmin,passwordAdmin) == 0)
            {
                strcpy(session, usernameAdmin);
                admin_interface();
            }
            else
            {
                printf("Incorrect Username or Password\n");
            }
            break;
        }

        case 3:
        {
            char *username = calloc(50, sizeof(char));
            char *password = calloc(50, sizeof(char));
            printf("Username: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%s", username);
            printf("Password:");
            scanf("%s", password);

            if (registerUser(username,password) == 1)
            {
                break;
            }
            break;
        }

        case 4:
        {
            char *usernameAdmin = calloc(50, sizeof(char));
            char *passwordAdmin = calloc(50, sizeof(char));
            printf("Username: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%s", usernameAdmin);
            printf("Password:");
            scanf("%s", passwordAdmin);

            if (registerAdmin(usernameAdmin, passwordAdmin) == 1)
            {
                break;
            }
            break;
        }

        case 5:
        {
            break;
        }

        default:
            printf("Invalid choice. Try again:\n");
            break;
        }
    } while (option != 5);
    exit(0);
}

void user_interface()
{
    int option = 0;
    do
    {
        printf("1) Borrow a book\n");
        printf("2) Return a book\n");
        printf("3) Find a book by title \n");
        printf("4) Find a book by author\n");
        printf("5) Find a book by year\n");
        printf("6) Log out\n");

        scanf("%d", &option);

        switch(option){
        case 1:
        {
            char bookTitle;
            char bookAuthor;
            char *username = calloc(50, sizeof(char));
            char *title = calloc(50, sizeof(char));
            char *author = calloc(50, sizeof(char));
            unsigned int year;
            strcpy(username, session);

            printf("Title: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%c", &bookTitle);
            scanf("%[^\n]", title);

            printf("Author: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%c", &bookAuthor);
            scanf("%[^\n]", author);

            printf("Year:");
            scanf("%u", &year);
            borrow(username, title, author, year);
            break;
        }

        case 2:
        {
            char bookTitle;
            char bookAuthor;
            char *username = calloc(50, sizeof(char));
            char title[50];
            char author[50];
            unsigned int year;
            strcpy(username, session);
            printf("Title: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%c", &bookTitle);
            scanf("%[^\n]", title);

            printf("Author: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%c", &bookAuthor);
            scanf("%[^\n]", author);

            printf("Year:");
            scanf("%u", &year);
            return_book(username, title, author, year);
            break;
        }

        case 3:
        {
            char *findTitle = calloc(50, sizeof(char));
            char bookTitle;

            printf("Title: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%c", &bookTitle);
            scanf("%[^\n]", findTitle);

            printBooks(find_book_by_title(findTitle));
            break;
        }

        case 4:
        {
            char *findAuthor = calloc(50, sizeof(char));
            char bookAuthor;

            printf("Author: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
            scanf("%c", &bookAuthor);
            scanf("%[^\n]", findAuthor);

            printBooks(find_book_by_author(findAuthor));
            break;
        }

        case 5:
        {
            unsigned int findYear;

            printf("Year:");
            scanf("%u", &findYear);

            printBooks(find_book_by_year(findYear));
            break;
        }

        case 6:
        {
            break;
        }

        default:
            printf("Invalid choice. Try again:\n");
            break;
        }
    } while (option != 6);
}

void admin_interface(){
    int option = 0;
    do
    {
        printf("1)Add a new book\n");
        printf("2)Remove a book\n");
        printf("3) Borrow a book\n");
        printf("4)Return a book\n");
        printf("5)Log out\n");

        scanf("%d", &option);

        switch(option){
            case 1:
            {
                char *bookTitle = calloc(50, sizeof(char));
                char *bookAuthor = calloc(50, sizeof(char));
                unsigned int bookYear;
                unsigned int bookCopies;
                struct Book addBook;

                printf("Title: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
                scanf("%s", bookTitle);
                addBook.title = bookTitle;

                printf("Author: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
                scanf("%s", bookAuthor);
                addBook.author = bookAuthor;

                printf("Year:");
                scanf("%u", &bookYear);
                addBook.year = bookYear;

                printf("Copies\n");
                scanf("%u", &bookCopies);
                addBook.copies = bookCopies;
                
                add_book(addBook);
                printf("Book Successfully Added!\n");
                break;
            }

            case 2:
            {
                char *bookTitle = calloc(50, sizeof(char));
                char *bookAuthor = calloc(50, sizeof(char));
                unsigned int bookYear;
                struct Book removeBook;

                printf("Title: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
                scanf("%s", bookTitle);
                removeBook.title = bookTitle;

                printf("Author: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
                scanf("%s", bookAuthor);
                removeBook.author = bookAuthor;

                printf("Year:");
                scanf("%u", &bookYear);
                removeBook.year = bookYear;

                remove_book(removeBook);

                break;
            }

            case 3:
            {
                char bookTitle;
                char bookAuthor;
                char *username = calloc(50, sizeof(char));
                char *title = calloc(50, sizeof(char));
                char *author = calloc(50, sizeof(char));
                unsigned int year;
                strcpy(username, session);

                printf("Title: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
                scanf("%c", &bookTitle);
                scanf("%[^\n]", title);

                printf("Author: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
                scanf("%c", &bookAuthor);
                scanf("%[^\n]", author);

                printf("Year:");
                scanf("%u", &year);
                borrow(username, title, author, year);
                break;
            }

            case 4:
            {
                char bookTitle;
                char bookAuthor;
                char *username = calloc(50, sizeof(char));
                char title[50];
                char author[50];
                unsigned int year;
                strcpy(username, session);
                printf("Title: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
                scanf("%c", &bookTitle);
                scanf("%[^\n]", title);

                printf("Author: (enter using upper camelcase i.e FirstnameLastname without whitespace)");
                scanf("%c", &bookAuthor);
                scanf("%[^\n]", author);

                printf("Year:");
                scanf("%u", &year);
                return_book(username, title, author, year);
                break;
            }

            case 5:
            {
                break;
            }
            default:
                printf("Invalid choice. Try again:\n");
                break;
        }
    } while (option != 5);
}

void run_interface()
{
    login();
}
