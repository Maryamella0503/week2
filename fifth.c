#include<stdio.h>

int main() {
    float length;
    float width;
    float area;
    printf("insert a length:\n");
    scanf("%f", &length);
    printf ("insert a width:\n");
    scanf("%f", &width);
    area = length * width;
    printf("the area of the rectangle is: %f\n", area);
    return 0;
}