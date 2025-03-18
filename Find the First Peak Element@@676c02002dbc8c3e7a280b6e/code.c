#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            printf("%d", arr[i]); 
            return 0; // Exit after finding the first peak
        }
    }

    printf("-1"); 
    return 0;
}