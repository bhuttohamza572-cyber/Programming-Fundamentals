#include <stdio.h>

int main() {
    int x;
    printf("Enter the length and width of rectangle: ");
    scanf("%d %d",&l,&w);

    int area=l*w;
    int perimeter=2*(l+w);

    printf("Area=%d\n",area);
    printf("Perimeter=%d",perimeter);
}
