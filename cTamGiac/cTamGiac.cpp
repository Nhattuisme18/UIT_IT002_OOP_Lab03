#include "cTamGiac.h"
#include "cDiem.h"
#include <iostream>
using namespace std;

bool cTamGiac::KiemTraHopLe() {
   
    float a = A.TinhKhoangCach(B);
    float b = B.TinhKhoangCach(C);
    float c = C.TinhKhoangCach(A);
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void cTamGiac::Nhap() {
    do {
        cout << "Nhap toa do dinh A : "; A.Nhap();
        cout << "Nhap toa do dinh B : "; B.Nhap();
        cout << "Nhap toa do dinh C : "; C.Nhap();

        if (!KiemTraHopLe()) {
            cout << "Ba diem khong tao thanh tam giac. Vui long nhap lai!\n";
        }
    } while (!KiemTraHopLe()); 
}

void cTamGiac::Xuat() {
    cout << "Tam giac co toa do 3 dinh: A"; A.Xuat();
    cout << ", B"; B.Xuat();
    cout << " va C"; C.Xuat();
    cout << endl;
}

void cTamGiac::PhanLoai() {
    float a = A.TinhKhoangCach(B);
    float b = B.TinhKhoangCach(C);
    float c = C.TinhKhoangCach(A);

    bool vuong = (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a);
    bool can = (a == b) || (a == c) || (b == c);
    bool deu = (a == b) && (a == c);

    if (deu) cout << "Day la tam giac deu.\n";
    else if (vuong && can) cout << "Day la tam giac vuong can.\n";
    else if (vuong) cout << "Day la tam giac vuong.\n";
    else if (can) cout << "Day la tam giac can.\n";
    else cout << "Day la tam giac thuong.\n";
}

float cTamGiac::ChuVi() {
    float a = A.TinhKhoangCach(B);
    float b = B.TinhKhoangCach(C);
    float c = C.TinhKhoangCach(A);
    return a + b + c;
}

float cTamGiac::DienTich() {
    float a = A.TinhKhoangCach(B);
    float b = B.TinhKhoangCach(C);
    float c = C.TinhKhoangCach(A);
    float p = ChuVi() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void cTamGiac::TinhTien(float dx, float dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);

}

void cTamGiac::Quay(float goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}

void cTamGiac::ThuPhong(float heSo) {
    A.ThuPhong(heSo);
    B.ThuPhong(heSo);
    C.ThuPhong(heSo);
}