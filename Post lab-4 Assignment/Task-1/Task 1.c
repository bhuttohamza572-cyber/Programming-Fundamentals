#include <stdio.h>

int main() {
   int marks,income;
    printf("Enter the marks: ");
    scanf("%d",&marks);

    printf("Enter the family income: ");
    scanf("%d",&income);

    if(marks>=80 || income<50000){
    printf("Scholarship Granted");
    }
    else printf("NO Scholarship");
    
}
