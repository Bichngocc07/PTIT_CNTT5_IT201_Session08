//
// Created by Owner on 7/1/2025.
//
#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);
    if (n<=0||n>=1000) {
        printf("Nhat lon nhat lon nhat");
        return 1;
    }
    int arr[n];
    printf("Nhat lon nhat lon nhat");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Nhat lon nhat lon nhat");
    scanf("%d", &x);
    int pos=binarySearch(arr,n,x);
    printf("%d", pos);
}