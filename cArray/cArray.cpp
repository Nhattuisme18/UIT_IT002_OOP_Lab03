#include "cArray.h"
#include <iostream>
#include <cmath> 

using namespace std;

void cArray::Nhap() {
    do {
        cout << "Nhap so luong phan tu cua mang (n>0): ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}

void cArray::Xuat(){
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int cArray::DemGiaTri(int x){
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) dem++;
    }
    return dem;
}

bool cArray::KiemTraTangDan(){
    if (n <= 1) return true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

bool cArray::TimLeNhoNhat(int& ML){
    bool timThay = false;
    int minLe = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (!timThay) {
                minLe = a[i];
                timThay = true;
            }
            else if (a[i] < minLe) {
                minLe = a[i];
            }
        }
    }

    ML = minLe;
    return timThay;
}

bool cArray::KiemTraNguyenTo(int x){
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

bool cArray::TimNguyenToLonNhat(int& MNT){
    bool timThay = false;
    int maxNT = 0;
    for (int i = 0; i < n; i++) {
        if (KiemTraNguyenTo(a[i])) {
            if (!timThay) {
                maxNT = a[i];
                timThay = true;
            }
            else if (a[i] > maxNT) {
                maxNT = a[i];
            }
        }
    }

    MNT = maxNT;
    return timThay;
}

void cArray::SapXepTangDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void cArray::SapXepGiamDan() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}