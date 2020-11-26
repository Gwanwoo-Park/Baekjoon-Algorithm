#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;


int main() {
	int t;
	char arr[101][101];
	char s[100001];

	cin >> t;

	for(int i = 0; i < t; i++) {
		cin >> s;

		int top = 0;
		int length = sqrt(strlen(s));
		
		for(int j = 0; j < length; j++) 
			for(int k = 0; k < length; k++) {
				arr[j][k] = s[top];
				top++;
			}

		for(int j = length - 1; j >= 0; j--) {
			for(int k = 0; k < length; k++) {
				cout << arr[k][j];
			}
		}
		cout << '\n';
	}
}
