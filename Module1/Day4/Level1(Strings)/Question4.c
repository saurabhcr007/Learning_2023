#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversestring(char str[], int length){
    char temp;
    int mid=0;
    if(length%2==0){
        mid=length/2;
    }
    else{
        mid=(length+1)/2;
    }
    for(int i=0,j=length-1;i<mid;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reversed string :%s",str);
}

int main(){
    int length;
    printf("Enter the length of string :");
    scanf("%d",&length);
    char str[length];
    printf("\nEnter the string :");
    scanf("%s",str);
    printf("\nEntered String :%s",str);
    reversestring(str,length);
}