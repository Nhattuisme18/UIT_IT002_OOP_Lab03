#include "cDanhSachNhanVien.h"
#include "cNhanVienSX.h"
#include <iostream>

using namespace std;

void cDanhSachNhanVien::Nhap() {
    do {
        cout << "Nhap so luong nhan vien (>0): ";
        cin >> n;
        if (n <= 0) cout << "Vui long nhap lai!";
    } while (n <= 0);

    ds = new cNhanVienSX[n];
    for (int i = 0; i < n; i++) {
        cout << "\nNhan vien [" << i + 1 << "]:\n";
        ds[i].Nhap();
    }
}

void cDanhSachNhanVien::Xuat() {
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
    }
}

double cDanhSachNhanVien::TinhTongLuong() {
    double tong = 0;
    for (int i = 0; i < n; i++) {
        tong += ds[i].TinhLuong();
    }
    return tong;
}

cNhanVienSX cDanhSachNhanVien::TimNhanVienLuongThapNhat() {
    int minIdx = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].TinhLuong() < ds[minIdx].TinhLuong()) {
            minIdx = i;
        }
    }
    return ds[minIdx];
}

cNhanVienSX cDanhSachNhanVien::TimNhanVienTuoiCaoNhat() {
    int giaIdx = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].getNgaySinh().NguoiLonTuoiHon(ds[giaIdx].getNgaySinh())) {
            giaIdx = i;
        }
    }
    return ds[giaIdx];
}

void cDanhSachNhanVien::SapXepLuongTangDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].TinhLuong() > ds[j].TinhLuong()) {
                cNhanVienSX tam = ds[i];
                ds[i] = ds[j];
                ds[j] = tam;
            }
        }
    }
}