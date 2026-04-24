#pragma once
#include <string>

using namespace std;

struct Date {
    int ngay, thang, nam;
};

class cNhanVienSX {
private:
    string maNV;
    string HoTen;
    Date NgaySinh;
    int SoSanPham;
    double DonGia;

public:
    cNhanVienSX() {
        maNV = "";
        HoTen = "";
        NgaySinh = { 18, 3, 2007 };
        SoSanPham = 0;
        DonGia = 0;
    }
    string getHoTen();
    Date getNgaySinh();

    void Nhap();
    void Xuat();
    double TinhLuong();
};


