/*#include <stdio.h>

int main() {
    int a[7] = {1, 5, 8, 9, 4, 7, 6};
    int i, j, temp;
    for(i = 0; i < 6; i++) {
        for(j = i+1; j < 7; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for(i = 0; i < 7; i++) {
        printf(" %d ", a[i] );
    }
    printf("\n");

    return 0;
}
*/
#include <stdio.h>

int main(){
/*int a[7]={1,5,8,9,4,7,6};
int i ,j ,temp;
    for(i = 0; i < 7; i++){
        for(j=i+1;j < 7; j++){
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nxuat mang: ");
            for(i = 0; i<7; i++){
                printf("%d ", a[i]);
             }*/
    /*int i = 0;
    int j = 0;
    int ma_tran[4][3]={{1,2,3} ,{2,3,4},{3,4,5},{4,5,6}};
        for (i = 0; i < 4; i++ ){
            for(j = 0; j < 3; j++) {
                printf("%d ", ma_tran[i][j]);
            }

        }
        printf("\n");*/
        #include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int mang[n][m];

    // Nhập dữ liệu cho ma trận
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("Nhap phan tu mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    // Xuất ma trận bình phương
    printf("\nMa tran binh phuong:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", mang[i][j] * mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}
            return 0;
}
