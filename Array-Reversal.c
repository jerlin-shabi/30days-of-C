#include <stdio.h>

int* reverse(int start, int end, int arr[]) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return arr;
}

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
     {
        scanf("%d", &arr[i]);
     }
    reverse(0, size - 1, arr);
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
