#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"
#include "admin.h"
#include "book_management.h"

extern struct AdminArray adminArray;

int registerAdmin(char *usernameAdmin, char *passwordAdmin){
    FILE *file;
    char string[100];
    char *token = calloc(50, sizeof(char));
    file = fopen("admins.txt", "a+");

    while (fgets(string, 100, file) != NULL){
        token = strtok(string, ",");
 
        if (strcmp(usernameAdmin, token) == 0){

            printf("Username already in use.\n");
            fclose(file);
            return 1;

        }
    }
    file = fopen("admins.txt", "a+");
    fprintf(file, "%s,%s\n", usernameAdmin, passwordAdmin);
    fclose(file);
    printf("Admin Registration succesful!\n");
    return 0;
}

int loginAdmin(char *usernameAdmin, char *passwordAdmin)
{
    FILE *file;
    char string[100];
    char *token = calloc(50, sizeof(char));

    file = fopen("admins.txt", "r");
    if (file == NULL)
    {
        printf("File not found");
        fclose(file);
        return -1;
    }

    while (fgets(string, 100, file) != NULL)
    {
        token = strtok(string, ",");
        if (strcmp(usernameAdmin, token) == 0)
        {
            token = strtok(NULL, "\n");
            if (strcmp(passwordAdmin, token) == 0)
            {
                printf("Admin Login succesful!\n");
                fclose(file);
                return 0;
            }
        }
    }
    fclose(file);
    printf("Username or password incorrect!\n");
    return 1;
}

int load_admins(FILE *file){
    adminArray.length;
    char string[256];
    file = fopen("admins.txt", "a+");
    fclose(file);

    if (file = fopen("admins.txt", "r")){
        char *token = calloc(50, sizeof(char));

        while (fgets(string, 256, file) != NULL){
            token = strtok(string, ",");
            strcpy(adminArray.array[adminArray.length].usernameAdmin, token);
            token = strtok(NULL, "\n");
            adminArray.array[adminArray.length].passwordAdmin = atoi(token);
            adminArray.length++;
        }
    }
    return 0;
}

int store_admins(FILE *file)
{
    file = fopen("admins.txt", "w+");
    for (int i = 0; i < adminArray.length; i++)
    {
        fprintf(file, "%s,%i\n", adminArray.array[i].usernameAdmin, adminArray.array[i].passwordAdmin);
    }
    fclose(file);
    return 0;
}

int add_admin(struct Admin admin)
{

    adminArray.array[adminArray.length]=admin;
    adminArray.length += 1;
    FILE *file;
    store_admins(file);
    return 0;
}

int remove_admin(struct Admin admin)
{
    FILE *file;
    for (int i = 0; i < adminArray.length; i++)
    {
        if (strcmp(admin.usernameAdmin, adminArray.array[i].usernameAdmin) == 0 &&
            strcmp(admin.passwordAdmin, adminArray.array[i].passwordAdmin) == 0)
        {
            adminArray.array[i] = adminArray.array[i + 1];
            for (int j=i; j < adminArray.length; j++){
                adminArray.array[j] = adminArray.array [j + 1];
            }
            adminArray.length--;
            store_admins(file);
            return 0;
        }
    }
    return 1;
}