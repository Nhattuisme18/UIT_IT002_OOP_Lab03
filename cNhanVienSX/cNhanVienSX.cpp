#include "cNhanVienSX.h"
#include <iostream>

using namespace std;

string cNhanVienSX::getHoTen() { return HoTen; }
Date cNhanVienSX::getNgaySinh() { return NgaySinh; }

double cNhanVienSX::TinhLuong() {
    return SoSanPham * DonGia;
}

void cNhanVienSX::Nhap() {
    cout << "Nhap ma NV: ";
    cin >> maNV;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);
    cout << "Nhap ngay sinh (ngay thang nam): ";
    cin >> NgaySinh.ngay >> NgaySinh.thang >> NgaySinh.nam;
    cout << "Nhap so san pham: ";
    cin >> SoSanPham;
    cout << "Nhap don gia 1 san pham: ";
    cin >> DonGia;
}

void cNhanVienSX::Xuat() {
    cout << "Ma NV: " << maNV
        << "\nTen: " << HoTen
        << "\nNgay sinh: " << NgaySinh.ngay << "/" << NgaySinh.thang << "/" << NgaySinh.nam
        << "\nSP: " << SoSanPham
        << "\nDon gia: " << DonGia
        << "\nLuong: " << TinhLuong() << endl;
}

