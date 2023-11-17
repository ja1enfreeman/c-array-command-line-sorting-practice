// utility.c
#include <stdio.h>

void printUsageMessage() {
    printf("Incorrect usage\n");
    printf("Sort given data in ascending or descending order. First argument must be A or D to indicate ascending or descending sort order, followed by up to 32 integers separated by spaces\n");
    printf("Usage: ./main [A|D] n1 n2 ... n31 n32\n");
}
