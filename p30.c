// Program to find the area and perimeter of a circle, rectangle, square and triangle using function.

#include <stdio.h>
#include <math.h>
//Function prototypes
double areaCircle(double r);
double perCircle(double r);
double areaTriangle(double a, double b, double c);
double perTriangle(double a, double b, double c);
double areaSquare(double s);
double perSquare(double s);
double areaRect(double l, double w);
double perRect(double l, double w);
//main function
int main()
{
  double r, s, l, w, a, b, c;
  printf("Enter the radius of circle : ");
  scanf("%lf", &r);
  printf("Enter the side a, b and c of triangle : ");
  scanf("%lf %lf %lf", &a, &b, &c);
  printf("Enter the side of square : ");
  scanf("%lf", &s);
  printf("Enter the length and breadth of rectangle : ");
  scanf("%lf %lf", &l, &w);
  printf("The area of :\n");
  printf("Circle : %.2lf\n", areaCircle(r));
  printf("Triangle : %.2lf\n", areaTriangle(a, b, c));
  printf("Square : %.2lf\n", areaSquare(s));
  printf("Rectangle : %.2lf\n", areaRect(l, b));
  printf("The perimeter of :\n");
  printf("Circle : %.2lf\n", perCircle(r));
  printf("Triangle : %.2lf\n", perTriangle(a, b, c));
  printf("Square : %.2lf\n", perSquare(s));
  printf("Rectangle : %.2lf\n", perRect(l, b));
}
double areaCircle(double r)
{
  return M_PI * r * r;
}
double perCircle(double r)
{
 return 2 * M_PI * r;
}
double areaTriangle(double a, double b, double c)
{
  double s = perTriangle(a,b,c)/2;
  return s * (s - a) * (s - b) * (s - c);
}
double perTriangle(double a, double b, double c)
{
  return a + b + c;
}
double areaSquare(double s)
{
  return s * s;
}
double perSquare(double s)
{
  return 4 * s;
}
double areaRect(double l, double w)
{
  return l * w;
}

double perRect(double l, double w)
{
  return 2 * (l + w);
}
