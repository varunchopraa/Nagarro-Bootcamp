#include<iostream>

using namespace std;

int main() {

	int n;
	cin>>n;
	int p = 1;
	int ans = 0;

	while(n>0) {
		int r = n%10;
		ans += r*p;
		p *= 2;
		n = n/10; 
	}
	cout<<ans<<endl;

}