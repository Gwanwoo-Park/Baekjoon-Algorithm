#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main() {
	int t;
	char s[41];
	int ttt = 0, tth = 0, tht = 0, thh = 0, htt = 0, hth = 0, hht = 0, hhh = 0;

	cin >> t;

	for(int i = 0; i < t; i++) {
		cin >> s;

		for(int j = 0; j < 38; j++) {
			if(s[j] == 'T') {
				if(s[j + 1] == 'T') {
					if(s[j + 2] == 'T') {
						ttt++;
					} else if(s[j + 2] == 'H') {
						tth++;
					}
				} else if(s[j + 1] == 'H') {
					if(s[j + 2] == 'T') {
						tht++;
					} else if(s[j + 2] == 'H') {
						thh++;
					}
				}
			} else if(s[j] == 'H') {
				if(s[j + 1] == 'T') {
					if(s[j + 2] == 'T') {
						htt++;
					} else if(s[j + 2] == 'H') {
						hth++;
					}
				} else if(s[j + 1] == 'H') {
					if(s[j + 2] == 'T') {
						hht++;
					} else if(s[j + 2] == 'H') {
						hhh++;
					}
				}
			}
		}

		cout << ttt << ' ' << tth << ' ' <<
			tht << ' ' << thh << ' ' << htt << ' ' << hth << ' ' << 
			hht << ' ' << hhh << '\n';

		ttt = 0, tth = 0, tht = 0, thh = 0, htt = 0, hth = 0, hht = 0, hhh = 0;
	}
}
