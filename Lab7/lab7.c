#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    int i = 0;
    int n = 0; // đếm nguyên âm
    int p = 0; // đếm phụ âm

    printf("Xin moi nhap vao chuoi: ");
    fgets(s, sizeof(s), stdin); // dùng fgets an toàn hơn gets

    while (s[i] != '\0') {
        if (isalpha(s[i])) { // chỉ xét chữ cái
            char c = tolower(s[i]); // chuyển về chữ thường để dễ so sánh
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                n++;
            } else {
                p++;
            }
        }
        i++;
    }

    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.\n", s, n, p);


    // ===== BÀI 2: Đăng nhập =====
    char username[50], password[50];
    char correctUser[] = "admin";
    char correctPass[] = "123456";

    printf("\nNhap username: ");
    scanf("%s", username);
    printf("Nhap password: ");
    scanf("%s", password);

    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap khong thanh cong!\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // ===== BÀI 1: Đếm nguyên âm và phụ âm =====
    char s[100];
    int i = 0;
    int n = 0; // đếm nguyên âm
    int p = 0; // đếm phụ âm

    printf("Xin moi nhap vao chuoi: ");
    fgets(s, sizeof(s), stdin); // dùng fgets an toàn hơn gets

    while (s[i] != '\0') {
        if (isalpha(s[i])) { // chỉ xét chữ cái
            char c = tolower(s[i]); // chuyển về chữ thường để dễ so sánh
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                n++;
            } else {
                p++;
            }
        }
        i++;
    }

    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.\n", s, n, p);

    // ===== BÀI 2: Đăng nhập =====
    char userSys[] = "admin";   // username hệ thống
    int passSys = 12345;        // password hệ thống

    char user[100];
    int pass;

    printf("\nNhap username: ");
    scanf("%s", user);

    printf("Nhap password (so nguyen): ");
    scanf("%d", &pass);

    if (strcmp(user, userSys) == 0 && pass == passSys) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap khong thanh cong!\n");
    }

    return 0;
}