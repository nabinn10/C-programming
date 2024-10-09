#include <stdio.h>

int main() {
    char string1[100], string2[100];

    printf("Enter first string: ");
    scanf("%s",&string1);

    printf("Enter second string: ");
    scanf("%s",&string2);

    char *ptr1 = string1;
    char *ptr2 = string2;


    if (*ptr1 == *ptr2) {
        printf("The two strings are equal.\n");
    } else if ((char)*ptr1 > (char)*ptr2) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The first string is less than the second string.\n");
    }

    return 0;
}

