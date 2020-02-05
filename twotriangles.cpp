#include<iostream>

using namespace std;

int main() {

	int n;
	cin>>n;
	int row = 1;
	n = (n+1)/2 + 1;
	while(row<=n) {
		int col = 1;
		while(col<=2*n) {
			if(col<=row || col>2*n-row)
				cout<<"*";
			else
				cout<<" ";
			col++;
		}
		cout<<endl;
		row++;
	}

	return 0;
}