#pragma once
#include <iostream>

using namespace std;

class cDaThuc
{
private:
	double* heSo;
	int soMu;
public:
	cDaThuc() : heSo(nullptr), soMu(0) {}

	cDaThuc(int sm) : soMu(sm) {
		heSo = new double[soMu + 1] {0};
	}

	cDaThuc(const cDaThuc& other) {
		soMu = other.soMu;
		heSo = new double[soMu + 1];
		for (int i = 0; i <= soMu; i++) {
			heSo[i] = other.heSo[i];
		}
	}

	~cDaThuc() {
		delete[] heSo;
	}

	void Nhap();
	void Xuat(); 

	cDaThuc Cong(cDaThuc dt);
	cDaThuc Cong(double dt);
	friend cDaThuc Cong(double x, cDaThuc dt);

	cDaThuc Tru(cDaThuc dt);
	cDaThuc Tru(double x);
	friend cDaThuc Tru(double x, cDaThuc dt);

	double TinhGiaTri(double x);
};