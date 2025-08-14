#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a number\n");
    scanf("%d", &a); // The scanf function is used to take input from the user
    // The & operator is used to get the address of the variable where the input will be stored.
    printf("Enter another number \n");
    scanf("%d", &b);
    printf("The sum of the number %d and %d is %d \n",a ,b, a+b);
    return 0;
}
