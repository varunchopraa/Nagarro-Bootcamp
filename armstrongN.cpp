//Armstrong No. of order n

#include<iostream>
#include<math.h>

using namespace std;

int main() {

	int n;
	cin>>n;
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
		cout<<"true";
	else
		cout<<"false";

	return 0;
}