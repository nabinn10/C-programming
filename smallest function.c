#include <stdio.h>

void small() {
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int smallest,i;
     int arr[100];

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
       
        scanf("%d", &arr[i]);

        if (i == 0 || arr[i]< smallest) {
            smallest = arr[i];
        }
    }

    // Display the result
    printf("Smallest number: %d\n", smallest);
}

int main() {
	
    Small();

    return 0;
    
}

