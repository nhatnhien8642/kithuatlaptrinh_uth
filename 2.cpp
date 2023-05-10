#include <bits/stdc++.h>
using namespace std;

struct sinhvien
{
    string msv;
    string ten;
    double gpa;
    string dc;
    // constructer: mac dinh cho moi svien
    sinhvien()
    {
        msv = "22H4060069";
        ten = "Phan Le Nhat Anh";
        gpa = 10;
        dc = "Gia Lai";
    }
    sinhvien(string maso, string name, double diem, string diachi)
    {
        msv = maso;
        ten = name;
        gpa = diem;
        dc = diachi;
    }
    void in()
    {
        cout << msv << " " << ten << " " << fixed << setprecision(2) << gpa << " " << dc << endl;
    }
    void nhap()
    {
        cin >> msv;
        cin.ignore();
        getline(cin, ten);
        cin >> gpa;
        cin.ignore();
        getline(cin, dc);
    }
};

int main()
{
    sinhvien x;
    x.in();
    sinhvien y;
    y.in();
    sinhvien z("e501", "PhanLe", 7.8, "Thu Duc");
    z.in();
    return 0;
}
