#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
    //Bài_1: Tổng, hiệu 2 số thực
    double a, b, tong, hieu;
    printf("Nhap vao 2 so thuc: ");
    scanf("%lf %lf", &a, &b);
    printf("\nXuat ra 2 so thuc: %.2lf %.2lf", a, b);
    tong = a + b;
    hieu = a - b;
    printf("\nTong 2 so thuc: %.2lf", tong);
    printf("\nHieu 2 so thuc: %.2lf", hieu);
    //Bài_2: Tính chu vi và diện tích hình chữ nhật
    double cdai, crong;
    printf("\nNhap chieu dai: ");
    scanf("%lf", &cdai);
    printf("\nNhap chieu rong: ");
    scanf("%lf", &crong);
    double ChuVi = (cdai + crong) * 2;
    double DienTich = cdai * crong;
    printf("\nChu vi HCN la: %.2lf", ChuVi);
    printf("\nDien tich HCN la: %.2lf", DienTich);
    //Bài_3: Tính chu vi và diện tích hình tròn
    double bkinh;
    printf("\nNhap ban kinh: ");
    scanf("%lf", &bkinh);
    double ChuViht = 2 * PI * bkinh;
    double DienTichht = PI * bkinh * bkinh;
    printf("\nChu vi HT la: %.2lf", ChuViht);
    printf("\nDien tich HT la: %.2lf", DienTichht);
    //Bài_4: Tính điểm trung bình
    double Toan, Ly, Hoa;
    printf("\nNhap diem Toan: ");
    scanf("%lf", &Toan);
    printf("\nNhap diem Ly: ");
    scanf("%lf", &Ly);
    printf("\nNhap diem Hoa: ");
    scanf("%lf", &Hoa);
    double DiemTrungBinh = ((Toan * 3) + (Ly * 2) + (Hoa * 1)) / 3;
    printf("\nDiem trung binh la: %.2lf", DiemTrungBinh);
    //Bài_5: Tính chu vi và diện tích tam giác vuông
    double canhA, canhB, canhC;
    printf("\nNhap vao 2 canh goc vuong: ");
    scanf("%lf %lf", &canhA, &canhB);
    canhC = sqrt(canhA * canhA + canhB * canhB);
    double DienTichtgv = 0.5 * canhA * canhB;
    double ChuVitgv = canhA + canhB + canhC;
    printf("\nCanh huyen c la: %.2lf", canhC);
    printf("\nDien tich TGV la: %.2lf", DienTichtgv);
    printf("\nChu vi TGV la: %.2lf", ChuVitgv);
    
    return 0;
}
