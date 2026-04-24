#include "cDaThuc.h"
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

cDaThuc cDaThuc::Cong(cDaThuc dt) {
	cDaThuc Tong;
	Tong.soMu = max(dt.soMu, soMu);

	Tong.heSo = new double[Tong.soMu + 1] {0};

	for (int i = 0; i <= Tong.soMu; i++) {
		if (i <= soMu) Tong.heSo[i] += heSo[i];
		if (i <= dt.soMu) Tong.heSo[i] += dt.heSo[i];
	}
	return Tong;
}

cDaThuc cDaThuc::Cong(double dt) {
	cDaThuc dt0(0); // Khởi tạo thẳng bậc 0, KHÔNG DÙNG dt0 = cDaThuc(0);
	dt0.heSo[0] = dt;
	return (*this).Cong(dt0);
}

cDaThuc Cong(double x, cDaThuc dt) {
	return dt.Cong(x);
}

cDaThuc cDaThuc::Tru(cDaThuc dt) {
	cDaThuc Hieu;
	Hieu.soMu = max(dt.soMu, soMu);

	Hieu.heSo = new double[Hieu.soMu + 1] {0};

	for (int i = 0; i <= Hieu.soMu; i++) {
		if (i <= soMu) Hieu.heSo[i] = heSo[i];
		if (i <= dt.soMu) Hieu.heSo[i] -= dt.heSo[i];
	}
	return Hieu;
}

cDaThuc cDaThuc::Tru(double x) {
	cDaThuc dt0(0); 
	dt0.heSo[0] = x;
	return this->Tru(dt0);
}
cDaThuc Tru(double x, cDaThuc dt) {
	cDaThuc dt0(0);
	dt0.heSo[0] = x;
	return dt0.Tru(dt);
}

void cDaThuc::Nhap() {
	cout << "Nhap so mu (bac da thuc): ";
	cin >> soMu;
	delete[] heSo;

	heSo = new double[soMu + 1];

	for (int i = 0; i <= soMu; i++) {
		cout << "Nhap he so x^" << i << ": ";
		cin >> heSo[i];
	}
}

double cDaThuc::TinhGiaTri(double x) {
	double ketQua = 0;
	for (int i = 0; i <= soMu; i++) {
		ketQua += heSo[i] * pow(x, i);
	}
	return ketQua;
}

void cDaThuc::Xuat() {
	bool laPhanTuDauTien = true;

	for (int i = soMu; i >= 0; i--) {
		if (heSo[i] != 0) {
			if (laPhanTuDauTien) {
				cout << heSo[i];
				laPhanTuDauTien = false;
			}
			else {
				if (heSo[i] > 0) cout << " + " << heSo[i];
				else cout << " - " << abs(heSo[i]);
			}

			if (i > 0) cout << "x^" << i;
		}
	}

	if (laPhanTuDauTien) cout << 0;

	cout << endl;
}


