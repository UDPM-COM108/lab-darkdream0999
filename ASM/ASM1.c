#include <stdio.h>
#include <math.h>

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
    
    case 1: {
    int x, i, count = 0, laChinhPhuong;
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &x);

    printf("So %d la so nguyen.\n", x);

    if (x < 2) {
        printf("%d khong phai la so nguyen to\n", x);
    }
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
        }
    }
    
    for (i = 1; i * i <= x; i++) {
        if (i * i == x) {
            laChinhPhuong = 1;
        }
    }
    if (laChinhPhuong) {
        printf("%d la so chinh phuong\n", x);
    } else {
        printf("%d khong phai la so chinh phuong\n", x);
    }
}

        break;
    case 2: 
            int x, y;
            printf("Nhap 2 so nguyen: ");
            scanf("%d %d", &x, &y);

            int a = x, b = y;
            while (b != 0) {
                int r = a % b;
                a = b;
                b = r;
            }
            int ucln = a;
            int bcnn = x * y / ucln;

            printf("Uoc so chung lon nhat: %d\n", ucln);
            printf("Boi so chung nho nhat: %d\n", bcnn);
        break;
    case 3: 
    int batdau, ketthuc;
            printf("Nhap gio bat dau: ");
            scanf("%d", &batdau);
            printf("Nhap gio ket thuc: ");
            scanf("%d", &ketthuc);

            if (batdau < 12 || ketthuc > 23 || batdau >= ketthuc) {
                printf("Gio khong hop le!\n");
                break;
            }

            int gio = ketthuc - batdau;
            double tien = 0;

            if (gio <= 3)
                tien = gio * 150000;
            else
                tien = 3 * 150000 + (gio - 3) * 150000 * 0.7;

            if (batdau >= 14 && ketthuc <= 17)
                tien *= 0.9;

            printf("So tien phai tra: %.0f VND\n", tien);
        break;
    case 4: 
    int kwh;
            double tien = 0;

            printf("Nhap so kWh: ");
            scanf("%d", &kwh);

            if (kwh <= 0) {
                printf("kWh khong hop le!\n");
                break;
            }

            if (kwh <= 50)
                tien = kwh * 1678;
            else if (kwh <= 100)
                tien = 50 * 1678 + (kwh - 50) * 1734;
            else if (kwh <= 200)
                tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
            else if (kwh <= 300)
                tien = 50*1678 + 50*1734 + 100*2014 + (kwh - 200) * 2536;
            else if (kwh <= 400)
                tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kwh - 300) * 2834;
            else
                tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kwh - 400) * 2927;

            printf("Tien dien: %.0f VND\n", tien);
        break;
    case 5: 
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            int soTien;

            printf("Nhap so tien can doi: ");
            scanf("%d", &soTien);

            for (int i = 0; i < 9; i++) {
                int soTo = soTien / menhGia[i];
                if (soTo > 0)
                    printf("%d to %d\n", soTo, menhGia[i]);
                soTien %= menhGia[i];
            }
        break;
    case 6: 
    double tienVay;
        printf("Nhap so tien muon vay: ");
        scanf("%lf", &tienVay);

        double laiThang = tienVay * 0.05;
        double gocThang = tienVay / 12;
        double traMoiThang = laiThang + gocThang;
        double tong12Thang = traMoiThang * 12;

        printf("Tien vay: %.0f\n", tienVay);
        printf("Lai / thang: %.0f\n", laiThang);
        printf("Tra moi thang: %.0f\n", traMoiThang);
        printf("Tong tra trong 12 thang: %.0f\n", tong12Thang);
        break;
    case 7: 
    double tileVay;
        printf("Nhap phan tram vay (VD: 80): ");
        scanf("%lf", &tileVay);

        double giaTriXe = 500000000;
        double soTienVay = giaTriXe * tileVay / 100.0;
        double traTruoc = giaTriXe - soTienVay;

        int soThang = 24 * 12; // 24 năm
        double laiThang = (0.072 / 12);
        double gocThang = soTienVay / soThang;
        double laiMoiThang = soTienVay * laiThang;
        double traMoiThang = gocThang + laiMoiThang;

        printf("\n---- MUA XE TRA GOP ----\n");
        printf("Gia tri xe: %.0f\n", giaTriXe);
        printf("Tra truoc: %.0f\n", traTruoc);
        printf("So tien vay: %.0f\n", soTienVay);
        printf("Tra hang thang: %.0f\n", traMoiThang);
        printf("Tong thoi gian tra: %d thang\n", soThang);
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


