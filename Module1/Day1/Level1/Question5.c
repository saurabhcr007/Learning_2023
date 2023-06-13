#include <stdio.h>


int operation(int num, int oper) {
    int res=num;
    switch (oper) {
        case 1: res |= 1;
            break;
        case 2: res &= ~(1 << 31);
            break;
        case 3: res ^= (1 << 15);
            break;
        default: printf("Invalid operation type.\n");
            break;
    }
    return res;
}


int main() {
    int num=5, oper=2;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper);
    int result = operation(num, oper);
    printf("Result: %d\n", result);
    return 0;
}