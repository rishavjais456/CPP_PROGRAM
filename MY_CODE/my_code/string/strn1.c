#include<stdio.h>
#include<stdlib.h>
void ConvertCase(char*);

int main()
{
    int n=500;
    char* str=(char*)malloc(n*sizeof(char));

    if(str==NULL)
    {
        printf("memory not allocated");
        return 0;
    }
    printf("Enter the string :\n");
    scanf("%[^\n]s",str);
    printf("Original string is : %s\n",str);
    ConvertCase(str);
    printf("Converted string is : %s\n",str);
    return 0;
}
    void ConvertCase(char* str)
    {
        while(*str)
        {
            if((*str>=97) && (*str<=122))
            {
                *str = *str-32;
            }
            else if ((*str>=65) && (*str<=90))
            {
                *str = *str+32;
            }
            str++;
        }
    }
    
        
    

