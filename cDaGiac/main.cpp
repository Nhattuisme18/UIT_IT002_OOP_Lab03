#include "cDaGiac.h"
#include <iostream>

using namespace std;

int main() {
    cDaGiac abc;
    abc.Nhap();
    abc.PhanLoai();

    cout << "\nDa giac ban dau: \n";
    abc.Xuat();
    cout << "Chu vi da giac la: " << abc.ChuVi() << endl;
    cout << "Dien tich da giac la: " << abc.DienTich() << endl;

    cDaGiac temp;

    float dx, dy;
    cout << "\nNhap vector tinh tien (dx dy): ";
    cin >> dx >> dy;
    temp = abc;
    temp.TinhTien(dx, dy);
    cout << "Da giac sau khi tinh tien la: \n";
    temp.Xuat();
    float goc;
    cout << "\nNhap goc quay (do): ";
    cin >> goc;
    temp = abc;
    temp.Quay(goc);
    cout << "Da giac sau khi quay la: \n";
    temp.Xuat();
    float heSo;
    cout << "\n--- Thu phong ---";
    cout << "\nNhap he so thu phong: ";
    cin >> heSo;
    temp = abc;
    temp.ThuPhong(heSo);
    cout << "Da giac sau khi thu phong la: \n";
    temp.Xuat();

    return 0;
}