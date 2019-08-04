#include<stdio.h>

struct Rectangle
{
    /* data */
    int height;
    int width;
};





int main()

{
    // Declaring the rectangle
    struct Rectangle r;

    // declaring and initializing the rectangle 
    // struct Rectangle r={1,2};
    
    r.height=20;
    r.width=30;

    // Printing the content inside the Rectangle Struct
    printf("The Area Unites Squared %d\n",r.height*r.width);

    return 0;
}