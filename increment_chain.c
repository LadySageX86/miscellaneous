// A simple program to test the result of chained increment/decrement operators.
// Inspired by a very curious student of mine.

#include <stdio.h>

int main() {
    int x = 3;
    int y = 5;
    x += y -= x;

    printf("%d, %d", x, y);

    return 0;
}
