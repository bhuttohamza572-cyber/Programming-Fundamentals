#include <stdio.h>

int main() {
  char name[50];
    printf("Enter the name of student: ");
    fgets(name,sizeof(name),stdin);
    printf("The name is: ");
    puts(name);
}
