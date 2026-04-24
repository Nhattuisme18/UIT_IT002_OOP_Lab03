#include "cDanhSachNhanVien.h"
#include <iostream>

using namespace std;

int main() {
    cDanhSachNhanVien quanLy;

    quanLy.Nhap();

    cout << "\nDANH SACH NHAN VIEN\n";
    quanLy.Xuat();

    cNhanVienSX minLuong = quanLy.TimNhanVienLuongThapNhat();
    cout << "\nNhan vien luong thap nhat: " << minLuong.getHoTen();

    cout << "\nTong luong cong ty: " << (long long)quanLy.TinhTongLuong() << " VND";

    cNhanVienSX maxTuoi = quanLy.TimNhanVienTuoiCaoNhat();
    cout << "\nNhan vien lon tuoi nhat: " << maxTuoi.getHoTen();

    quanLy.SapXepLuongTangDan();
    cout << "\n\nDANH SACH SAU KHI SAP XEP LUONG TANG DAN\n";
    quanLy.Xuat();

    return 0;
}