#include<stdio.h>
int main() {
    // Menu items and their prices
    float menuPrices[5] = {10.99, 8.50, 6.75, 12.25, 9.99};
    char *menuItems[5] = {"Burger", "Pizza", "Sandwich", "Steak", "Salad"};

    // Variables to store user input
    int itemNumber, quantity,i;
    float totalBill = 0.0;

    
	printf("Welcome to the restaurant!\n");

    // Display menu
    printf("Menu:\n");
    for ( i = 0; i < 5; i++) {
        printf("%d. %s - $%.2f\n", i + 1, menuItems[i], menuPrices[i]);
    }

    // Ask for user input
    printf("Enter the number of the item you want to order: ");
    scanf("%d", &itemNumber);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    // Calculate total bill
    if (itemNumber >= 1 && itemNumber <= 5) {
        totalBill = calculateTotalBill(quantity, menuPrices[itemNumber - 1]);
        printf("You ordered %d %s.\n", quantity, menuItems[itemNumber - 1]);
        printf("Your total bill is: $%.2f\n", totalBill);
    } else {
        printf("Invalid item number!\n");
    }

    printf("Thank you for dining with us!\n");

    return 0;
}
