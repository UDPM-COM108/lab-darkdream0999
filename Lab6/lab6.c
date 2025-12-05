#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &mang[i]);
    }

    // Bai_1:TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
    float tong = 0;
    int count = 0;
    for(i = 0; i < n; i++) {
        if(mang[i] % 3 == 0) {
            tong += mang[i];
            count++;
        }
    }
    if(count > 0) {
        float tb = tong / count;
        printf("\nTrung binh cong cac so chia het cho 3 la: %.2f\n", tb);
    } else {
        printf("\nKhong co phan tu nao chia het cho 3 trong mang.\n");
    }

    // Bai_2:TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG
    int min = mang[0];
    int max = mang[0];
    for(i = 1; i < n; i++) {
        if(mang[i] > max) max = mang[i];
        if(mang[i] < min) min = mang[i];
    }
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);

    // Bai_3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(mang[i] < mang[j]) {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep giam dan:\n");
    for(i = 0; i < n; i++) {
        printf("Vi tri thu mang[%d] la : %d\n", i, mang[i]);
    }

    return 0;
}