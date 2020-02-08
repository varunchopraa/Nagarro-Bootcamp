#include<iostream>
#include<math.h>
using namespace std;

int main() {

	int n;
	int num;

	for(int i=0; i<n; i++) {
		int sum = 0;
		cin>>num;
		for(int j=1; j<=num; j++) {
			sum += pow(-1,j)*j;
		}
		cout<<sum<<endl;
	}
	return 0;
}