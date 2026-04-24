#pragma once
#include <string>
#include "cNgay.h"

using namespace std;

class cNhanVienSX {
private:
    string maNV, HoTen;
    cNgay NgaySinh;
    int SoSanPham;
    double DonGia;
public:
    cNhanVienSX();
    string getHoTen() { return HoTen; }
    cNgay getNgaySinh() { return NgaySinh; }
    double TinhLuong() { return SoSanPham * DonGia; }
    void Nhap();
    void Xuat();
};