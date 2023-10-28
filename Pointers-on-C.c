#include <stdio.h>
#include <stdlib.h> // Include this header for the abs() function

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
