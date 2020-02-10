#include<iostream>
using namespace std;

int main() {
	int n;
	int ans = 0;
	int p = 1;
	cin>>n;
	while(n>0) {

		int r = n%10;
		ans += r*p;
		p *= 8;
		n = n/10; 
	}

	n = ans;
	int sum = 0;
	p = 1;

	while(n != 0) {
		int rem = n%2;
		sum += rem*p;
		p *= 10;
		n /= 2;
	}

	cout<<sum;

	return 0;
}