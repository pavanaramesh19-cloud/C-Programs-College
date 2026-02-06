#include <stdio.h>

int main() {
    int n, i, j, key;
    int arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Bubble Sort */
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    /* Binary Search */
    int low = 0, high = n - 1, mid;
    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    /* If element not found */
    if(!found) {
        printf("Element not found\n");

        if(high >= 0)
            printf("Closest smaller element: %d\n", arr[high]);
        else
            printf("No smaller element exists\n");

        if(low < n)
            printf("Closest larger element: %d\n", arr[low]);
        else
            printf("No larger element exists\n");
    }

    return 0;
}