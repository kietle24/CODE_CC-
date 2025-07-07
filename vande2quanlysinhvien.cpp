#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

// a) Ð?nh ngh?a ki?u c?u trúc SINHVIEN
typedef struct {
    char hoTen[50];
    char maSV[20];
    float tk;   // Ði?m thý?ng k?
    float gk;   // Ði?m gi?a k?
    float ck;   // Ði?m cu?i k?
    float th;   // Ði?m th?c hành
    float dtb;  // Ði?m trung b?nh
} SINHVIEN;

float tinhDTB(SINHVIEN s) {
    return (((2 * s.tk + 3 * s.gk + 5 * s.ck) * 2 + s.th) / 3.0) / 10.0;
}

float nhapDiem(const char *tenDiem) {
    float diem;
    int result;
    do {
        printf("Nhap %s (0-10): ", tenDiem);
        result = scanf("%f", &diem);
        while(getchar() != '\n'); // Xóa b? các k? t? dý th?a trong input
        if (result != 1) {
            printf("Nhap khong hop le. Vui long nhap lai!\n");
        }
        else if (diem < 0 || diem > 10) {
            printf("Diem khong hop le. Vui long nhap lai!\n");
        }
    } while (result != 1 || diem < 0 || diem > 10);
    return diem;
}

// Ki?m tra chu?i ch? ch?a ch? cái và kho?ng tr?ng
int laChu(const char *chuoi) {
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (!isalpha(chuoi[i]) && chuoi[i] != ' ')
            return 0;
    }
    return 1;
}

// Hàm nh?p tên v?i ràng bu?c ch? bao g?m ch? cái
void nhapTen(char *chuoi, int kichThuoc) {
    do {
        printf("Nhap ho ten : ");
        fgets(chuoi, kichThuoc, stdin);
        chuoi[strcspn(chuoi, "\n")] = '\0';
        if (strlen(chuoi) == 0 || !laChu(chuoi)) {
            printf("Ho ten khong hop le. Vui long nhap lai!\n");
        }
    } while (strlen(chuoi) == 0 || !laChu(chuoi));
}

// Hàm nh?p MSSV (không c?n ràng bu?c ch? ch?a s?)
void nhapMaSV(char *chuoi, int kichThuoc) {
    do {
        printf("Nhap ma sinh vien: ");
        fgets(chuoi, kichThuoc, stdin);
        chuoi[strcspn(chuoi, "\n")] = '\0';
        if (strlen(chuoi) == 0) {
            printf("Ma sinh vien khong duoc de trong. Vui long nhap lai!\n");
        }
    } while (strlen(chuoi) == 0);
}

int main() {
    SINHVIEN A[MAX];
    int n;

    // Nh?p s? lý?ng sinh viên và ki?m tra h?p l? (t? 1 ð?n MAX)
    printf("Nhap so luong sinh vien: ");
    while (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
        printf("So luong khong hop le. Vui long nhap lai!\n");
        while (getchar() != '\n'); // Xóa b? ð?m ð?u vào
    }
    while(getchar() != '\n'); // Xóa k? t? xu?ng d?ng c?n sót l?i sau scanf

    // Nh?p thông tin cho t?ng sinh viên
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin cho sinh vien thu %d:\n", i + 1);

        nhapTen(A[i].hoTen, sizeof(A[i].hoTen));
        nhapMaSV(A[i].maSV, sizeof(A[i].maSV));

        A[i].tk = nhapDiem("diem TK");
        A[i].gk = nhapDiem("diem GK");
        A[i].ck = nhapDiem("diem CK");
        A[i].th = nhapDiem("diem TH");

        A[i].dtb = tinhDTB(A[i]);
    }

    // Hi?n th? danh sách sinh viên ph?i h?c l?i (DTB < 4.0)
    printf("\nDanh sach sinh vien phai hoc lai (DTB < 4.0):\n");
    printf("| %-4s | %-30s | %-15s | %-7s |\n", "STT", "HO TEN", "MA SINH VIEN", "DIEM TB");
    printf("---------------------------------------------------------------\n");

    int stt = 1;
    for (int i = 0; i < n; i++) {
        if (A[i].dtb < 4.0) {
            printf("| %-4d | %-30s | %-15s | %-7.2f |\n", stt, A[i].hoTen, A[i].maSV, A[i].dtb);
            stt++;
        }
    }
    if (stt == 1) {
        printf("Khong co sinh vien nao phai hoc lai.\n");
    }

    return 0;
}

