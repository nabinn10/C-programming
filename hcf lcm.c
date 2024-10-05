#include <stdio.h>

int main() {
    int num1, num2, temp, i, j, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    i = num1;
    j = num2;
    while(j != 0) {
        temp = j;
        j = i % j;
        i = temp;
    }
    hcf = i;

    lcm = (num1 * num2) / hcf;

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

}

