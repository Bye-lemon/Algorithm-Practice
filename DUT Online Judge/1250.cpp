#include "iostream"

using namespace std;

// I want one percent of the excellent of tsingyawn.

int main(void) {
	int n;
	
	cin>>n;
	int a[n][n];
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < n; j ++) {
			cin>>a[i][j];
		}
	}
	int ii, ij;
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < n; j ++) {
			if (a[i][j] == -1) {
				ii = i;
				ij = j;
			}
		}
	}
	long long sigma_res = 0;
	long sigma_ten = 0;
	for (int j = 0; j < n; j ++) {
		if (a[ii][j] != -1) {
			sigma_ten += a[ii][j];
		}
	}
	for (int i = 0; i < n; i ++) {
		if (a[i][ij] != -1) {
			sigma_ten += a[i][ij];
		}
	}
	for (int i = 0; i < n; i ++) {
		if (i == ii)
			continue;
		for (int j = 0; j < n; j ++) {
			if (j == ij)
				continue;
			sigma_res += a[i][j];
		}
	}
	cout<<((sigma_ten)-(sigma_res)/(n-1))/(n-1);
	
	return 0;
}
