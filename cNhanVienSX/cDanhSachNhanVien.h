#pragma once
#include "cNhanVienSX.h"

class cDanhSachNhanVien {
private:
    int n;
    cNhanVienSX* ds;
public:
    cDanhSachNhanVien() : n(0), ds(nullptr) {}
    ~cDanhSachNhanVien() { delete[] ds; }

    void Nhap();
    void Xuat();
    cNhanVienSX TimNhanVienLuongThapNhat();
    double TinhTongLuong();
    cNhanVienSX TimNhanVienTuoiCaoNhat();
    void SapXepLuongTangDan();
};