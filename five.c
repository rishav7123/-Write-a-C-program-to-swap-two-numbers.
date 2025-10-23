// Write a C program to swap two numbers.
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    int temp;
    
  
    printf("Before swapping: a = %d , b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;

}