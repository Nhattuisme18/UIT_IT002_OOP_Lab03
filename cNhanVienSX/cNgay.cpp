#include "cNgay.h"
#include <iostream>

using namespace std;

void cNgay::Nhap() {
    cin >> ngay >> thang >> nam;
}

void cNgay::Xuat() {
    cout << ngay << "/" << thang << "/" << nam;
}

bool cNgay::NguoiLonTuoiHon(cNgay d2) {
    if (nam != d2.nam) return nam < d2.nam;
    if (thang != d2.thang) return thang < d2.thang;
    return ngay < d2.ngay;
}