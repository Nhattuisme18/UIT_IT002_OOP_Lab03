#include "cNhanVienSX.h"
#include <iostream>

using namespace std;
bool NguoiLonTuoiHon(Date d1, Date d2) {
    if (d1.nam != d2.nam) return d1.nam < d2.nam;
    if (d1.thang != d2.thang) return d1.thang < d2.thang;
    return d1.ngay < d2.ngay;
}


int main() {
    int n;
    do {
        cout << "Nhap so luong nhan vien(>0): ";
        cin >> n;
        if (n <= 0) cout << "Vui long nhap lai so luong nhan vien!\n";
    } while (n <= 0);

    cNhanVienSX* ds = new cNhanVienSX[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhan vien thu " << i + 1 << ":\n";
        ds[i].Nhap();
    }

    cout << "\nDANH SACH NHAN VIEN\n";
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
    }

    int vitriMinLuong = 0;
    int vitriMaxTuoi = 0;
    double TongLuong = ds[0].TinhLuong();

    for (int i = 1; i < n; i++) {
        TongLuong += ds[i].TinhLuong();

        if (ds[i].TinhLuong() < ds[vitriMinLuong].TinhLuong()) {
            vitriMinLuong = i;
        }

        if (NguoiLonTuoiHon(ds[i].getNgaySinh(), ds[vitriMaxTuoi].getNgaySinh())) {
            vitriMaxTuoi = i;
        }
    }

    cout << "\nNhan vien co luong thap nhat: " << ds[vitriMinLuong].getHoTen() << " (" << ds[vitriMinLuong].TinhLuong() << ")";
    cout << "\nTong luong cong ty phai tra: " << TongLuong;
    cout << "\nNhan vien co tuoi cao nhat: " << ds[vitriMaxTuoi].getHoTen() << "\n";

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].TinhLuong() > ds[j].TinhLuong()) {
                cNhanVienSX tam = ds[i];
                ds[i] = ds[j];
                ds[j] = tam;
            }
        }
    }

    cout << "\nDANH SACH SAU KHI SAP XEP LUONG TANG DAN\n";
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
    }

    delete[] ds;

    return 0;
}