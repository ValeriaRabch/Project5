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

int StringToNumber(char* str) {                             //2	
	int number = 0; int r , q = pow(10, strlen(str) - 1);
	for (int i = 0; i < strlen(str); i++) {
		r = 0;
		for (char j = '0'; j <= '9'; j++) {
			if (str[i] == j) {
				number += r * q; q = q / 10;				
				break;
			}			r++;
		}
	}
	return number;
}

int main() {
	char str1[20];
	char str2[20];
	cin >> str1;
	cin >> str2;
	

	return 0;
}