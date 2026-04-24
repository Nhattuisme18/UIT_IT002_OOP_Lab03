#include <iostream>
#include "cDaThuc.h"

using namespace std;

int main() {
    cDaThuc dt1, dt2;

    cout << "\nNhap da thuc P(x):" << endl;
    dt1.Nhap();

    cout << "\nNhap da thuc Q(x):" << endl;
    dt2.Nhap();

    cout << "Da thuc P(x) = "; dt1.Xuat();
    cout << "Da thuc Q(x) = "; dt2.Xuat();
  
    double x;
    cout << "\nTinh gia tri da thuc tai diem x:" << endl;
    cout << "Nhap gia tri x = ";
    cin >> x;
    cout << "=> P(" << x << ") = " << dt1.TinhGiaTri(x) << endl;
    cout << "=> Q(" << x << ") = " << dt2.TinhGiaTri(x) << endl;

    
    cDaThuc tongPQ = dt1.Cong(dt2);
    cout << "P(x) + Q(x) = "; tongPQ.Xuat();

   
    cDaThuc hieuPQ = dt1.Tru(dt2);
    cout << "P(x) - Q(x) = "; hieuPQ.Xuat();

    return 0;
}