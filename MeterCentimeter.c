#include <stdio.h>

int main() {
    int cm, meters, remaining_cm;
    printf("Enter the length in centimeters: ");
    scanf("%d", &cm);

    meters = cm / 100;
    remaining_cm = cm % 100;

    printf("The length is %d meters and %d centimeters.\n", meters, remaining_cm);

    return 0;
}
