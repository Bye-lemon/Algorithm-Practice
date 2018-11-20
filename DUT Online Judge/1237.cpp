#include "iostream"

using namespace std;

// I am eager to have the excellence of tsingyawn one percent.

int main(void) {
	int a, c;
	char b;
	
	cin>>a>>b>>c;
	switch (b) {
		case '+':
			cout<<a<<b<<c<<'='<<a+c;
			break;
		case '-':
			cout<<a<<b<<c<<'='<<a-c;
			break;
		case '*':
			cout<<a<<b<<c<<'='<<a*c;
			break;
		case '/':
			cout<<a<<b<<c<<'=';
			printf("%.2f", float(a)/c);
			break;
	}
}
