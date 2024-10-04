#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0) {
        printf("The number is divisible by both 5 and 7.\n");
    } else if (num % 5 == 0) {
        printf("The number is divisible by 5.\n");
    } else if (num % 7 == 0) {
        printf("The number is divisible by 7.\n");
    } else {
        printf("The number is not divisible by 5 or 7.\n");
    }

    return 0;
}
