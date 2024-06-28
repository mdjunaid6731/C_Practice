#include<stdio.h>

int main(){
    int age;
    char MaritalStatus, Gender;
    printf("Enter the Marital Status, Gender , Age(e.g. m,m,24):");
    scanf("%c,%c,%d",&MaritalStatus,&Gender, &age);
    if(MaritalStatus == 'm')
    {
        printf("You can not marry!");
    }
    else if(MaritalStatus == 'u')
    {
        if(Gender == 'm')
        {
            if(age >= 21)
                printf("You can marry");
            else
                printf("You can not marry");
        }
        else if(Gender == 'f')
        {
            if(age >= 18)
                printf("You can marry");
            else
                printf("You can not marry"); 
        }
        else
        {
            printf("Invalid Input........");
        }
    }
    else
    {
        printf("Invalid Input.........");
    }
    return 0;
}