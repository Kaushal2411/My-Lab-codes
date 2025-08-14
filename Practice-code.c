#include<stdio.h>
int main() {
    int a, b,c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("Enter a third number: ");
    scanf("%d", &c);
    printf("a*b*c= %d\n",a*b*c ); // This line calculates the product of a, b, and c.
    printf("a+b+c= %d\n",a+b+c ); // This line calculates the sum of a, b, and c.
    printf("a-b-c= %d\n",a-b-c ); // This line calculates the difference between a, b, and c.
    printf("(a+b)*c= %d\n", (a+b)*c ); // This line calculates the product of the sum of a and b with c.
    printf("a/b= %d\n", a/b ); // This line calculates the quotient of a divided by b.
    return 0;
}
