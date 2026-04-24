#include "cTamGiac.h"
#include <iostream>
#include <cmath>
#include "cDiem.h"

using namespace std;

int main() {
    cTamGiac abc;
    abc.Nhap();
    cout << "\nTam giac ban dau: \n";
    abc.Xuat();
    abc.PhanLoai();
    cout << "Chu vi tam giac la: " << abc.ChuVi() << endl;
    cout << "Dien tich tam giac la: " << abc.DienTich() << endl;
    cTamGiac temp;
    float dx, dy;
    cout << "\nNhap vector tinh tien (dx dy): ";
    cin >> dx >> dy;
    temp = abc;
    temp.TinhTien(dx, dy);
    cout << "Tam giac sau khi tinh tien la: \n";
    temp.Xuat();
    float goc;
    cout << "\nNhap goc quay (do): ";
    cin >> goc;
    temp = abc;
    temp.Quay(goc);
    cout << "Tam giac sau khi quay la: \n";
    temp.Xuat();
    float heSo;
    cout << "\nNhap he so thu phong (vd: 2 de phong to, 0.5 de thu nho): ";
    cin >> heSo;
    temp = abc;
    temp.ThuPhong(heSo);
    cout << "Tam giac sau khi thu phong la: \n";
    temp.Xuat();

    return 0;
}