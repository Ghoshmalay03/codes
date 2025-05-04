#include<stdio.h>
int main(){

    //area of circle
    int radius;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    float area=3.14*radius*radius;
    printf("Area of the circle is %f", area);
    return 0;
}