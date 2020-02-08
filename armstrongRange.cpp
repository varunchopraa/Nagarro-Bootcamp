#include<iostream>
#include<math.h>
using namespace std;
int main() {

	int n1,n2,n;
	cin>>n1>>n2;

	for(n=n1; n<=n2; n++) {
		int temp = n;
		int arm = 0;
		int rem;
		int order = 0;

		while(n!=0) {
			n /= 10;
			order++;
		}

		n = temp;

		while(n!=0) {
			rem = n%10;
			arm += pow(rem, order);
			n /= 10;
		}

		if(arm == temp)
			cout<<arm<<endl;
		n = temp;
	}

	return 0;
}