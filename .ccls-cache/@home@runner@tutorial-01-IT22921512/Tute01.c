/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    float subject1, subject2, average;
    
    printf("Enter marks of subject 1: ");
    scanf("%f", &subject1);
    
    printf("Enter marks of subject 2: ");
    scanf("%f", &subject2);
    
    average = (subject1 + subject2) / 2.0;
    
    printf("Average marks: %.2f\n", average);
    
    return 0;
}

