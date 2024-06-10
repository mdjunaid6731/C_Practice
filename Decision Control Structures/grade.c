/*Write a program to calculate grade based on average of marks.
if average is more than or equal to 70 then grade is A
if average is between 50 and 70 then grade is B
if average is between 40 and 50 then grade is C
else grade is F*/

#include<stdio.h>

int main(){
    int roll_num, m1,m2,m3, total;
    float avg;
    char name;
    printf("Enter the Roll Number of the Student:");
    scanf("%d",&roll_num);
    printf("Enter the subject wise marks:");
    scanf("%d%d%d",&m1,&m2,&m3);
    total =  m1+m2+m3;
    avg = total/3.0;
    printf("Roll Number: %d\n",roll_num);
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %6.2f\n",avg);
    if(avg>=70)
        printf("Grade A");
    else if((avg>=50)&&(avg<70))
        printf("Grade B");
    else if((avg>=40)&&(avg<50))
        printf("Grade C");
    else    
        printf("Grade F");
    return 0;
}