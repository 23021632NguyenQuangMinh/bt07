
#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int* p = &x;
    cout << x << endl;
    cout << p << endl;
    delete p;
    cout << x << endl;
    cout << *p;
}
//main.cpp: In function ‘int main()’:
//main.cpp:11 : 12 : warning : ‘void operator delete(void*)’ called on unallocated object ‘x’[-Wfree - nonheap - object]
//11 | delete p;
//| ^
//main.cpp:7 : 9 : note : declared here
//7 | int x = 1;
//| ^

//bo nho bien dia phuong duoc cap phat va giai phong
//tu dong khi khoi lenh ket thuc. -> delete gay loi