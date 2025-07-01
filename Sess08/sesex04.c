//
// Created by Owner on 7/1/2025.
//
#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n<=0||n>=1000) {
        printf("so luong phan tu không hợp lệ:");
        return 1;
    }
    int arr[n];
    printf("Nhap so phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("so luong phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i==n-1) {
            printf("\n");
        }
    }
    selectionSoft(arr,n);
    printf("so luong phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i==n-1) {
            printf("\n");
        }
    }
    return 0;
}