
#include <iostream>
using namespace std;

void f1(int a[]) {
    cout << sizeof(a) << endl;
}

void f2(int* a) {
    cout << sizeof(a) << endl;
}
int main()
{
    int a[] = { 1,2,3,4,5,6,7 };
    int b[4] = { 6,7,8,9 };
    cout << sizeof(a) << endl;//28=size mang
    f1(a);//8
    f2(a);//8
    cout << sizeof(b) << endl;//16
    f1(b);//8
    f2(b);//8
}

