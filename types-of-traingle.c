#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter the three sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b){
        printf("The triangle is valid\n");
        if (a==b && b==c){
            printf("The triangle is equilateral\n");
        }
        else if (a==b || b==c || c==a){
            printf("The triangle is isosceles\n");
        }
        else{
            printf("The triangle is scalene\n");
        }
    }
    else{
        printf("The triangle is not valid\n");
    }
    return 0;
}