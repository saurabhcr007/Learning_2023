#include<stdio.h>

void calculator(int a,char b, int c){
    float result=0;
    switch (b)
    {
    case '+':result=a+b;
            printf("The addition of %d and %d is : %.2f",a,c,result);
        break;
    case '-': result=a-b;
            printf("The substration of %d and %d is : %.2f",a,c,result);
        break;
    case '*': printf("The multiplication of %d and %d is : %.2f",a,c,result);
        break;
    case '/':if (b != 0) {
                result=a/b;
                printf("The division of %d and %d is : %.2f",a,c,result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            } 
        break;    
    default: printf("Enter the valid Operator");
        break;
    }

}

int main(){
    int num1,num2;
    char op[1];
    printf("Enter Number1: ");
    scanf("%d",&num1);
    printf("Enter the operator: ");
    scanf("%c",&op);
    printf("Enter Number2: ");
    scanf("%d",&num2);
    calculator(num1,op,num2);
}