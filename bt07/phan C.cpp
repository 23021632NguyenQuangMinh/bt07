
#include <iostream>
using namespace std;

void reverse(char a[]) {
    int size = strlen(a);
    for (int i =0; i <size/2; i++) {
        char tmp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = tmp;
    }
}

void delete_char(char a[], char c) {
    int len = strlen(a);
    int j = 0;
    for (int i = 0; i < len; ++i) {
        if (a[i] == c) {
            j++;
        }
        else {
            a[i - j] = a[i];
        }
    }
    a[len - j] = '\0'; 
}

void pad_right(char a[], int n) {
    int len = strlen(a);
    while (len < n) {
        a[len] = ' ';
        len++;
    }
    a[len] = '\0';
}

void pad_left(char a[], int n) {
    int len = strlen(a);
    int space = n - len;
    for (int i = len-1; i >= 0; i--) {
        a[i + space] = a[i];
    }
    for (int i = 0; i < space; i++) {
        a[i] = ' ';
    }
    a[len] = '\0';
}

void truncate(char a[], int n)
{
    a[n + 1] = '\0';
}

bool isPalindrome(char a[]) {
    int size = strlen(a);
    for (int i = 0; i < size / 2; i++) {
        if (a[i] != a[size - i - 1]) {
            return false;
        }
    }
    return true;
}

void trim_left(char a[]) {
    int len = strlen(a);
    int trimCount = 0;
    while (a[trimCount] == ' ') {
        trimCount++;
    }
    for (int i = 0; i < len - trimCount; ++i) {
        a[i] = a[i + trimCount];
    }
    a[len - trimCount] = '\0';
}

void trim_right(char a[]) {
    int len = strlen(a);
    int trimCount = 0;
    for (int i = len - 1; i >= 0; --i) {
        if (a[i] == ' ') {
            trimCount++;
        }
        else {
            break;
        }
    }
    a[len - trimCount] = '\0';
}
int main()
{
    char a[] = "123456789";

    reverse(a);
    cout << a << endl;

    delete_char(a, '1');
    cout << a << endl;

    pad_right(a, 12);
    cout << a << endl;

    pad_left(a, 15);
    cout << a << endl;

    truncate(a, 6);
    cout << a << endl;

    if (isPalindrome(a)) {
        cout << "is palindrome" << endl;
    }

    trim_left(a);
    cout << a << endl;

    trim_right(a);
    cout << a << endl;
}
