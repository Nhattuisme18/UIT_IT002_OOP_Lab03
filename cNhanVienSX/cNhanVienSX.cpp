#include "cNhanVienSX.h"
#include <iostream>

using namespace std;

cNhanVienSX::cNhanVienSX() : maNV(""), HoTen(""), SoSanPham(0), DonGia(0) {}

void cNhanVienSX::Nhap() {
    cout << "Nhap ma NV: ";
    cin >> maNV;
    cin.ignore();

    cout << "Nhap ho ten: ";
    getline(cin, HoTen);

    cout << "Nhap ngay sinh (ngay thang nam cach nhau khoang trang): ";
    NgaySinh.Nhap();

    cout << "Nhap so san pham: ";
    cin >> SoSanPham;

    cout << "Nhap don gia: ";
    cin >> DonGia;
}

void cNhanVienSX::Xuat() {
    cout << "Ma: " << maNV << " | Ten: " << HoTen << " | Ngay sinh: ";
    NgaySinh.Xuat();
    cout << " | Luong: " << (long long)TinhLuong() << " VND" << endl;
}