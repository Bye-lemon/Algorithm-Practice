#include "iostream"
#include "math.h"

using namespace std;

// I am eager to have the excellence of tsingyawn one percent.

int main(void) {
	double p;
	double e = 0.0;
	cin>>p;
	for (int i = 3; i < 15; i ++) {
		e += ((i-2)*(i-1)/2)*pow((1-p), 3)*pow(p, i-3)*(i-3);
	}
	e += (13*12/2)*pow((1-p), 2)*pow(p, 12)*12;
	e += 12*(1-p)*pow(p, 12)*12;
	e += 12*pow(p, 12);
	printf("%.6lf", e);
	
	return 0;
}
