#pragma once
const double PI = 3.14;

class cDiem
{
private:
	float x, y;
public:
	cDiem(float h = 0 , float t = 0): x(h) , y(t){}
	void Nhap();
	void Xuat();
	void Quay(float Goc);
	void TinhTien(float m, float n);
	void ThuPhong(float HeSo);
	float TinhKhoangCach(cDiem d2);
	float GetX() const { return x; }
	float GetY() const { return y; }
};

