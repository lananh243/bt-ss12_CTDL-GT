#include <stdio.h>

int countOccurrences(int arr[], int n, int value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int isDuplicate(int arr[], int i) {
    for (int j = 0; j < i; j++) {
        if (arr[i] == arr[j]) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int foundDuplicate = 0;

    for (int i = 0; i < n; i++) {
        if (!isDuplicate(arr, i)) {
            int count = countOccurrences(arr, n, arr[i]);
            if (count > 1) {
                printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
                foundDuplicate = 1;
            }
        }
    }

    if (!foundDuplicate) {
        printf("Khong co phan tu lap lai.\n");
    }

    return 0;
}

