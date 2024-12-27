#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STORAGE 1024

int main() {
    char input[100];
    int used_space = 0;

    printf("Welcome! You can start entering data. Type 'exit' to stop.\n");

    while (1) {
        printf("Enter data: ");
        fgets(input, sizeof(input), stdin);

        
        input[strcspn(input, "\n")] = 0;

        
        if (strcmp(input, "exit") == 0) {
            break;
        }

        int input_size = strlen(input);
        used_space += input_size;

        if (used_space >= MAX_STORAGE) {
            printf("Warning: Device storage is full!\n");
            break;
        }

        printf("Current used space: %d bytes\n", used_space);
        printf("Remaining space: %d bytes\n", MAX_STORAGE - used_space);
    }

    printf("Final used space: %d bytes\n", used_space);
    printf("Program exited.\n");

    return 0;
}
