// Define a structure student having field roll number, name and marks number , accept data  of 5 students and re print

#include<stdio.h>

struct Student{
    char name[50];
    int roll_no;
    int m1,m2,m3;
};

int main(){
    int i;
    struct Student s[5];
    for(i=0; i<5; i++){
        printf("Enter Student %d data....:\n",i+1);
        printf("Enter name: ");
        scanf("%s", &s[i].name);
        printf("Enter Roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Marks of subject 1: ");
        scanf("%d", &s[i].m1);
        printf("Enter Marks of subject 2: ");
        scanf("%d", &s[i].m2);
        printf("Enter Marks of subject 3: ");
        scanf("%d", &s[i].m3);
    }
    for(i=0; i<5; i++){
        printf("\n**Student detials***\n");
        printf("Student Name: %s\n", s[i].name);
        printf("Student Roll Number : %d\n", s[i].roll_no);
        printf("Subject marks  1: %d\n", s[i].m1);
        printf("Subject marks  2: %d\n", s[i].m2);
        printf("Subject marks  3: %d\n", s[i].m3);
    }
    return 0;
}