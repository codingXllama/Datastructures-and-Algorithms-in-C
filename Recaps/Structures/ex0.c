// Example 0 of using Structures to find the area of a circle

struct Circle{

    double radius;


};


#define PI 3.14
#include <stdio.h>
#include <math.h>


int main()
{
    // Defining the struct
    struct Circle myCir;
   

    // Printing result of the Area of circle 
    printf("The Area of Circle is: %.2lf\n",(myCir.radius=pow(2,2))*PI);

    return 0;
}