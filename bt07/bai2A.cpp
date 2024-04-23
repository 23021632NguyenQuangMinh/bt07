#include<cstring>
#include <iostream>
using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;// giai phong dia chi con tro p2 tro den-> p2 tro den vung da giai phong
    *p2 = 100;
    cout << *p2;
    delete p2; //giai phong bo nho da giai phong trc do

}

