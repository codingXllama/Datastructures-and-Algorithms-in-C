// Creating a complex number struct in C
// Please NOTE ** We are not taking in imaginary number, instead just 2 ints and returning the sum
// The structure decleration is correct for computing imaginary numbers, but we will just be outputing the sum of those 2 number

#include <stdio.h>

struct ComplexNo
{
    int imaginaryNum;
    int realNum;
};

int main()
{

    struct ComplexNo myComplexNo;
    int imgNum;
    int realNum;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &imgNum, &realNum);

    myComplexNo.imaginaryNum = imgNum;
    myComplexNo.realNum = realNum;

    printf("Soln: %d\n", myComplexNo.imaginaryNum + myComplexNo.realNum);

    return 0;
}