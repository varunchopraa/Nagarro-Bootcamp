/*
Given N numbers, calculate sum of their factorial modulo 107. (Note it is not 10^7)


Input Format
First line contains positive integer N and the next line contains N space separated integers.


Constraints
N <= 10 and all integers lie between 0 and 1000.


Output Format
Output a single line denoting the result.
*/

#include<iostream>
using namespace std;

long long int fact(int n) {
	if(n==0)
		return 1;
	return n*fact(n-1);
}

int main() {
	int n;
	cin>>n;

	int sum = 0;
	int no;
	if(n<=10) {
		for(int i=0; i<n; i++) {
			cin>>no;
			if(no>=0 && no<=1000)
				sum += fact(no)%107;
		}
	cout<<sum%107;
	}
	return 0;
}