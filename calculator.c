#include<stdio.h>

void basic_arithmetic_operations(void)
{
    // Code for Basic Arithmetic Operations
    printf("You selected Basic Arithmetic Operations.\n");
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    int operation;
    scanf("%d", &operation);

    switch(operation)
    {
        case 1:
        {
            //Addition
            float num, sum=0.0;
            int i = 0;
            printf("Enter '0' to end input\n");
            while(1)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                if(num == 0)
                    break;
                else
                    sum += num;
                i++;    
            }
                    
            printf("Sum = %.2f\n", sum);
            break;
        }
                    
                    
        case 2: 
        {
            //Subtraction   
            float num, sub;
            int i = 0;
            printf("Enter '0' to end input\n");
            while(1)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                if(num == 0)
                    break;
                            
                if(i == 0)
                    sub = num;
                else
                    sub -= num;
                i++;    
            }
                    
            printf("Subtraction = %.2f\n", sub);
            break;
        }
                    
                    
        case 3: 
        {
            //Multiplication
            float num, multi=1.0;
            int i = 0;
            printf("Enter '0' to end input\n");
            while(1)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                if(num == 0)
                    break;
                else
                    multi *= num;
                i++;    
            }
                    
            printf("Multiplication = %.2f\n", multi);
            break;
        }

        case 4: 
        {
            //Division
            float dividend, divisor, quotient;
            printf("Enter dividend: ");
            scanf("%f", &dividend);
            printf("Enter divisor: ");
            scanf("%f", &divisor);
            if(divisor != 0)
            {
                quotient = dividend / divisor;
                printf("Quotient = %.2f\n", quotient);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }                    
            break;
        }
        default: printf("Invalid operation choice. Please try again.\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("***Calculator***\n");
        printf("Your menu for the calculator is as follows:\n");
        printf("1. Basic Arithmetic Operations\n");
        printf("2. Power & modulus operations\n");
        printf("3. Expression evaluation\n");
        printf("4. History\n");
        printf("5. Clear History\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1: 
                basic_arithmetic_operations();
                break;
            case 2:
            // Code for Power & modulus operations
                break;
            case 3:
            // Code for Expression evaluation
                break;
            case 4:
            // Code for History
                break;
            case 5:
            // Code for Clear History
                break;
            case 6:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    while(choice != 6);
    return 0;
}