#include <stdio.h>

int main() {
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);

    int square=x*x;
    int cube=square*x;

    printf("Square=%d\n",square);
    printf("Cube=%d",cube);
}
