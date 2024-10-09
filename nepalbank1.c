#include<stdio.h>
#include<string.h>

struct data {
    int customerid, balance;
    char ownername[50], address[50], occupation[50], guardianname[40];
};

struct bank {
    int cid, bal;
    char name[50], address[50], actype[50];
};

int main() {
    int choice, acctype, service, wi_de, cu_id, mon;
    char de_name[50], naam[50];
    struct data s;
    struct bank b;

    printf("Enter 1 for account opening, 2 for withdrawal or deposit, and 3 for banking services:");
    scanf("%d", &choice);
for (;;)
{


    switch (choice) {
        case 1:
            printf("\nEnter 1 for saving account, 2 for current account, and 3 for joint account:");
            scanf("%d", &acctype);
            switch (acctype) {
                case 1: // for saving account opening
                    printf("For Saving account, enter your necessary details:\n");
                    printf("Enter your name, address, and occupation:");
                    scanf("%s %s %s", s.ownername, s.address, s.occupation);
                    printf("Enter the balance you want to deposit while opening account:");
                    scanf("%d", &s.balance);
                    printf("Your saving account has been created in Nepal's Bank with account number 7413976 with name as %s and amount: %d\n", s.ownername, s.balance);
                    printf("Do you want more service; 1=yes and 2=no?\n");
                    scanf("%d", &service);
                    switch (service) {
                        case 1: // for deposit and withdrawal
                            printf("Press 1 for withdrawal and 2 for deposit");
                            scanf("%d", &wi_de);
                            if (wi_de == 1) {
                                printf("WITHDRAWAL\n");
                            } else if (wi_de == 2) {
                                printf("DEPOSIT\n");
                            } else {
                                printf("Enter a valid number");
                            }
                            break;
                        case 2:
                            printf("Thank you for banking Service!\n");
                            break;
                        default:
                            printf("Enter valid choice:\n");
                    }
                    break;
                case 2: // for current account opening
                    printf("For current account, enter your necessary details:\n");
                    printf("Enter your name, address, and occupation:");
                    scanf("%s %s %s", s.ownername, s.address, s.occupation);
                    printf("Enter the balance you want to deposit while opening account:");
                    scanf("%d", &s.balance);
                    printf("Your current account has been created in Nepal's Bank with account number 741397414 with name as %s and amount: %d\n", s.ownername, s.balance);
                    printf("Do you want more service; 1=yes and 2=no?\n");
                    scanf("%d", &service);
                    switch (service) {
                        case 1: // for deposit and withdrawal
                            printf("Press 1 for withdrawal and 2 for deposit");
                            scanf("%d", &wi_de);
                            if (wi_de == 1) {
                                printf("WITHDRAWAL\n");
                            } else if (wi_de == 2) {
                                printf("DEPOSIT\n");
                            } else {
                                printf("Enter a valid number");
                            }
                            break;
                        case 2:
                            printf("Thank you for banking Service!\n");
                            break;
                        default:
                            printf("Enter valid choice:\n");
                    }
                    break;
                case 3: // for joint account opening
                    printf("For joint account, enter your necessary details:\n");
                    printf("Enter your name, address, and occupation:");
                    scanf("%s %s %s", s.ownername, s.address, s.occupation);
                    printf("Enter the name of your guardian:\n");
                    scanf("%s", s.guardianname);
                    printf("Enter the balance you want to deposit while opening account:");
                    scanf("%d", &s.balance);
                    printf("Your current account has been created in Nepal's Bank with account number 741397414 with name as %s,%s and amount: %d\n", s.ownername, s.guardianname, s.balance);
                    printf("Do you want more service;1=yes and 2=no?\n");
                    scanf("%d", &service);
                    switch (service) {
                        case 1: // for deposit and withdrawal
                            printf("Press 1 for withdrawal and 2 for deposit");
                            scanf("%d", &wi_de);
                            if (wi_de == 1) {
                                printf("WITHDRAWAL\n");
                            } else if (wi_de == 2) {
                                printf("DEPOSIT\n");
                            } else {
                                printf("Enter a valid number");
                            }
                            break;
                        case 2:
                            printf("Thank you for banking Service!\n");
                            break;
                        default:
                            printf("Enter valid choice:\n");
                    }
                    break;
                default:
                    printf("Enter a valid account type\n");
                    break;
            }
            break;
        case 2: // credit/debit
            printf("\nEnter the personal details like name, address, and account type:\n");
            scanf("%d %s %s %s", &b.bal, b.name, b.address, b.actype);
            printf("Enter Your customer id:\n");
            scanf("%d", &b.cid);
            printf("Enter your available balance:\n");
            scanf("%d", &b.bal);
            printf("\nDo you want Deposit/Withdrawal service?; 1=yes and 2=no?\n");
            scanf("%d", &service);
            switch (service) {
                case 1: // for withdrawal and deposit
                    printf("Press 1 for withdrawal and 2 for deposit:\n");
                    scanf("%d", &wi_de);
                    if (wi_de == 1) { // withdrawal module
                        printf("---------------------------WITHDRAWAL---------------------------\n");
                        printf("\nEnter the customer name and customer id from which you want to withdrawal:\n");
                        scanf("%s %d", naam, &cu_id);
                        if ((strcmp(b.name, naam) == 0) && (cu_id == b.cid)) {
                            printf("Your available balance is %d\n", b.bal);
                            printf("Enter the amount you want to withdrawal:\n");
                            scanf("%d", &mon);
                            if (b.bal >= mon) {
                                printf("The balance after withdrawal will be %d\n", (b.bal - mon));
                            } else {
                                printf("Not enough amount in this account\n");
                            }
                        } else {
                            printf("The name or Customer id does not match\n");
                        } // end of withdrawal module
                    } else if(wi_de == 2) { // deposit module
                        printf("---------------------------DEPOSIT---------------------------\n");
                        printf("\nEnter the customer name and customer id from which you want to deposit:\n");
                        scanf("%s %d", naam, &cu_id);
                        printf("\n");
                        if ((strcmp(b.name, naam) == 0)) {
                            printf("Your available balance is %d\n", b.bal);
                            printf("Enter the name of the depositor:");
                            scanf("%s", de_name);
                            printf("Enter the amount you want to deposit:\n");
                            scanf("%d", &mon);
                            printf("\nYour account has been credited with %d by %s\nThe balance after deposit will be %d\n", mon, de_name, (b.bal + mon));
                        } else {
                            printf("The name or Customer id does not match\n");
                        }
                        break;
                    }
                    case 2: // for no service needed
                        printf("Thank you for banking with us!!\n");
                        break;
                    default:
                        printf("No option available\n");
                        break;
                }
                break; // end of deposit module
            case 3: // banking service
                printf("\nThis service is currently unavailable at the moment\n");
                break;
            default:
                printf("Please, enter a valid number\n");
                break;
        }
}

    }
