#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int history_count = 0;
float result_history[100];

float add_fun(void);
float sub_fun(void);    
float multi_fun(void);
float divide_fun(void);
void basic_arithmetic_operations(void);
void pow_mod_fun(void);
void store_history(float res);
void view_history(void);
void clear_history(void);

float divide_fun(void)
{
    char num[100];
    float divide;
    int i = 0;
    printf("Press enter to move between numbers.\n");
    printf("Enter '=' to end input\n");
    while(1)
    {
        printf("Enter number %d: ", i+1);
        scanf("%s", num);
        if(strcmp( num, "=") == 0)
            break;
        else if(strtof( num, NULL) == 0.0)
        {
            printf("Error: Division by zero is not allowed. Please enter a non-zero number.\n");
            continue;
        }
        else
        {
            if(i == 0)
                divide = strtof( num, NULL);
            else
                divide /= strtof( num, NULL);
        }    
        i++;        
    }

    return divide;   
          
}

float multi_fun(void)
{
    char num[100];
    float multi=1.0;
    int i = 0;
    printf("Press enter to move between numbers.\n");
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
                    
    return multi;
}

float sub_fun(void)
{
    char num[100];  
    float sub;
    int i = 0;
    printf("Press enter to move between numbers.\n");
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
                    
    return sub;
}

float add_fun(void)
{
    char num[100];
    float sum = 0.0;        
    int i = 0;
    printf("Press enter to move between numbers.\n");
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
                    
    return sum;
}
void basic_arithmetic_operations(void)
{
    int operation;
    float result;   

    // Code for Basic Arithmetic Operations
    printf("\tYou selected Basic Arithmetic Operations.\n\n");
    printf("\tSelect operation:\n");
    printf("\t1. Addition\n");
    printf("\t2. Subtraction\n");
    printf("\t3. Multiplication\n");
    printf("\t4. Division\n\n");
    printf("Enter the number corresponding to the arithmetic operation you want to perform: ");
    scanf("%d", &operation);

    switch(operation)
    {
        case 1:
        {
            //Addition
            printf("You selected Addition.\n\n");
            result = add_fun();
            printf("\nSum = %.2f\n", result);
            store_history(result);
            break;
        }
                    
                    
        case 2: 
        {
            //Subtraction 
            printf("You selected Subtraction.\n\n");
            result = sub_fun();
            printf("\nSubtraction = %.2f\n", result);
            store_history(result);
            break;
        }
                    
                    
        case 3: 
        {
            //Multiplication
            printf("You selected Multiplication.\n\n");
            result = multi_fun();
            printf("\nMultiplication = %.2f\n", result);
            store_history(result);
            break;
        }

        case 4: 
        {
            //Division
            printf("You selected Division.\n\n");
            result = divide_fun();
            printf("\nDivision = %.2f\n", result);
            store_history(result);                       
            break;
        }
        default: printf("Invalid operation choice. Please try again.\n");
    }
}


void pow_mod_fun(void)
{
    int operation;
    float num1, num2, result;
    // Code for Power & modulus operations
    printf("\tYou selected Power & modulus operations.\n\n");
    printf("\tSelect operation:\n");
    printf("\t1. Power\n");
    printf("\t2. Modulus\n\n");
    printf("Enter the number coressponding to either the power or the modulus operation: ");
    scanf("%d", &operation);

    switch(operation)
    {
        case 1:
        {
            //Power
            printf("You selected Power.\n\n");
            printf("Enter base: ");
            scanf("%f", &num1);
            printf("Enter power: ");
            scanf("%f", &num2);
            result = pow(num1, num2);
            printf("Result = %.2f\n", result);
            store_history(result);
            break;
        }
        case 2:
        {
            //Modulus
            printf("You selected Modulus.\n\n");
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
            if(num2 == 0)
              printf("Error: Modulus by zero is not allowed.\n");
            else
            {
              result = fmod(num1, num2);
              printf("Result = %.2f\n", result);
            }
            store_history(result);
            break;
        }
    }
}

void store_history(float res)
{
    if(history_count >= 100)
    {
        printf("History is full. Cannot store more results.\n");
        return;
    }
    result_history[history_count] = res;
    history_count++;
}

void view_history(void)
{
    if(history_count == 0)
    {
        printf("No history available.\n");
        return; 
    }
    
    for(int i = 0; i < history_count; i++)
    {
        printf("%d. ", i+1);
        printf(" = %.2f\n", result_history[i]);
    }
}

void clear_history(void)
{
    history_count = 0;
    printf("History cleared successfully.\n");
}

int main()
{
    int choice;

    printf("\n\n\t\t\t***Calculator***");

    do
    {
        printf("\n\n\tYour menu for the calculator is as follows:\n");
        printf("\t1. Basic Arithmetic Operations\n");
        printf("\t2. Power & modulus operations\n");
        printf("\t3. History\n");
        printf("\t4. Clear History\n");
        printf("\t5. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
            //Code for Basic Arithmetic Operations    
                basic_arithmetic_operations();
                break;
            case 2:
            // Code for Power & modulus operations
                pow_mod_fun();
                break;
            case 3:
            // Code for viewing History
                view_history();
                break;
            case 4:
            // Code for clearing History
                clear_history();
                break;
            case 5:
            // Exit
                printf("\t\tExiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    while(choice != 5);
    return 0;
}