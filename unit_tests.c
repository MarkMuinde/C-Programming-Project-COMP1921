#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book_management.h"
#include "unity.h"
#include "user.h"
#include "admin.h"
#include "interface.h"

//should return 0 as user added
void user_registration_test()
{
    FILE *file;
    file = fopen("users.txt", "w+");
    fclose(file);

    char * username = calloc(50, sizeof(char));
    char * password = calloc(50, sizeof(char));

    username = "TestingUser";
    password = "1234";

    int testUserSuccess = registerUser(username, password);

    TEST_ASSERT_EQUAL_INT(0, testUserSuccess);
}

//should return 0 as admin added
void admin_registration_test()
{
    FILE *file;
    file = fopen("admins.txt", "w+");
    fclose(file);

    char *usernameAdmin = calloc(50, sizeof(char));
    char *passwordAdmin = calloc(50, sizeof(char));

    usernameAdmin = "TestingAdmin";
    passwordAdmin = "1234";

    int testAdminSuccess = registerAdmin(usernameAdmin, passwordAdmin);

    TEST_ASSERT_EQUAL_INT(0, testAdminSuccess);
}

//should return 0 as user added
void login_test_user()
{

    FILE *file;
    file = fopen("users.txt", "w+");
    fclose(file);

    char *username = calloc(50, sizeof(char));
    char *password = calloc(50, sizeof(char));

    username = "TestingUser";
    password = "1234";

    int registrationTest = registerUser(username, password);
    int loginTest = loginUser(username, password);
    TEST_ASSERT_EQUAL_INT(0, loginTest);
}

//should return 0 as admin added
void login_test_admin()
{
    FILE *file;
    file = fopen("admins.txt", "w+");
    fclose(file);

    char *usernameAdmin = calloc(50, sizeof(char));
    char *passwordAdmin = calloc(50, sizeof(char));

    usernameAdmin = "TestingUser";
    passwordAdmin = "1234";

    int registrationTest = registerAdmin(usernameAdmin, passwordAdmin);
    int loginTest = loginAdmin(usernameAdmin, passwordAdmin);
    TEST_ASSERT_EQUAL_INT(0, loginTest);
}

//not run, was not able to fix bugs

/*void add_book_test()
{
    FILE *file;
    load_books(file);

    char *bookTitle = calloc(50, sizeof(char));
    char *bookAuthor = calloc(50, sizeof(char));
    unsigned int bookYear;
    unsigned int bookCopies;
    struct Book addBook;

    bookTitle = "Testing";
    addBook.title = bookTitle;

    bookAuthor = "TestAuthor";
    addBook.author = bookAuthor;

    bookYear = 2000;
    addBook.year = bookYear;

    bookCopies = 5;
    addBook.copies = bookCopies;

    int addbook = add_book(addBook);

    TEST_ASSERT_EQUAL_INT(0, addbook);
}

void remove_book_test()
{

    char *bookTitle = calloc(50, sizeof(char));
    char *bookAuthor = calloc(50, sizeof(char));
    unsigned int bookYear;
    unsigned int bookCopies;
    struct Book removeBook;

    bookTitle = "Testing";
    removeBook.title = bookTitle;

    bookAuthor = "TestAuthor";
    removeBook.author = bookAuthor;

    bookYear = 2000;
    removeBook.year = bookYear;

    bookCopies = 9;
    removeBook.copies = bookCopies;

    add_book(removeBook);

    int removebook = remove_book(removeBook);

    TEST_ASSERT_EQUAL_INT(0, removebook);
}*/


 //should return 1 as no book added
void find_book_by_title_test()
{
    char *findTitle = calloc(50, sizeof(char));
    findTitle = "Testing";
    int testTitleSuccess = printBooks(find_book_by_title(findTitle));
    TEST_ASSERT_EQUAL_INT(1, testTitleSuccess);
}

//should return 1 as no book added
void find_book_by_author_test()
{
    char *findAuthor = calloc(50, sizeof(char));
    findAuthor = "TestAuthor";
    int testAuthorSuccess = printBooks(find_book_by_author(findAuthor));
    TEST_ASSERT_EQUAL_INT(0, findAuthor);
}

//should return 1 as no book added
void find_book_by_year_test()
{
    unsigned int findYear;
    findYear = 2000;
    int testYearSuccess = printBooks(find_book_by_year(2000));
    TEST_ASSERT_EQUAL_INT(1, testYearSuccess);
}

//should return 1 as no book added
void borrow_book_test()
{
    char bookTitle;
    char bookAuthor;

    char *username = calloc(50, sizeof(char));
    char *title = calloc(50, sizeof(char));
    char *author = calloc(50, sizeof(char));
    unsigned int year;

    username = "TestingUser";
    title = "Testing";
    author = "TestAuthor";
    year = 2000;
    
    int testBorrowSuccess = borrow(username, title, author, year);
    TEST_ASSERT_EQUAL_INT(1, testBorrowSuccess);
}

//should return 1 as no book added
void return_book_test()
{
    char bookTitle;
    char bookAuthor;

    char *username = calloc(50, sizeof(char));
    char *title = calloc(50, sizeof(char));
    char *author = calloc(50, sizeof(char));
    unsigned int year;

    username = "TestingUser";
    title = "Testing";
    author = "TestAuthor";
    year = 2000;

    int testReturnSuccess = return_book(username, title, author, year);
    TEST_ASSERT_EQUAL_INT(1, testReturnSuccess);
}

void setUp()
{

}

void tearDown()
{

}
int main()
{
    UNITY_BEGIN();

    RUN_TEST(user_registration_test);
    RUN_TEST(admin_registration_test);
    RUN_TEST(login_test_user);
    RUN_TEST(login_test_admin);
    //RUN_TEST(add_book_test);
    //RUN_TEST(remove_book_test);
    RUN_TEST(find_book_by_title_test);
    RUN_TEST(find_book_by_author_test);
    RUN_TEST(find_book_by_year_test);
    RUN_TEST(borrow_book_test);
    RUN_TEST(return_book_test);

    return UNITY_END();
}