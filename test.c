#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[1000000] = 0; // invalid initializer _ Tràn bộ nhớ Stack 
    int *p = (int*)malloc(1000000*sizeof(int)); // Lưu trữ được 1 000 000 phần tử int 
    // kích thước mảng 5 
    int *arr = (int *)malloc(5 * sizeof(int));
    // Thay đổi kích thước mảng lên 10 phần tử
    arr = (int *)realloc(arr, 10 * sizeof(int));
    return 0; 
}


