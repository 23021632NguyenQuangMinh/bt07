
#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* x, const char* y) {
	int len1 = strlen(x);
	int len2 = strlen(y);
	char* result = new char[len1 + len2+1];
	strcpy(result, x);
	strcat(result, y);
	return result;
}

int main()
{
	const char* x = "Hello";
	const char* y = "World";
	char* result = concat(x, y);
	cout << result;
	delete[]result;
}

