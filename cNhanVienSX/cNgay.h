#pragma once

class cNgay {
private:
    int ngay, thang, nam;
public:
    cNgay(int ng = 18, int th = 3, int n = 2007) : ngay(ng), thang(th), nam(n) {}
    void Nhap();
    void Xuat();
    bool NguoiLonTuoiHon(cNgay d2);
};