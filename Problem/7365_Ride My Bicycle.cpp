#define _USE_MATH_DEFINES
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stdio.h>
using namespace std;

struct Bicycle{
	int ring;
	int gear;
	double ratio;
};

bool cmpPoint(const Bicycle &u, const Bicycle &v) {
	if (u.ratio < v.ratio) return true;
	else if (u.ratio == v.ratio) {
        return u.ring < v.ring;
    }
    else {
        return false;
    }

}

int main() {
	int ring[3];
	int gear[7];
	Bicycle bicycle[21];

	for(int i = 0; i < 3; i++) cin >> ring[i];
	for(int i = 0; i < 7; i++) cin >> gear[i];

	int top = 0;

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 7; j++) {
			bicycle[top].ring = i;
			bicycle[top].gear = j;
			bicycle[top].ratio = (double)((double)ring[i] / (double)gear[j]);
			top++;
		}
	}

	sort(bicycle, bicycle + 21, cmpPoint);

	for(int i = 0; i < 21; i++) printf("%.2lf %d %d\n", 
		bicycle[i].ratio, bicycle[i].ring + 1, bicycle[i].gear + 1);
}
