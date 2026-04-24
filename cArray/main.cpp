#include "cArray.h"
#include <iostream>

using namespace std;

int main() {
    cArray arr;
    arr.Nhap();

    cout << "\nMang ban dau la: \n";
    arr.Xuat();
    int x;
    cout << "\nNhap gia tri x can dem: ";
    cin >> x;
    cout << "So lan xuat hien cua " << x << " la: " << arr.DemGiaTri(x) << endl;
    if (arr.KiemTraTangDan()) {
        cout << "\nMang dang sap xep tang dan.\n";
    }
    else {
        cout << "\nMang khong tang dan.\n";
    }
        int ML;
        if (arr.TimLeNhoNhat(ML)) {
            cout << "\nPhan le nho nhat trong mang la: " << ML;
        }
        else {
            cout << "\nMang khong co so le nao.";
        }

        int MNT;
        if (arr.TimNguyenToLonNhat(MNT)) {
            cout << "\nSo nguyen to lon nhat trong mang la: " << MNT << endl;
        }
        else {
            cout << "\nMang khong co so nguyen to nao.\n" << endl;
        }
        cArray temp;
        temp = arr;
        temp.SapXepTangDan();
        cout << "\nMang sau khi sap xep tang dan la: \n";
        temp.Xuat();
        temp = arr;
        temp.SapXepGiamDan();
        cout << "\nMang sau khi sap xep giam dan la: \n";
        temp.Xuat();

        return 0;
    
}