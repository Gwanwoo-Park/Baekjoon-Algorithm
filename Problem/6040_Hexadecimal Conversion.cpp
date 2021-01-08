#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;


int main() {
	string s;

	cin >> s;

	string tmp = "";

	int length = s.length();

	for(int i = 0; i < length; i++) {
		if (s[i] == '0') {
			if (i == 0) {
				tmp = "0";
				break;
			} else {
				tmp += "0000";
			}
		} else if (s[i] == '1') {
			tmp += "0001";
		} else if (s[i] == '2') {
			tmp += "0010";
		} else if (s[i] == '3') {
			tmp += "0011";
		} else if (s[i] == '4') {
			tmp += "0100";
		} else if (s[i] == '5') {
			tmp += "0101";
		} else if (s[i] == '6') {
			tmp += "0110";
		} else if (s[i] == '7') {
			tmp += "0111";
		} else if (s[i] == '8') {
			tmp += "1000";
		} else if (s[i] == '9') {
			tmp += "1001";
		} else if (s[i] == 'A') {
			tmp += "1010";
		} else if (s[i] == 'B') {
			tmp += "1011";
		} else if (s[i] == 'C') {
			tmp += "1100";
		} else if (s[i] == 'D') {
			tmp += "1101";
		} else if (s[i] == 'E') {
			tmp += "1110";
		} else if (s[i] == 'F') {
			tmp += "1111";
		}
	}

	length = tmp.length();

	if (length % 3 == 1) {
		tmp = "00" + tmp;
		length += 2;
	}
	else if (length % 3 == 2) {
		tmp = "0" + tmp;
		length++;
	}

	string result = "";

	for(int i = 0; i < length; i++) {
		result += tmp[i];
		if (result.length() == 3) {
			if (!result.compare("000")) {
				if (length == 3) {
					cout << "0";
					break;
				}
				else if (i >= 3) {
					cout << "0";
				}
			} else if (!result.compare("001")) {
				cout << "1";
			} else if (!result.compare("010")) {
				cout << "2";
			} else if (!result.compare("011")) {
				cout << "3";
			} else if (!result.compare("100")) {
				cout << "4";
			} else if (!result.compare("101")) {
				cout << "5";
			} else if (!result.compare("110")) {
				cout << "6";
			} else if (!result.compare("111")) {
				cout << "7";
			} 
			result = "";
		}
	}
	
	cout << '\n';
}
