// main.c
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void bubbleSort(int arr[], int size, char order);
void printUsageMessage();

int main(int argc, char *argv[]) {
    // Check for correct number of command-line arguments
    if (argc < 3 || argc > 34) {
        printUsageMessage();
        return 1;
    }

    // Check for correct sort order argument
    char sortOrder = argv[1][0];
    if (sortOrder != 'A' && sortOrder != 'D') {
        printUsageMessage();
        return 1;
    }

    // Create an array to store integers
    int numbers[32];
    int size = argc - 2;

    // Convert command-line arguments to integers and store in the array
    for (int i = 2; i < argc; i++) {
        numbers[i - 2] = atoi(argv[i]);
    }

    // Perform bubble sort
    bubbleSort(numbers, size, sortOrder);

    // Print the sorted numbers
    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
