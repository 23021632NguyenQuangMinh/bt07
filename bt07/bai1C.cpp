
#include <bits/stdc++.h>

using namespace std;

char* reverse(const char* a) {
    int size = strlen(a);
    char* result = new char[size + 1];
    for (int i = 0; i < size; i++) {
        result[i] = a[size - i - 1];
    }
    return result;
}

char* delete_char(const char* a, char c) {
    int size = strlen(a);
    int j = 0;
    char* result = new char[size + 1];
    for (int i = 0; i < size; i++) {
        if (a[i] != c) {
            result[j] = a[i];
            j++;
        }
    }
    result[j] = '\0';
    return result;
}

char* pad_right(const char* a, int n) {
    int size = strlen(a);
    char* result = new char[n + 1];
    strcpy(result, a);
    while (size < n) {
        result[size] = ' ';
        size++;
    }
    result[size] = '\0';
    return result;
}

char* pad_left(const char* a, int n) {
    int size = strlen(a);
    char* result = new char[n + 1];
    strcpy(result, a);
    int space = n - size;
    for (int i = size - 1; i >= 0; i--) {
        result[i + space] = a[i];
    }
    for (int i = 0; i < space; i++) {
        result[i] = ' ';
    }
    result[n] = '\0';
    return result;
}

char* truncate(const char* a, int n) {
    int size = strlen(a);
    char* result = new char[size + 1];
    strcpy(result, a);
    result[n] = '\0';
    return result;
}

char* trim_left(const char* a) {
    int size = strlen(a);
    int spaceCount = 0;
    char* result = new char[size + 1];
    strcpy(result, a);
    for (int i = 0; i < size; i++) {
        if (a[i] == ' ') {
            spaceCount++;
        }
    }
    for (int i = 0; i < size - spaceCount; i++) {
        result[i] = result[i + spaceCount];
    }
    result[size - spaceCount] = '\0';
    return result;
}

char* trim_right(const char* a) {
    int size = strlen(a);
    int spaceCount = 0;
    char* result = new char[size + 1];
    strcpy(result, a);
    for (int i = 0; i < size; i++) {
        if (result[i] == ' ') {
            spaceCount++;
        }
    }
    result[size - spaceCount] = '\0';
    return result;
}
int main()
{
    const char* a = "HelloWorld";
    char* result1 = reverse(a);
    cout << result1 << endl;

    const char* b = "kakeeaokq";
    char* result2 = delete_char(b, 'k');
    cout << result2 << endl;
    
    const char* c = "fdsifij";
    char* result3 = pad_right(c, 12);
    cout << "-" << result3 << "-" << endl;

    const char* d = "jd109dw90";
    char* result4 = pad_left(d, 15);
    cout << "-" << result4 << "-" << endl;

    const char* e = "119129dd12";
    char* result5 = truncate(e, 4);
    cout << result5 << endl;

    const char* f = "     120233";
    char* result6 = trim_left(f);
    cout << result6 << endl;

    const char* g = "1232323      ";
    char* result7 = trim_right(g);
    cout << "-" << result7 << "-";
}

