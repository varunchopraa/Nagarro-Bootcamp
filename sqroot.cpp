#include<iostream>

using namespace std;

int main() {

	float ans = 0;
	float inc = 1.0;
	int p;

	int n;
	cout<<"Enter no.: ";
	cin>>n;

	cout<<"Enter precision: ";
	cin>>p;

	//p+1 times
	for(int i=0; i<=p; i++) {

		while(ans*ans<=n) {
		ans += inc;
	}
	//backtrack once for correct value since we are now 1 inc ahead
	ans -= inc;	
	//increase precision
	inc /= 10;
	}
	

	cout<<ans<<endl;

	return 0;
}