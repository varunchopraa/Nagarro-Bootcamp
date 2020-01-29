#include<iostream>

using namespace std;

int main() {

	int n;
	
	int numbers;
	cin>>numbers;

	for(int i=0; i<numbers; i++) {

		int ans = 0;
		int p = 1;
		
		cin>>n;
		while(n>0) {
		int r = n%10;
		ans += r*p;
		p *= 2;
		n = n/10; 
	}
	cout<<ans<<endl;

	}
}