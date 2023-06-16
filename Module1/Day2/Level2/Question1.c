#include <stdio.h>

void swapalt(int arr[], int length) {
    int temp=length/3;
    int j=0;
    for (int i=0; i<temp;i++) {
        int temp = arr[j];
        arr[j] = arr[j+2];
        arr[j+2] = temp;
        j=j+3;
    }
}

int main() {
    int length;
    printf("Enter the length of the array: ");
    scanf("%d",&length);
    int arr[length];
    printf("Enter the element in array :");
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    swapalt(arr, length);
    printf("\nModified Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
