#include <stdio.h>

int main() {
	int i,j;
   int fact;

    for ( i = 10; i <= 20; i++) {
        fact = 1;
        
        for ( j = 1; j <= i; j++) {
            fact=fact*j;
        }

        printf("Factorial of %d = %d\n", i, fact);
    }

    return 0;
}

