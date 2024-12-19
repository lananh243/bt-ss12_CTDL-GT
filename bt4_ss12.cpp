#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int point;
} Student;

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    Student arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        scanf("%s", arr[i].name);
        printf("Nhap diem cua %s: ", arr[i].name);
        scanf("%d", &arr[i].point);
    }

    char findName[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf("%s", findName);

    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, findName) == 0) {
            printf("Diem cua %s la : %d\n", findName, arr[i].point);
            return 0;
        }
    }

    printf("Khong tim thay sinh vien.\n");
    return 0;
}

