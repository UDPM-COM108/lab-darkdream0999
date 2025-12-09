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

void Chucnang_5() {
    int money;
    printf("Nhap so tien can doi: ");
    scanf("%d", &money);

    if (money <= 0) {
        printf("So tien khong hop le!\n");
        return;
    }

    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soTo[9] = {0};

    int remaining = money;

    for (int i = 0; i < 9; i++) {
        if (remaining >= menhGia[i]) {
            soTo[i] = remaining / menhGia[i];
            remaining %= menhGia[i];
        }
    }

    printf("Ket qua doi tien cho %d VND:\n", money);
    for (int i = 0; i < 9; i++) {
        if (soTo[i] > 0) {
            printf("%d to %d VND\n", soTo[i], menhGia[i]);
        }
    }
}


void Chucnang_6() {
    double tienVay;
    printf("Nhap so tien muon vay: ");
    scanf("%lf", &tienVay);

    if (tienVay <= 0) {
        printf("So tien vay khong hop le!\n");
        return;
    }

    double laiSuat = 0.05; // 5% mỗi tháng
    double gocMoiThang = tienVay / 12;
    double tienConLai = tienVay;

    printf("\n%-10s %-15s %-15s %-18s %-15s\n",
           "Ky han", "Lai phai tra", "Goc phai tra",
           "So tien phai tra", "So tien con lai");

    for (int i = 1; i <= 12; i++) {
        double lai = tienConLai * laiSuat;
        double phaiTra = gocMoiThang + lai;

        tienConLai -= gocMoiThang;
        if (tienConLai < 0) tienConLai = 0;

        printf("%-10d %-15.0f %-15.0f %-18.0f %-15.0f\n",
               i, lai, gocMoiThang, phaiTra, tienConLai);
    }
}

void Chucnang_7() {
    double phanTramVay;
    const double giaXe = 500000000; // 500 triệu
    const double laiNam = 0.15;     // 15%/năm
    const int soNam = 24;           // thời hạn vay
    const int soThang = soNam * 12;

    printf("Nhap phan tram muon vay (0 - 100): ");
    scanf("%lf", &phanTramVay);

    if (phanTramVay <= 0 || phanTramVay > 100) {
        printf("Phan tram vay khong hop le!\n");
        return;
    }

    double tienTraTruoc = giaXe * (1 - phanTramVay / 100);
    double tienVay = giaXe * (phanTramVay / 100);

    double laiThang = laiNam / 12; // 15%/năm -> 1.25%/tháng

    // Công thức trả góp đều (annuity)
    double tienTraHangThang = 
        (tienVay * laiThang) /
        (1 - pow(1 + laiThang, -soThang));

    printf("\n===== KET QUA VAY MUA XE =====\n");
    printf("Gia xe: %.0f VND\n", giaXe);
    printf("So tien tra truoc: %.0f VND\n", tienTraTruoc);
    printf("So tien vay: %.0f VND\n", tienVay);
    printf("\nTien phai tra moi thang (trong 24 nam / 288 thang):\n%.0f VND\n", tienTraHangThang);
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


