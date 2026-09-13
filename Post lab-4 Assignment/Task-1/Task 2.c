#include <stdio.h>

int main() {
   unsigned int days;
    printf("Enter the number of late days: ");
    scanf("%d",&days);
    if(days==0){
        printf("NO fine");
    }
    else if(days<=5){
        printf("Fine: Rs. 50");
    }
    else if(days<=10){
        printf("Fine: Rs. 100");
    }
    else printf("Fine: Rs.200");
    
}
