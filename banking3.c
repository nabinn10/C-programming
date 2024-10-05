#include<stdio.h>
#include<string.h>
struct bank{
	int cid,bal;
	char name[50],add[50],acctype[50];
};
int main()
{
	int i;

	int n,k,mon,dep,no,temp;
	char nam[50],depo[50];	
	struct bank s;
	

			printf(" enter the id of the customer: ");
			scanf("%d", &s.cid);
		
			printf(" enter the name of the customer: ");
			scanf("%s", &s.name);
	
			printf(" enter the address of the customer: ");
			scanf("%s", &s.add);
		
			printf(" enter the account type of the customer: ");
			scanf("%s", &s.acctype);
		
			printf(" check the balance in the account: ");
	 		scanf("%d", &s.bal);
	 		 printf("\n");
            printf("\n");
	
	printf(" press 1 for the withdrawl process ,2 for deposit process and 3 for customer care: ");
	scanf("%d",&k);
	printf("\n");
	printf("\n");
		printf("-------------------------------processsing-----------------------------------");
					printf("\n");
			printf("\n");

	if (k==1)
	{
		printf(" The customer wnts to withdraw the money ");
		printf("\n");
		printf("\n");			printf(" ask about the name and account number of the account holder: ");
		scanf(" %s %d",&nam,&no);
	
        if ((strcmp(s.name, nam) == 0) && (s.cid == no)) 
		{  
       		 printf("enter the amount that the user wants to withdraw:\n ");
			scanf("%d", &mon);
            if (mon <= s.bal)
			 {
                s.bal -= mon;
                printf("The money after withdrawal will be %d\n", s.bal);
                printf("\n");
                printf("\n");
                printf(" your accout has been debited with Rs %d by %c",s.bal,s.name);
            } 
				else
				{
                printf("There is no sufficient balance.\n");
           		}
		}
		
		
		
		else
		{
			printf(" the username and the account number didnot match");
		}

	}
	
	
	
		else if (k==2)
		{
		
	
			printf(" the account holder wants to deposit the money");
			printf("\n");
			printf("\n");
			printf(" ask about the name and account number of the account holder: ");
			scanf("%s %d",&nam,&no);
	
			if ((strcmp(s.name, nam) == 0) && (s.cid == no)) 
				{
					printf("enter the name of the depositer:\t");
					scanf("%s",&depo);  
           			printf("enter the amount that the user wants to deposit: ");
           			scanf("%d", &dep);
					s.bal += dep;
					printf("\n");
            		printf("\n");
           			printf("The amount after deposit will be %d\n", s.bal);
            		printf("\n");
            		printf("\n");
            		printf(" your accout has been credited with Rs %d by %s",s.bal,depo);
            		printf("\n");
            		printf("\n");
        		}
			else
				{
					printf(" the username and the account number didnot match");
				}
		


		}
		
		
		
		else if (k==3)
		{
		printf(" our service is currently unavailable");
		}
		
		
	 	else
		 {
 			printf("enter the valid number");
		 }

}



