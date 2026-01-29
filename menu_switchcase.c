#include <stdio.h>

/* Function declarations */
void inputArray(int *a, int n);
void bubbleAsc(int *a, int n);
void bubbleDesc(int *a, int n);
void displayArray(int *a, int n);
void binarySearch(int *a, int n);

int main() {
    int a[100], n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    do {
        printf("\n------ MENU ------\n");
        printf("1. Input Array\n");
        printf("2. Bubble Sort (Smallest to Largest)\n");
        printf("3. Bubble Sort (Largest to Smallest)\n");
        printf("4. Binary Search and Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                inputArray(a, n);
                break;

            case 2:
                bubbleAsc(a, n);
                printf("Array sorted in ascending order\n");
                break;

            case 3:
                bubbleDesc(a, n);
                printf("Array sorted in descending order\n");
                break;

            case 4:
                displayArray(a, n);
                binarySearch(a, n);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}

/* Function definitions */

void inputArray(int *a, int n) {
    int i;
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
}

void bubbleAsc(int *a, int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(*(a + j) > *(a + j + 1)) {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}

void bubbleDesc(int *a, int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(*(a + j) < *(a + j + 1)) {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}

void displayArray(int *a, int n) {
    int i;
    printf("Array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

void binarySearch(int *a, int n) {
    int key, low = 0, high = n - 1, mid;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(low <= high) {
        mid = (low + high) / 2;

        if(*(a + mid) == key) {
            printf("Element found at position %d\n", mid + 1);
            return;
        }
        else if(*(a + mid) < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
}