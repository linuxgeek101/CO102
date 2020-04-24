// Program to generate the employee details using struct

#include <stdio.h>
struct Employee
{
  char name[256]; //Employee's Name
  char designation[256]; //Job Title
  int age; //Employee's age
  double salary; //Employee's salary in INR per month
  int years_in; //Employee's number of years working at the company
};

int main()
{
  struct Employee e1; 

  printf("Enter employee's name : ");
  fgets(e1.name, 256, stdin);
  printf("Enter employee's job title : ");
  fgets(e1.designation, 256, stdin);
  printf("Enter employee's age : ");
  scanf("%d", &e1.age);
  printf("Enter employee's Salary in INR per month : ");
  scanf("%lf", &e1.salary);
  printf("Enter employee's no. of years at the company : ");
  scanf("%d", &e1.years_in);

  printf("Employee name : %s", e1.name);
  printf("Job Title : %s", e1.designation);
  printf("Age : %i\n", e1.age);
  printf("Salary : Rs.%.2lf/- per month\n", e1.salary);
  printf("Number Of Years at the Company = %i\n", e1.years_in);
}
