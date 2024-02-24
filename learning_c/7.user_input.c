#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store the name with a maximum length of 25 characters
    char name[25]; //bytes


    // Declare an integer variable to store the age
    int age;


    // Prompt the user to enter their name
    printf("\nWhat's your name?");


    // Read input from the user using fgets to avoid buffer overflow
    fgets(name, 25, stdin);


    // Remove the newline character from the end of the name (if present)
    name[strlen(name)-1] = '\0';

    // Prompt the user to enter their age
    printf("How old are you?");


    // Read the age input from the user
    scanf("%d", &age);

    // Display a personalized greeting using the entered name
    printf("\nHello %s, how old are you?", name);


    // Display the entered age
    printf("\nYou are %d years old\n", age);

    return 0;
}
