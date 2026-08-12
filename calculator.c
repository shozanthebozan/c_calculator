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
        printf("\nInsert 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division or 5 for Modulo between these two numbers\n");
        scanf("%d", &operation); 

        printf("Insert first number:\n");
        scanf("%d", &nb1);

        printf("\nInsert second number:\n");
        scanf("%d", &nb2);

        

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
		
        printf("\nPress 1 to do another calculation\n");
        printf("Press 0 to end program\n");
        scanf("%d", &input);
		printf("\033[H\033[J");
		
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
            printf("\033[H\033[J");
	    printf("Invalid Input\n");
        }
	}
}
