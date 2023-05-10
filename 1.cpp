#include <bits/stdc++.h>
using namespace std;

// Ten, gpa, dia chi, msv
// struct ten_struct{
// member
//};

struct sinhvien
{
    string msv;
    string ten;
    double gpa;
    string dc;
};

int main()
{
//Nhap tu ban phim
    sinhvien x;
    cin >> x.msv;
    cin.ignore();
    getline(cin, x.ten);
    cin >> x.gpa;
    cin.ignore();
    getline(cin, x.dc);
    cout << x.msv << " " << x.ten << " " << fixed << setprecision(2) << x.gpa << " " << x.dc << endl;
    return 0;
}
// khoi tao luon gia tri cho moi member
    sinhvien x{"22H4060068","Phan Le Nhat Anh", 9.0, "Gia Lai"};