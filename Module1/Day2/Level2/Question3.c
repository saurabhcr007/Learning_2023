#include <stdio.h>
#include <string.h>

void sortelement(char *names[], int count) {
    char *temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main() {
    // char *name[] = {"Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"};
    // int count = sizeof(name) / sizeof(name[0]);
    int element;
    printf("Enter the number of names in array :");
    scanf("%d", &element);

    char *names[element];

    printf("Enter the names:\n");
    for (int i = 0; i < element; i++) {
        char temp[50];
        scanf("%s",temp);
        names[i] = strdup(temp);
    }
    printf("Entered order of names :\n");
    for (int i = 0; i < element; i++) {
        printf("%s\n", names[i]);
    }

    sortelement(names, element);

    printf("\nSorted order of names :\n");
    for (int i = 0; i < element; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
