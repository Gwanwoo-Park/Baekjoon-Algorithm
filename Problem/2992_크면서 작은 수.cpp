#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	
	string str;
	cin >> str;

	bool chk = next_permutation(str.begin(), str.end());

	if (chk) cout << str;
	else cout << 0;
}
