#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;


int main() {

	int n;
	int arr[10][2];
	int mile, hour;
	int pHour = 0;
	int sum = 0;

	while(true) {
		cin >> n;

		if (n == -1) break;

		for(int i = 0; i < n; i++) {
			cin >> mile >> hour;

			if (pHour == 0) {
				sum += mile * hour;
			} else {
				sum += mile * (hour - pHour);
			}
			pHour = hour;
		}
		pHour = 0;

		cout << sum << " miles\n";
		sum = 0;
	}
}
