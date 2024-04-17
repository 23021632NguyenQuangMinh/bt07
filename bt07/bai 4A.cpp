
#include <iostream>
bool bisearch(int* a, int right,int left,int num) {
     while(left <= right) {
        int mid = left + (right - left) / 2; 
        if (*(a + mid) == num) return true;
        if (*(a + mid) < num) left = mid + 1; 
        else right = mid - 1; 
    }
    return false;
}
int main()
{
    int a[] = { 1,4,7,8,12,53,112 };
    
    if (bisearch(a, 1, 112, 15)==true) {
        std::cout << " exist" << std:: endl;
    }
    else {
        std::cout << "cant find" << std::endl;
    }
}
