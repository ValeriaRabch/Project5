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
			}			
			r++;
		}
	}
	return number;
}

char* NumberToString(int number) {          //3	
	int q = 1;
	for (int i = 10;; i *= 10) {
		if (number < i) {
			break;
		}
		q++;
	}
	char str[100];	
	int r = 0, nom = number / pow(10, q - 1), w, index;
	q--; w = pow(10, q);

	for (int i = 0; q != -1; i++) {
		if (q == 0) {
			w = number;
		}		
		for (char j = '0'; j <= '9'; j++) {
			if (nom == r) {
				str[i] = j;
				index = i;				
				r = 0;
				break;
			}
			r++;
		}
		q--;		
		if (q != -1) {
			w = pow(10, q);
		}
		nom = (number / w) % 10;
	}

	str[index + 1] = '\0';	
	char* p = str;
	return p;
}

char* Uppercase(char* str1) {         //4	
	int index = 0; char j = 'A';
	for (char i = 'a'; i < 'z'; i++) {
		if (index == strlen(str1)) {
			break;
		}
		if (str1[index] == i) {
			str1[index] = j;
			index++; i = 'a'; j = 'A';
		}
		if (str1[index] == j) {
			index++; i = 'a'; j = 'A';
		}		j++;
	}	str1[index + 1] = '\0';
	return str1;
}

char* Lowercase(char* str1) {               //5	
	int index = 0; char j = 'a';
	for (char i = 'A'; i < 'Z'; i++) {
		if (index == strlen(str1)) {
			break;
		}
		if (str1[index] == i) {
			str1[index] = j;
			index++; i = 'A'; j = 'a';
		}
		if (str1[index] == j) {
			index++; i = 'A'; j = 'a';
		}		
		j++;
	}	
	str1[index + 1] = '\0';
	char* p = str1;
	return p;
}

char* mystrrev(char* str) {               //6
	char n; 
	int t = strlen(str) - 1;
	for (int i = 0; i < strlen(str) / 2; i++) {
		n = str[i];
		str[i] = str[t];		
		str[t] = n;
		t--;
	}
	char* p = str;
	return p;
}

int main() {
	char str1[20];
	char str2[20];
	cin >> str1;
	

	return 0;
}