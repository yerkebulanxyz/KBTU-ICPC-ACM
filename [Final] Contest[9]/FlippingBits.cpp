#include <iostream>
	
	using namespace std;

	int main() {
		
	int n;
	cin >> n;
	long long a[n];

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		cout << 4294967295 - a[i] << endl;
	}


	return 0;
	}


	