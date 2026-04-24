#pragma once

#include "cDiem.h"

using namespace std;


class cTamGiac{
private:
    cDiem A, B, C;
public:
    cTamGiac(cDiem a = cDiem(), cDiem b = cDiem(), cDiem c = cDiem()) :A(a), B(b), C(c) {}
    void Nhap();
    void Xuat();
    bool KiemTraHopLe();
    void PhanLoai();
    float ChuVi();
    float DienTich();
    void TinhTien(float dx, float dy);
    void Quay(float gocQuay);
    void ThuPhong(float heSo);
};

