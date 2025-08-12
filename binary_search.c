#include <stdio.h>

void binary_search(int a[], int n, int item) {
    int min = 0, max = n - 1, mid;
    int found = 0;

    while (min <= max) {
        mid = (min + max) / 2;

        if (a[mid] == item) {
            found = 1;
            printf("Element found in the position %d\n", mid + 1);  // Position (1-based)
            break;
        } else if (a[mid] < item) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }
}

int main() {
    int a[100], n, i, item;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in accending order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &item);

    binary_search(a, n, item);

    return 0;
}


