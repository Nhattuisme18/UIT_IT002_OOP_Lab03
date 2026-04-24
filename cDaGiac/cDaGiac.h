#pragma once
#include "cDiem.h"
const int MAX = 1000;

class cDaGiac {
private:
	int	SoDinh;
	cDiem dsDinh[MAX];
public:
	cDaGiac(int sd = 0):SoDinh(sd){}
	void Nhap();
	void Xuat();
	void Quay(float Goc);
	void TinhTien(float m, float n);
	void ThuPhong(float HeSo);
	bool KiemTraHopLe();
	void PhanLoai();
	float ChuVi();
	float DienTich();

};