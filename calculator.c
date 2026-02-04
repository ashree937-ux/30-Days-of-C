#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void divide_fun(void)
{
    char num[100];
    float divide;
    int i = 0;
    printf("Enter '=' to end input\n");
    while(1)
    {
        printf("Enter number %d: ", i+1);
        scanf("%s", num);
        if(strcmp( num, "=") == 0)
            break;
        else
        {
            if(i == 0)
                divide = strtof( num, NULL);
            else
                divide /= strtof( num, NULL);
        }    
        i++;        
    }

    printf("Division = %.2f\n", divide);   
          
}

void multi_fun(void)
{
    char num[100];
    float multi=1.0;
    int i = 0;
    printf("Enter '=' to end input\n");
    while(1)
    {
        printf("Enter number %d: ", i+1);
        scanf("%s", num);
        if(strcmp( num, "=") == 0)
            break;
        else
            multi *= strtof( num, NULL);
        i++;            
    }
                    
    printf("Multiplication = %.2f\n", multi);
}

void sub_fun(void)
{
    char num[100];  
    float sub;
    int i = 0;
    printf("Enter '=' to end input\n");
    while(1)
    {
        printf("Enter number %d: ", i+1);
        scanf("%s", num);
        if(strcmp( num, "=") == 0)
            break;
                                
        if(i == 0)
            sub = strtof( num, NULL);
        else
            sub -= strtof( num, NULL);
        i++;    
    }
                    
    printf("Subtraction = %.2f\n", sub);
}

void add_fun(void)
{
    char num[100];
    float sum = 0.0;        
    int i = 0;
    printf("Enter '=' to end input\n");
    while(1)
    {
        printf("Enter number %d: ", i+1);
        scanf("%s", num);
        if(strcmp( num, "=") == 0)
            break;
        else
            sum += strtof( num, NULL);
        i++;    
    }
                    
    printf("Sum = %.2f\n", sum);
}
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
            add_fun();
            break;
        }
                    
                    
        case 2: 
        {
            //Subtraction 
            sub_fun();
            break;
        }
                    
                    
        case 3: 
        {
            //Multiplication
            multi_fun();
            break;
        }

        case 4: 
        {
            //Division
            divide_fun();                       
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