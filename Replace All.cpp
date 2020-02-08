#include<iostream>
#include<math.h>
using namespace std;

int main() {

	int n,rem,sum=0,i=0;
	cin>>n;

	while(n!=0) {
		rem = n%10;
		if(rem == 0)
			rem = 5;
		sum += pow(10, i)*rem;
		i++;
		n /= 10;
	}
	cout<<sum;

	return 0;
}