#include "cDiem.h"
#include <iostream>
#include <cmath>

using namespace std;

void cDiem::Nhap() {
	cout << "\nNhap diem: ";
	cin >> x >> y;
 }
void cDiem::Xuat() {
	cout << "(" << x << ";" << y << ")";
}
void cDiem::TinhTien(float m , float n) {
	x += m;
	y += n;
}
void cDiem::Quay(float goc) {
	double Rad = (goc * PI) / 180;
	float hehe = x;
	x = x * cos(Rad) - y * sin(Rad);
	y = hehe* sin(Rad) + y * cos(Rad);
}

void cDiem::ThuPhong(float heSo) {
	x *= heSo;
	y *= heSo;
}

float cDiem::TinhKhoangCach(cDiem d1) {
	return sqrt(pow((x - d1.x), 2) + pow((y - d1.y), 2));
}