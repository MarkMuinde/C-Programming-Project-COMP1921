#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"
#include "admin.h"
#include "book_management.h"

extern struct UserArray userArray;

int registerUser(char *username, char *password){
    FILE *file;
    char string[100];
    char *token = calloc(50, sizeof(char));
    file = fopen("users.txt", "a+");

    while (fgets(string, 100, file) != NULL)
    {
        token = strtok(string, ",");

        if (strcmp(username, token) == 0)
        {
            printf("Username already in use");
            fclose(file);
            return 1;
        }
    }

    file = fopen("users.txt", "a+");
    fprintf(file, "%s,%s\n", username, password);
    fclose(file);
    printf("User Registration succesful!\n");
    return 0;
}

int loginUser(char *username, char *password){
    FILE *file;
    char string[100];
    char *token = calloc(50, sizeof(char));

    file = fopen("users.txt", "r");
    if (file == NULL)
    {
        printf("File not found");
        fclose(file);
        return -1;
    }
 
    while (fgets(string, 100, file) != NULL)
    {
        token = strtok(string, ",");
        if (strcmp(username, token) == 0){
            token = strtok(NULL, "\n");
            if (strcmp(password, token) == 0){
                printf("Login succesful!\n");
                fclose(file);
                return 0;
            }
        }
    }
    fclose(file);
    printf("Username or password incorrect!\n");
    return 1;
}

int load_users(FILE *file){
    userArray.length;
    char string[256];
    file = fopen("users.txt", "a+");
    fclose(file);

    if (file = fopen("users.txt", "r")){
        char *token = calloc(50, sizeof(char));

        while (fgets(string, 256, file) != NULL){
            token = strtok(string, ",");
            strcpy(userArray.array[userArray.length].username, token);
            token = strtok(NULL, "\n");
            userArray.array[userArray.length].password = atoi(token);
            userArray.length++;
        }
    }
    return 0;
}


int store_users(FILE *file)
{
    file = fopen("users.txt", "w+");
    for (int i = 0; i < userArray.length; i++)
    {
        fprintf(file, "%s,%i\n", userArray.array[i].username, userArray.array[i].password);
    }
    fclose(file);
    return 0;
}


int add_user(struct User user)
{

    userArray.array[userArray.length]=user;
    userArray.length += 1;
    FILE *file;
    store_users(file);
    return 0;
}

int remove_user(struct User user)
{
    FILE *file;
    for (int i = 0; i < userArray.length; i++)
    {
        if (strcmp(user.username, userArray.array[i].username) == 0 &&
            strcmp(user.password, userArray.array[i].password) == 0)
        {
            userArray.array[i] = userArray.array[i + 1];

            for (int j=i; j < userArray.length; j++){
                userArray.array[j] = userArray.array[j + 1];
            }
            userArray.length--;
            store_users(file);
            return 0;
        }
    }
    return 1;
}

