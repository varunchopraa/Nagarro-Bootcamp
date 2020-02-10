/*
Take as input N, a number. Print the pattern as according to given input and output section.


Input Format
Integer


Constraints
1 <= N <=; 100


Output Format
Pattern


Sample Input
3
Sample Output
*

**

***
*/

#include<iostream>
using namespace std;

int main() {

	int n;
	cin>>n;

	for(int row=0; row<n; row++) {
		for(int col=0; col<=row; col++) 
			cout<<"*";
		cout<<endl;
	}

	return 0;
}