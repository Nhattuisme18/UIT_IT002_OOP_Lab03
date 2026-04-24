#pragma once

const double PI = 3.14;
class cDiem
{
private:
	float x, y;
public:
	cDiem(float h = 0, float t = 0) : x(h), y(t) {};
	void Nhap();
	void Xuat();
	void Quay(float goc);
	void ThuPhong(float heSo);
	void TinhTien(float m, float n);
	float TinhKhoangCach(cDiem d1);
};

