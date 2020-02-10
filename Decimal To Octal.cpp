#include<iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	int sum = 0;
	int p = 1;

	while(n != 0) {
		int rem = n%8;
		sum += rem*p;
		p *= 10;
		n /= 8;
	}

	cout<<sum;

	return 0;
}