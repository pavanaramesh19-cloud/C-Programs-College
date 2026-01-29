#include <stdio.h>

int main() {
    int a[100], n, i, j, temp;
    int flag;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n - 1; i++) {
        flag = 0;   // reset flag for each pass

        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;   // swap happened
            }
        }

        if(flag == 0) {
            printf("Array is already sorted.\n");
            printf("Terminated at pass %d\n", i + 1);
            break;
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
} 
    