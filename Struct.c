#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[50];//name of employee
    int empno;
    signed int salary;
    char a[25];//department name
} Employee;
 
int main()
{
    int i;
    Employee emp[20];
    printf("*************Enter Employee Details**********************\n \n");
    for(i=1; i<=20; i++)
    {
     printf("Employee %d:- \n",i);
        //Name
        printf("Name: ");
        scanf("%s",emp[i].name);
        //Employee number
        printf("Employee Mobile Number: ");
        scanf("%d",&emp[i].empno);
        //department name
        printf("Department Name: ");
        scanf("%s",emp[i].a);
        //Salary
        printf("Salary: ");
        scanf("%d",&emp[i].salary);
        printf("\n");
    }
 
    printf("***********************Details************************\n");
 
    for(i=1; i<=20; i++)
    {
 
        printf("Name \t: ");
        printf("%s \n",emp[i].name);
 
        printf("Employee number \t: ");
        printf("%d \n",emp[i].empno);
 
        printf("Department Name:\t");
        printf("%s \n",emp[i].a);
        
        printf("Salary \t: ");
        printf("%d \n",emp[i].salary);
 
        printf("\n\n");
    }
 
    return 0;
 
}
