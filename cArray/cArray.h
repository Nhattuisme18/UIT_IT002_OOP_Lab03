#pragma once

const int MAX = 1000;

class cArray {
private:
    int n;
    int a[MAX];
    bool KiemTraNguyenTo(int x);

public:
    cArray() : n(0) {}
    void Nhap();     
    void Xuat() ;

    int DemGiaTri(int x);
    bool KiemTraTangDan();

    bool TimLeNhoNhat(int& ML) ;
    bool TimNguyenToLonNhat(int& MNT);

    void SapXepTangDan();
    void SapXepGiamDan();
};