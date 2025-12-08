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

int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

void Chucnang_2() {
    int x, y;
    printf("Nhap vao 2 so nguyen (x, y): ");
    scanf("%d%d", &x, &y);

    int ucln = UCLN(x, y);
    int bcnn = BCNN(x, y);

    printf("Uoc so chung lon nhat (UCLN) cua %d va %d la: %d\n", x, y, ucln);
    printf("Boi so chung nho nhat (BCNN) cua %d va %d la: %d\n", x, y, bcnn);
}

void Chucnang_3() {
    int start, end;
    printf("Nhap gio bat dau (12-23): ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc (12-23): ");
    scanf("%d", &end);

    if (start < 12 || end > 23 || start >= end) {
        printf("Khung gio khong hop le!\n");
        return;
    }

    int gio = end - start;
    double tongTien = 0;

    if (gio <= 3) {
        tongTien = gio * 150000;
    } else {
        tongTien = 3 * 150000 + (gio - 3) * 150000 * 0.7;
    }

    if (start >= 14 && start <= 17) {
        tongTien *= 0.9;
    }

    printf("Tong tien karaoke: %.0f VND\n", tongTien);
}

void Chucnang_4() {

    int kwh;
    double tien = 0;
    printf("Nhap so kWh: ");
    scanf("%d", &kwh);

    if (kwh <= 0) {
        printf("So kWh khong hop le!\n");
    }

    if (kwh <= 50)
        tien = kwh * 1678;
    else if (kwh <= 100)
        tien = 50 * 1678 + (kwh - 50) * 1734;
    else if (kwh <= 200)
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    else if (kwh <= 300)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    else if (kwh <= 400)
        tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kwh - 300) * 2834;
    else
        tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kwh - 400) * 2927;

    printf("Tien dien: %.0f VND\n", tien);
}
void Chucnang_5(){
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soTien;

    printf("Nhap so tien can doi: ");
    scanf("%d", &soTien);

    for (int i = 0; i < 9; i++) {
        int soTo = soTien / menhGia[i];
        if (soTo > 0) {
            printf("%d to %d\n", soTo, menhGia[i]);
        }
        soTien %= menhGia[i];
    }
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
    case 2: Chucnang_2();
        break;
    case 3: Chucnang_3();
        break;
    case 4: Chucnang_4();
        break;
    case 5: Chucnang_5();
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

