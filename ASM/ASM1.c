#include <stdio.h>
#include <math.h>
void Chucnang_1() {
    int x;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &x);

    printf("Ban da nhap so: %d\n", x);
    printf("So %d la so nguyen.\n", x);

    int isPrime = 1;
    if (x < 2) isPrime = 0;
    else {
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) printf("So %d la so nguyen to.\n", x);
    else printf("So %d khong phai la so nguyen to.\n", x);

    int k = sqrt(x);
    if (x >= 0 && k * k == x) printf("So %d la so chinh phuong.\n", x);
    else printf("So %d khong phai la so chinh phuong.\n", x);
}
int main(){
    int luaChon;
    do{
    printf("|---WELCOME TO THAI_PS49318 ASSIGNMENT COM108---|\n");
    printf("|------------------MENU---------------------|\n");
    printf("1.Chuong trinh kiem tra so nguyen\n");
    printf("2.Chuong trinh uoc so chung va boi chung cua 2 so\n");
    printf("3.Chuong trinh tinh tien cho quan karaoke\n");
    printf("4.Chuong trinh tinh tien dien\n");
    printf("5.Chuong trinh chuc nang doi tien\n");
    printf("6.Chuong trinh tinh lai xuat vay ngan hang vay tra gop\n");
    printf("7.Chuong trinh tinh vay tien mua xe\n");
    printf("8.Sap xep thong tin sinh vien\n");
    printf("9.Xay dung game FPOLY-LOTT\n");
    printf("10.Chuong trinh tinh phan so\n");
    printf("0.Thoat\n");
    printf("moi ban nhap lua chon: ");
    scanf("%d", &luaChon);
    switch (luaChon){
    
    case 1: Chucnang_1();
        break;
    case 2: printf("2.Chuong trinh uoc so chung va boi chung cua 2 so\n");
        break;
    case 3: printf("3.Chuong trinh tinh tien cho quan karaoke\n");
        break;
    case 4: printf("4.Chuong trinh tinh tien dien\n");
        break;
    case 5: printf("5.Chuong trinh chuc nang doi tien\n");
        break;
    case 6: printf("6.Chuong trinh tinh lai xuat vay ngan hang vay tra gop\n");
        break;
    case 7: printf("7.Chuong trinh tinh vay tien mua xe\n");
        break;
    case 8: printf("8.Sap xep thong tin sinh vien\n");
        break;
    case 9: printf("9.Xay dung game FPOLY-LOTT\n");
        break;
    case 10: printf("10.Chuong trinh tinh phan so\n");
        break;
    case 0: printf("0.thoat\n");
        break;
    default:
        printf("Lua chon khong dung nhap lai\n");
    }

}while(luaChon != 0);
    return 0;
}


