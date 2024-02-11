#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include<iostream>
#include<string.h>
using namespace std;

int mystrcmp(const char* str1, const char* str2) {   //1	
	int r = 0;
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] == str2[i]) {
			r++;
		}
		if (str1[i] > str2[i]) {
			r = -1;
			break;
		}
		if (str1[i] < str2[i]) {
			r = 1;
			break;
		}
	}	if (r == strlen(str1)) {
		return 0;
	}
	else {
		return r;
	}
}

int main() {
	char str1[20];
	char str2[20];
	cin >> str1;
	cin >> str2;
	cout << mystrcmp(str1, str2);

	return 0;
}