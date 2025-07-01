//
// Created by Owner on 7/1/2025.
//
#include<stdio.h>
int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if(n < 1 || n > 100) {
        printf("gia tri khong hop le");
        return 0;
    }
    int a[n];
    printf("Nhap so luong phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int key ;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &key);
    int pos=linearSearch(arr, n, key);
    printf("so luong phan tu: %d", pos);
    return 0;
}
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}