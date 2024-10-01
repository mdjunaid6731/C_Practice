// Define a structure employee having field name, id and phone number , accept values and re print

#include<stdio.h>

struct Employee{
    char name[50];
    int id;
    long phone_no;
}e;

int main(){
    printf("Enter name: ");
    scanf("%s", &e.name);
    printf("Enter emp_id: ");
    scanf("%d", &e.id);
    printf("Enter Phone number: ");
    scanf("%ld", &e.phone_no);

    printf("\n***Employee details***\n");
    printf("Employee Name: %s\n", e.name);
    printf("Employee id: %d\n", e.id);
    printf("Phone number: %ld", e.phone_no);
}