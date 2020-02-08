/*
Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

1
11
111
1001
11111
100001


Input Format
Single number N.


Constraints
N<=1000


Output Format
Pattern corresponding to N.
*/

#include<iostream>

using namespace std;

int main() {

	int n;
	cin>>n;
	int row = 1;
	while(row<=n) {
		int col = 1;
		while(col<=row) {
			if(col == 1 || col == row)
				cout<<1;
			else if(row%2 == 0)
				cout<<0;
			else
				cout<<1;
			col++;
		}
		cout<<endl;
		row++;
	}

	return 0;
}