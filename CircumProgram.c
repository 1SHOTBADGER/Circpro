#include <stdio.h>
int main(){
//watching the clippers game rightnow

const double PI = 3.14159;
double radius;
double circumference;
double area;




printf("\nenter radius of circle");
scanf("%lf", &radius);

circumference =  2 * PI * radius;
area = PI * radius * radius;   
printf("\ncircumference: %lf", circumference);
printf("\narea is %lf", area);
    return 0;
}
//// another test to see how to update