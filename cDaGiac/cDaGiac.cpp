#include "cDaGiac.h"
#include <iostream>
#include <cmath>

using namespace std;

void cDaGiac::Nhap() {
    do {
        cout << "Nhap so dinh cua da giac (>= 3): ";
        cin >> SoDinh;
    } while (SoDinh < 3 || SoDinh > MAX);

    for (int i = 0; i < SoDinh; i++) {
        cout << "Nhap toa do dinh thu " << i + 1 << " : ";
        dsDinh[i].Nhap();
    }
}

void cDaGiac::Xuat()  {
    for (int i = 0; i < SoDinh; i++) {
        dsDinh[i].Xuat();
        if (i < SoDinh - 1) cout << " - ";
    }
    cout << endl;
}

float cDaGiac::ChuVi(){
    if (SoDinh < 3) return 0 ;
    float C = 0;
    for (int i = 0; i < SoDinh; i++) {
        int next = (i + 1) % SoDinh;
        C += dsDinh[i].TinhKhoangCach(dsDinh[next]);
    }
    return C;
}

float cDaGiac::DienTich(){
    if (SoDinh < 3) return 0;
    float S = 0;
    for (int i = 0; i < SoDinh; i++) {
        int next = (i + 1) % SoDinh;
       
        S += (dsDinh[i].GetX() * dsDinh[next].GetY()) - (dsDinh[next].GetX() * dsDinh[i].GetY());
    }
    return abs(S) / 2.0;
}

void cDaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < SoDinh; i++) {
        dsDinh[i].TinhTien(dx, dy);
    }
}

void cDaGiac::Quay(float goc) {
    for (int i = 0; i < SoDinh; i++) {
        dsDinh[i].Quay(goc);
    }
}

void cDaGiac::ThuPhong(float heSo) {
    for (int i = 0; i < SoDinh; i++) {
        dsDinh[i].ThuPhong(heSo);
    }
}
bool cDaGiac::KiemTraHopLe() {
    if (SoDinh < 3) return false;
    if (DienTich() == 0) return false;

    return true;
}

void cDaGiac::PhanLoai() {
    if (!KiemTraHopLe()) {
        cout << "Day khong phai la mot da giac hop le!\n";
        return;
    }

    cout << "Day la ";
    switch (SoDinh) {
    case 3: cout << "Tam giac"; break;
    case 4: cout << "Tu giac"; break;
    case 5: cout << "Ngu giac"; break;
    case 6: cout << "Luc giac"; break;
    case 7: cout << "That giac"; break;
    case 8: cout << "Bat giac"; break;
    default: cout << "Da giac " << SoDinh << " canh"; break;
    }
    bool cacCanhBangNhau = true;
    float canhDauTien = dsDinh[0].TinhKhoangCach(dsDinh[1]);
    for (int i = 1; i < SoDinh; i++) {
        int next = (i + 1) % SoDinh;
        float canhTiepTheo = dsDinh[i].TinhKhoangCach(dsDinh[next]);

        // So sanh truc tiep giong nguyen ban
        if (canhDauTien != canhTiepTheo) {
            cacCanhBangNhau = false;
            break;
        }
    }
    if (cacCanhBangNhau) {
        cout << "deu.\n";
    }
    else {
        cout << ".\n";
    }
}