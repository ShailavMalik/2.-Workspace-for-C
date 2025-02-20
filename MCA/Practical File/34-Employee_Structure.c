// Define a structure named 'Employee' with employee ID, name, and salary.
// Write a program to input data for three employees,
// find the one with the highest salary, and display their details
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Employee
{
    int empID;
    char name[20];
    float salary;
};

int main()
{
    struct Employee emp[3];
    emp[0].empID = 101;
    strcpy(emp[0].name, "Alice");
    emp[0].salary = 50000.0;

    emp[1].empID = 102;
    strcpy(emp[1].name, "Bob");
    emp[1].salary = 60000.0;

    emp[2].empID = 103;
    strcpy(emp[2].name, "Charlie");
    emp[2].salary = 55000.0;

    int max = 0;
    for (int i = 1; i < 3; i++)
    {
        if (emp[i].salary > emp[max].salary)
        {
            max = i;
        }
    }
    printf("Employee with highest salary is: \n");
    printf("Employee ID: %d\n", emp[max].empID);
    printf("Name: %s\n", emp[max].name);
    printf("Salary: %.2f\n", emp[max].salary);

    getch();
    return 0;
}