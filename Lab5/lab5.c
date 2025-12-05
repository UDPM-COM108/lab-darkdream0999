#include <stdio.h>

int timMax(int so1, int so2, int so3) {
    int max = so1;       
    if (so2 > max)
        max = so2;
    if (so3 > max)
        max = so3;
    return max;           
}

int checkYear(int year) {
    if (year % 400 == 0)
        return 1;     
    else if (year % 4 == 0 && year % 100 != 0)
        return 1;   
    else
        return 0;  
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c;

    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &a, &b, &c);
    int ketQua = timMax(a, b, c);
    printf("So lon nhat trong 3 so la: %d\n", ketQua);

    int year;
    printf("Nhap vao nam: ");
    scanf("%d", &year);
    if (checkYear(year) == 1)
        printf("%d la nam nhuan\n", year);
    else
        printf("%d khong phai la nam nhuan\n", year);

    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);

    return 0;
}