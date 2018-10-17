/*
 * This program counts how many characters are in a string entered by the user.
 *
 * Author: Jonathan Nuñez de Caceres.
 * Email: A01411277@itesm.mx
 * Date: 17/10/18
 */

#include <stdio.h> //Standard input/output header

//Function to count how many characters are in the string.
int StrLength(char string[]) {
    int length;

    //Increments the length variable for each character until the end of the string.
    for (length = 0; string[length] != '\0' && string[length] != '\n'; length++);

    return length;
}

int main() {
    //Declaration of variable
    char string[100];

    printf("Enter a text:");
    fgets(string, sizeof(string), stdin);

    printf("The length of the string is: %d", StrLength(string));

    return 0;
}
