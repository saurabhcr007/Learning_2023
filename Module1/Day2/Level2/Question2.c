#include<stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int isequal(int arr1[], int arr2[] ,int length){
    int flag=0;
    for(int i=0;i<length;i++){
        if(arr1[i]!=arr2[i]){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){return 1;}
    else{return 0;}
}

int main(){
    int length;
    printf("Enter the length of array :");
    scanf("%d",&length);

    int arr1[length];
    int arr2[length];

    printf("Enter the element of first array :");
    for(int i=0;i<length;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the element of second array :");
    for(int i=0;i<length;i++){
        scanf("%d",&arr2[i]);
    }

    qsort(arr1, length, sizeof(int), cmpfunc);

    qsort(arr2, length, sizeof(int), cmpfunc);

    if(isequal(arr1,arr2,length)==0){
        printf("Both arrays have equal element");
    }

    else{
        printf("Both arrays don't have equal element");
    }

}