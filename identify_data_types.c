#include<stdio.h>
#include<string.h>

int main()
{
    char entry[100];
    printf("\n\n\t\tIdentifies the data type of the entered values\n");
    printf("\t\t---------------------------------------------\n");
    printf("Enter the values to check their data types\n");
    printf("To exit, enter 'exit'");
    
    for(int i = 1; i > 0; i++)
    {
        printf("\n\nEnter the %d value to check its data type: ",i);
        scanf("%s",entry);

        if(strcmp(entry,"exit") == 0 || strcmp(entry,"EXIT") == 0 || strcmp(entry,"Exit") == 0)
        {
            printf("Exiting the program.\n");
            break;
        }
            
        int len = strlen(entry);
        int isInteger = 0, isString = 0, dot_count = 0,digit_count = 0;
        int c = 0;

        if(entry[0] == '-' || entry[0] == '+')
            c++;
            

        for(int j = 0; j < len; j++)
        {                    
            if(c == 1 && (entry[j+1] >= '0' && entry[j+1] <= '9') && dot_count == 0)
            {
                isInteger++;
                if(isInteger == len-1)
                {
                    printf("Data type: Integer\n");
                    break;
                }  
            }
            else if(c == 0 && (entry[j] >= '0' && entry[j] <= '9') && dot_count == 0)
            {
                isInteger++;
                if(isInteger == len)
                {
                    printf("Data type: Integer\n");
                    break;
                }  
            }
                       
            else if(entry[j] >= 'a' && entry[j] <= 'z' || entry[j] >= 'A' && entry[j] <= 'Z')
            {
                isString++;
                if(isString == len)
                {
                    if(len == 1)
                    {
                        printf("Data type: Character\n");
                        break;
                    }
                    else
                    {
                        printf("Data type: String\n");
                        break;
                    }
                }
            }

            else if(entry[j] == '.')
            {
                

                if((entry[j-1] >= '0' && entry[j-1] <= '9') && (entry[j+1] >= '0' && entry[j+1] <= '9'))
                {
                    digit_count = 0;
                    for(int k = 0; k < len; k++)
                    {
                        if(entry[k] >= '0' && entry[k] <= '9')
                            digit_count++;
                    }
                
                    if((digit_count == len-1 ) || (digit_count == len-2 && (entry[0] == '-' || entry[0] == '+')))
                    {
                        printf("Data type: Float or Double\n");
                        break;
                    }

                    else
                    {
                        printf("Invalid input.\n");
                        break;
                    }  
                }           
            }
            
            else
            {
                printf("Invalid input.\n"); 
                break;
            }
                                    
        }
    }        
}