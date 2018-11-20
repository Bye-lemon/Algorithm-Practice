#include "iostream"

using namespace std;

// I want one percent of the excellent of tsingyawn.

int main(void) {
	int n;
	
	cin >> n;
	int x, y, z;
	if ((n/3)*3 == n) {
		x = y = z = n/3;
		if ((x/3)*3 == x) {
			x += 2;
			y --;
			z --;
		}
	}
	else if (((n+1)/3)*3 == n+1) {
		x = y = z = (n+1)/3;
		if ((x/3)*3 == x) {
			x ++;
			y --;
			z --;
		}
		x --;
		if ((x/3)*3 == x) {
			x --;
			y ++;
		}
	}
	else if (((n+2)/3)*3 == n+2) {
		x = y = z = (n+2)/3;
		if ((x/3)*3 == x) {
			x --;
			y ++;
			z ++;
		}
		x --;
		y --;
		if ((x/3)*3 == x) {
			x ++;
			y --;
		}
	}
	cout<<x<<' '<<y<<' '<<z;
	
	return 0;
}
