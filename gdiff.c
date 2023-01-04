#include <stdio.h>
#include <stdlib.h>

int check_diff(int arr[], int size);

int main() {
    int nums[] = { 1, 5, 2, 10 };
    int nSize = sizeof(nums)/sizeof(int);
    printf("%d\n", check_diff(nums, nSize));
    return 0;
}

int check_diff(int arr[], int size) {
    int diff = 0;
    for (int i = 0; i < size; i++) {
        int x = arr[i]; 
        int y = 0;
        for (int yi = 0; yi < size; ++yi)
            y = (arr[i + yi] > y) ? arr[i + yi] : y;
        if (x < y) {
            printf("%d - %d = %d\n", y, x, y - x);
            diff = (y - x > diff) ? y - x : diff;
        } 
    }
    return (diff != 0) ? diff : -1; 
}
