#include<stdio.h>

float percentage(int a,int b,int c){
    float temp=0;
    int sum=a+b+c;
    temp=(float)sum/300;
    temp=temp*100;
    return temp;
}

int total(int a,int b,int c){
    return a+b+c;
}

int main(){
    int rollno,P_mark=10,C_mark=10,M_mark=10;
    char name[100];
    printf("Enter Rollno. :");
    scanf("%d",&rollno);
    printf("Enter Full Name :");
    scanf(" %[^\n]", name);
    printf("Enter Chemistry marks :");
    scanf("%d",&C_mark);
    printf("Enter Mathematics marks :");
    scanf("%d",&M_mark);
    printf("Enter physics marks :");
    scanf("%d",&P_mark);
    
    printf("Roll No.: %d\n",rollno);
    printf("Full Name:%s\n",name);
    printf("Physics Marks : %d\n",P_mark);
    printf("Chemistry Marks : %d\n",C_mark);
    printf("Mathematics MArks :%d\n",M_mark);
    printf("Total Marks :%d\n",total(P_mark,C_mark,M_mark));
    printf("Percentage :%f\n",percentage(P_mark,C_mark,M_mark));
    return 0;
}