// Program to generate the employee details using struct

#include <stdio.h>
struct Employee
{
  char* name; //Employee's Name
  char* designation; //Job Title
  int age; //Employee's age
  double salary; //Employee's salary in INR per month
  int years_in; //Employee's number of years working at the company
};

int main()
{
  struct Employee e1 = {"Eric Raymond", "Software Engineer", 52, 65000, 22};
  printf("Employee name : %s\n", e1.name);
  printf("Job Title : %s\n", e1.designation);
  printf("Age : %i\n", e1.age);
  printf("Salary Rs.%.2f/- per month\n", e1.salary);
  printf("Number Of Years at the Company = %i\n", e1.years_in);
}
