#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;


int main() {
	int p, q;
	int pArr[6000];
	int qArr[6000];
	int top = 0;

	cin >> p >> q;

	for(int i = 1; i <= p; i++) {
		if(p % i == 0) {
			pArr[top] = i;
			top++;
		}
	}
	int pLength = top;
	top = 0;

	for(int i = 1; i <= q; i++) {
		if(q % i == 0) {
			qArr[top] = i;
			top++;
		}
	}
	int qLength = top;

	for(int i = 0; i < pLength; i++) 
		for(int j = 0; j < qLength; j++) {
			cout << pArr[i] << ' ' << qArr[j] << '\n';
		}
}
