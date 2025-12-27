#include <stdio.h>

int main() {
    char name[50];
    int age;
    float price = 150.0;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age < 5) {
        price = 0;
    } 
    else if(age >= 5 && age <= 12) {
        price = price * 0.5;
    } 
    else if(age >= 60) {
        price = price * 0.7;
    }

    printf("\n----- BUS TICKET -----\n");
    printf("Date : 27-12-2025\n");
    printf("Name : %s\n", name);
    printf("Age  : %d\n", age);
    printf("Ticket Price : Rs. %.2f\n", price);
    printf("----------------------\n");

    return 0;
}