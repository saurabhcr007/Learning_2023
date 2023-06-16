#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encode_string(const char* string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }

    char* encoded = (char*)malloc((length + 1) * sizeof(char));
    for (int i = 0; i < length; i++) {
        encoded[i] = string[i] + 1;
    }
    encoded[length] = '\0';

    return encoded;
}

char* decode_string(const char* encoded) {
    int length = 0;
    while (encoded[length] != '\0') {
        length++;
    }

    char* decoded = (char*)malloc((length + 1) * sizeof(char));
    for (int i = 0; i < length; i++) {
        decoded[i] = encoded[i] - 1;
    }
    decoded[length] = '\0';

    return decoded;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    char* encoded_string = encode_string(input);
    char* decoded_string = decode_string(encoded_string);

    printf("Original String: %s\n", input);
    printf("Encoded String: %s\n", encoded_string);
    printf("Decoded String: %s\n", decoded_string);

    free(encoded_string);
    free(decoded_string);

    return 0;
}
