#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sum(int numberOne, int numberTwo);
void substraction(int numberOne, int numberTwo);
void product(int numberOne, int numberTwo);
void division(int numberOne, int numberTwo);
void modulus(int numberOne, int numberTwo);
void continuance(int input);

int main()
{	
	
    int nb1, nb2, operation, cont=1;

    while(1)
    {
        printf("1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Modulo\n\n");

        printf("Insert first number:\n");
        scanf("%d", &nb1);

        printf("\nInsert second number:\n");
        scanf("%d", &nb2);

        printf("\nInsert type of operation:\n");
        scanf("%d", &operation);

        switch(operation)
        {
        case 1:
            sum(nb1, nb2);
	    break;
			
        case 2:
            substraction(nb1, nb2);
            break;

        case 3:
            product(nb1, nb2);
            break;

        case 4:
	    division(nb1, nb2);
            break;

        case 5:
            modulus(nb1, nb2);
            break;

        default:
            printf("Invalid Input\n");

        }
		
	continuance(cont);	
    }
	
	return 0;

}

void sum(int numberOne, int numberTwo)
{
	printf("The sum is: %d\n", numberOne + numberTwo);
}

void substraction(int numberOne, int numberTwo)
{
	printf("The difference is: %d\n", numberOne - numberTwo);
}

void product(int numberOne, int numberTwo)
{
	printf("The product is: %d\n", numberOne * numberTwo);
}

void division(int numberOne, int numberTwo)
{
	printf("The quotient is: %d\n", numberOne / numberTwo);
}

void modulus(int numberOne, int numberTwo)
{
	printf("The remainder is: %d\n", numberOne % numberTwo);
}

void continuance(int input)
{
	while(1)
	{
		printf("\nProceed with another operation?\n");
        printf("-press 1 to proceed\n");
        printf("-press 0 to end program\n");
        scanf("%d", &input);
		system("cls");
		
        if(input==0)
        {
            exit(0);
        }
		
	if(input==1)
        {
            break;
        }
		
        else if(input!=1 && input!=0)
        {
            system("cls");
	    printf("Invalid Input\n");
        }
	}
}
