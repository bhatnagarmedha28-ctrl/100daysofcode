//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

#include <stdio.h>
int main()
{
    int percentage;
    char grade;

    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);

    if(percentage >= 90 && percentage <= 100)
    {
        grade = 'A';
    }
    else if(percentage >= 80 && percentage < 99)
    {
        grade = 'B';
    }
    else if(percentage >= 70 && percentage < 89)
    {
        grade = 'C';
    }
    else if(percentage >= 60 && percentage < 69)
    {
        grade = 'D';
    }
    else if(percentage >= 0 && percentage < 60)
    {
        grade = 'F';
    }
    else
    {
        printf("Invalid percentage entered.\n");
        return 1;
    }

    printf("The grade is: %c\n", grade);
    return 0;
}