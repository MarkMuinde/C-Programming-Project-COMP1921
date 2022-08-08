#ifndef USER_GUARD_H
#define USER_GUARD_H
#include "book_management.h"
#include "admin.h"
#include <stdio.h>
struct FILE;

struct User {
    //Name of library user
    char* username;
    //password
    char* password;
};

struct UserArray
{
    struct User *array;  // pointer to array of struct User.
    unsigned int length; // number of elements in the struct User * UserArray
};

struct UserArray userArray;
struct User *userpointer;
struct Book *student;

int load_users(FILE* file);
int store_users(FILE* file);

//returns 0 if user successfully added to list of users
int add_user(struct User user);

//returns 0 if user successfully removed from list
int remove_user(struct User user);

int registerUser(char *username, char *password);
int loginUser(char *username, char *password);

struct User get_user(char* username);
struct User *get_user_address(char *username);

void init(struct User* user);

void user_cleanup();
#endif
