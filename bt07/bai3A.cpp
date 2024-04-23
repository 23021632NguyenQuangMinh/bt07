// bai3A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr << "a: " << "-" << a << "-" << endl;//out:-aaaaaaaaa-
    cerr << "c: " << "-" << c << "-" << endl;//out:-aaaaaa-
    //delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
//lenh cerr thu 3 chay khong nhu mong muon.
// delete c gay ra loi vi gia tri cua toan hang cua toan tu delete phai la
// gia tri con tro thu tu 1 bieu thuc new array truoc do. neu khong thi ko xac dinh