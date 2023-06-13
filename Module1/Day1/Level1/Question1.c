#include<stdio.h>

//using ternary oprator
void checkter(int num1, int num2){
    printf("The Greatest number is %d\n", (num1>num2)?num1:num2);
}

//using if else 
void checkif(int num1, int num2){
    if(num1 > num2){
        printf("Number first is largest then second number");
    }
    else if (num1 < num2){
        printf("Number second is largest then first number");
    }
    else
    {
        printf("Both numbers are equal");
    }
}

int main(){
    int num1,num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    checkter(num1,num2);
    checkif(num1,num2);
    return 0;
}