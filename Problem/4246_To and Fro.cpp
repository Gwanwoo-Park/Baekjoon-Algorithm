#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;


int main() {

	int n;
	int position = 0;
	char arr[250];

	while(true) {
		cin >> n;

		if (n == 0) break;

		cin >> arr;

		int len = strlen(arr) / n;

		char **s = new char*[len];
		for(int i = 0; i < len; i++) { 
			s[i] = new char[n];
			memset(s[i], '\n', sizeof(char)*n);
		}
		

		for(int i = 0; i < len; i++) {
			if (i % 2 == 0) {
				for(int j = 0; j < n; j++) {
					s[i][j] = arr[position];
					position++;
				}
			} else {
				for(int j = n - 1; j >= 0; j--) {
					s[i][j] = arr[position];
					position++;
				}
			}
		}
		
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < len; j++) {
				cout << s[j][i];
			}
		}
		cout << '\n';
		
		position = 0;

		/*

		for(int i = 0; i < n; i++) {
			delete [] s[i];
		}
		delete [] s;
	*/
	}

}
