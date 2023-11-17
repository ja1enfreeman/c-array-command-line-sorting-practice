// bubbleSort.c
void bubbleSort(int arr[], int size, char order) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((order == 'A' && arr[j] > arr[j + 1]) || (order == 'D' && arr[j] < arr[j + 1])) {
                // Swap elements if in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}