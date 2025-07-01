//
// Created by Owner on 7/1/2025.
//
#include <stdio.h>
int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if(n<=0||n<=1000) {
        printf("nhap gia tri n khong hop le");
        return 0;
    }
    int arr[n];
    printf("Nhap so luong phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &key);
    int pos=binarySearch(arr,n,key);
    printf("So luong phan tu: %d", pos);
    for (int i = pos; i >= 0; i--) {
        printf("%d", arr[i]);
        if(i==n-1);
        else printf(" ");
    }
}