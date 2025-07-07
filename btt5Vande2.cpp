#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char hoTen[50];
    char maSV[20];
    float TK;
    float GK;
    float CK;
    float TH;
    float DTB;
} SINHVIEN;

float nhapDiem(const char *tenDiem) {
    float diem;
    do {
        printf("Nhap diem %s (0 - 10): ", tenDiem);
        scanf("%f", &diem);
        if (diem < 0 || diem > 10) {
            printf("Gia tri khong hop le. Vui long nhap lai diem %s!\n", tenDiem);
        }
    } while (diem < 0 || diem > 10);
    return diem;
}
void nhapSinhVien(SINHVIEN *sv) {
    printf("Nhap ho ten: ");
    fflush(stdin);
    fgets(sv->hoTen, sizeof(sv->hoTen), stdin);
    sv->hoTen[strcspn(sv->hoTen, "\n")] = '\0';

    printf("Nhap ma sinh vien: ");
    fflush(stdin);
    fgets(sv->maSV, sizeof(sv->maSV), stdin);
    sv->maSV[strcspn(sv->maSV, "\n")] = '\0';

    sv->TK = nhapDiem("thuong ky (TK)");
    sv->GK = nhapDiem("giua ky (GK)");
    sv->CK = nhapDiem("cuoi ky (CK)");
    sv->TH = nhapDiem("thuc hanh (TH)");


    sv->DTB = ((((2 * sv->TK + 3 * sv->GK + 5 * sv->CK) / 10.0) * 2) + sv->TH) / 3.0;
}


void xuatSinhVien(SINHVIEN sv, int stt) {
    printf("%-5d %-30s %-15s %-5.2f %-5.2f %-5.2f %-5.2f %-5.2f ", 
           stt, sv.hoTen, sv.maSV, sv.TK, sv.GK, sv.CK, sv.TH, sv.DTB);
    if (sv.DTB < 4.0)
        printf("%-10s", "Hoc lai");
    else
        printf("%-10s", "");
    printf("\n");
}

int main() {
    int n, i;
    SINHVIEN A[MAX];

    printf("Nhap so luong sinh vien (n <= %d): ", MAX);
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++) {
        printf("\nNhap thong tin cho sinh vien thu %d:\n", i+1);
        nhapSinhVien(&A[i]);
    }

   
    printf("\nDanh sach sinh vien phai hoc lai (DTB < 4.0):\n");
    printf("STT   HO TEN                          MA SINH VIEN   DIEM TB\n");
    int stt = 1;
    for(i = 0; i < n; i++) {
        if (A[i].DTB < 4.0) {
            printf("%-5d %-30s %-15s %-5.2f\n", stt++, A[i].hoTen, A[i].maSV, A[i].DTB);
        }
    }

  
    char x[20];
    printf("\nNhap ma sinh vien can tim: ");
    scanf("%s", x);
    int found = 0;
    for(i = 0; i < n; i++) {
        if (strcmp(A[i].maSV, x) == 0) {
            printf("\nThong tin sinh vien tim thay:\n");
            printf("Ho ten: %s\n", A[i].hoTen);
            printf("Ma sinh vien: %s\n", A[i].maSV);
            printf("Diem thuong ky: %.2f\n", A[i].TK);
            printf("Diem giua ky: %.2f\n", A[i].GK);
            printf("Diem cuoi ky: %.2f\n", A[i].CK);
            printf("Diem thuc hanh: %.2f\n", A[i].TH);
            printf("Diem trung binh: %.2f\n", A[i].DTB);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ma %s\n", x);
    }

    
    for(i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i].DTB < A[j].DTB) {
                SINHVIEN temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

  
    printf("\nDanh sach diem thi KTLT:\n");
    printf("STT   HO TEN                          MA SV         TK    GK    CK    TH    DTB    GHI CHU\n");
    for(i = 0; i < n; i++) {
        xuatSinhVien(A[i], i+1);
    }
    printf("\nPage 1/1\n");

    return 0;
}

