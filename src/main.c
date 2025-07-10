#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include ".\my_functions\basic_ops.h"
#include ".\my_functions\change_age.h"
#include ".\my_functions\show_greetings.h"

int choice = 0;
char name[] = "ken harvey girasol";
int age = 21;
int num;
int* pt_num = &num;

// Function definition directly in main.c
void set_random_num() {
    *pt_num = rand() % 100;
}

int main() {
    srand(time(NULL));
    
    double x, y, sum;

    while (choice >= 0) {
        printf("What do you want to do? ");
        printf("1. Show my sample greetings     3. Change my basic info\n");
        printf("2. Do basic operation           4. Display a random number\n");
        printf("Type -1 to exit\n");
        printf("Number of choice: ");
        scanf("%d", &choice);


        switch (choice) {
        case 1:
            // Display my sample greetings
            // call function with inputs no return, only print
            show_greetings(name, age);
            break;
        
        case 2:
            // do basic operations
            // call function with inputs and output
            printf("Type the first value: ");
            scanf("%lf", &x);

            printf("Type the second value: ");
            scanf("%lf", &y);
            sum = add(x, y);
            printf("%lf + %lf = %lf", x, y, sum);
            break;
        
        case 3:
            // reset age to 0
            // call function with input no return
            printf("Be 0 years old?");
            change_age(&age);
            printf("Done!");
            break;
        
        case 4:
            // display random number
            // call function with no input and no return val
            set_random_num();
            printf("Your Random number: %d\n", num);
            break;
        
        case -1:
            printf("Exiting...\n");
            break; 

        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}