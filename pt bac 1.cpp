#include <iostream>
using namespace std;
int main()
{
    cout << "Chuong trinh giai phuong trinh bac nhat.\nPhuong trinh ax+b=0.\nNhap vao cac gia tri a,b\n";
    float a, b, x;
    cout << "Nhap vao a: ";
    cin >> a;
    cout << "Nhap vao b: ";
    cin >> b;
    if (a == 0)
    {
        if (b != 0)
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (b == 0)
        {
            cout << "Phuong trinh co vo so nghiem" << endl;
        }
    }
    else
    {
        cout << "x = " << -b / a << endl;
    }
    return 1;
}

/*
In ra man hinh dong sau:
Chuong trinh giai phuong trinh bac nhat
Phuong trinh ax+b=0.
Nhap vao cac gia tri a, b:
*/