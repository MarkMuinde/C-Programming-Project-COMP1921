#ifndef ADMIN_GUARD_H
#define ADMIN_GUARD_H
#include "book_management.h"
#include "user.h"
#include <stdio.h>
struct FILE;

struct Admin {
    //Name of library user
    char *usernameAdmin;
    //password
    char *passwordAdmin;
};


struct AdminArray
{
    struct Admin *array;  // pointer to array of struct Admin.
    unsigned int length; // number of elements in the struct Admin * AdminArray::find_book_by_author(const char* title)
};

struct AdminArray adminArray;
struct Admin *adminpointer;

struct Admin get_admin(char* usernameAdmin);
struct Admin *get_admin_address(char *usernameAdmin);

int load_admins(FILE *file);
int store_admins(FILE *file);

//returns 0 if user successfully added to list of admins
int add_admin(struct Admin admin);

//returns 0 if user successfully removed from list
int remove_admin(struct Admin admin);

int registerAdmin(char *usernameAdmin, char *passwordAdmin);
int loginAdmin(char *usernameAdmin, char *passwordAdmin);

void initAdmin(struct Admin* admin);
void admin_cleanup();

#endif