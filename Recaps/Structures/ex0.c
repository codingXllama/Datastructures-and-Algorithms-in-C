// Example 0 of using Structures to find the area of a circle



#define PI 3.14
#include <stdio.h>
#include <math.h>



struct Circle{

    double radius;


};


int main()
{
    // Defining the struct
    struct Circle myCir;
    double userRadius;
    
    printf("Enter the Radius of the Circle: ");
    scanf("%lf",&userRadius);

    myCir.radius=pow(userRadius,2.0);

    printf("%lf ",myCir.radius);

    // Printing result of the Area of circle 
    // prinft("Area is %lf",myCir.radius);
    // printf("The Area of Circle is: %.2lf\n",(myCir.radius=pow(,2))*PI);

    return 0;
}