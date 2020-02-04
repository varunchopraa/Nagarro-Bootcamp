#include<iostream>

using namespace std;

int main() {

	int n;
	cin>>n;

	int no,i;

	for(no=1;no<=n;no++) {

		i=2;
		while(i<=no-1) {
			if(no%i==0) {
				break;
			}
			i++;
		}
		//prime found
		if(i==no) {
			cout<<no<<' ';
		}
	}

	cout<<endl;

	return 0;
}