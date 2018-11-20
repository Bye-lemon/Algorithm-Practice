#include "iostream"

using namespace std;

// I want one percent of the excellent of tsingyawn.

int main(void) {
	int t;
	
	cin>>t;
	int n[t], s[t];
	char var[t][6][80];
	for (int i = 0; i < t; i ++) {
		cin>>n[i];
		for (int j = 0; j < n[i]; j ++) {
			cin>>var[i][j];
		}
	}
	for (int i = 0; i < t; i ++) {
		int size = 0;
		for (int j = 0; j < n[i]; j ++) {
			int index, count = 0;
			for (int k = 0; var[i][j][k] != ';'; k ++) {
				if (var[i][j][k] == '_') {
					index = k;
				}
				if (var[i][j][k] == ',') {
					count ++;
				}
			}
			count ++;
			switch (index) {
				case 3:
					size += count*4;
					break;
				case 4:
					size += count;
					break;
				case 6:
					size += count*8;
					break;
				case 9:
					size += count*8;
					break;
				case 11:
					size += count*16;
					break;
			}
		}
		cout<<size<<endl;
	}
	
	return 0;
}
