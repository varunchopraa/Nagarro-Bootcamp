/*
Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.


Input Format
Single integer N denoting number of lines of the pattern.


Constraints
N<=1000


Output Format
Pattern.


Sample Input
5
Sample Output
1
11
202
3003
40004
*/

#include<iostream>

using namespace std;

int main() {

	int n;
	cin>>n;
	cout<<1<<endl;
	int row = 2;
	while(row<=n) {
		int col = 1;
		while(col<=row) {
			if(col == 1 || col == row)
				cout<<row-1;
			else
				cout<<0;
			col++;
		}
		cout<<endl;
		row++;
	}

	return 0;
}