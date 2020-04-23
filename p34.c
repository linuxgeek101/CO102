#include <stdio.h>
typedef struct Emp{
  char name[256];
  int age;
  double salary;
} Emp;

int main()
{
  FILE* fil = NULL;
  fil = fopen("emp.txt", "w");
  //struct emp emp1 = {"Richard Hanrick", 25, 70000.00};
  Emp emp1;
  printf("Enter your name : ");
  fgets(emp1.name, 50, stdin); 
  printf("Enter your age : ");
  scanf("%d", &emp1.age);
  printf("Enter your salary : ");
  scanf("%lf", &emp1.salary);
  fprintf(fil, "Name : %sAge: %i\nSalary: %.2lf\n",emp1.name, emp1.age, emp1.salary);
  fclose(fil);

 
}
