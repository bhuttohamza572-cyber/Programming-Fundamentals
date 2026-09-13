#include <stdio.h>

int main() {
    float x,y,z;
    printf("Enter the first number: \n");
    scanf("%f",&x);
    printf("Enter the second number: \n");
    scanf("%f",&y);
    printf("Enter the third number: \n");
    scanf("%f",&z);

    float avg=(x+y+z)/3;
    printf("Average=%f",avg);
}
