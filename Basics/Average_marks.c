//Calculating Avg marks of the student

#include<stdio.h>
int main(){
    int Roll_no, m1,m2,m3,m4,m5,m6,total;
    float average,Percent;
    printf("Enter the Roll Number of the student: ");
    scanf("%d",&Roll_no);
    printf("Enter the Subject 1 marks: ");
    scanf("%d",&m1);
    printf("Enter the Subject 2 marks: ");
    scanf("%d",&m2);
    printf("Enter the Subject 3 marks: ");
    scanf("%d",&m3);
    printf("Enter the Subject 4 marks: ");
    scanf("%d",&m4);
    printf("Enter the Subject 5 marks: ");
    scanf("%d",&m5);
    printf("Enter the Subject 6 marks: ");
    scanf("%d",&m6);
    total = m1 + m2 + m3 + m4 + m5 + m6;
    average = total / 6.0;
    printf("=====Student Details=====\n");
    printf("Roll_Number: %d\n",Roll_no);
    printf("Subject 1: %d\nSubject 2: %d\nSubject 3: %d\nSubject 4: %d\nSubject 5: %d\nSubject 6: %d\n",m1,m2,m3,m4,m5,m6);
    printf("Total marks: %d\n",total);
    printf("Average marks: %6.2f\n",average);
    return 0;
}