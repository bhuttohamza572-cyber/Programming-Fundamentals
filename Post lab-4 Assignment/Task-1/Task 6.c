#include <stdio.h>

int main() {
    float temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&temp);

    float ans=(temp * 9/5) + 32;

    printf("Temperature in Fahrenheit=%f",ans);
}
