#include "iostream" 
#include "algorithm"
#include "vector"
#include "iterator"

using namespace std;

// I want one percent of the excellent of tsingyawn.

int main(void) {
	int n;
	
	cin>>n;
	int array[n];
	for (int i = 0; i < n; i ++) {
		cin >> array[i];
	}
	sort(array, array+n);
	vector<int> vec;
	for(int i = 0; i < n; i ++) {
		vec.push_back(array[i]);
	}
	vector<int>::iterator result;
	result = unique(vec.begin(), vec.end());
	vec.erase(result, vec.end());
	int m = vec.size();
	cout<<m<<endl;
	for (int i = 0; i < m; i ++) {
		if (i  != m-1)
			cout<<vec[i]<<' ';
		else
			cout<<vec[i];
	}
	cout<<endl;
	
	return 0;
}
