/*
Take N as input. Print all fibonnaci numbers less than equal to N.


Input Format
Constraints
0 < N <= 1000


Output Format
Sample Input
11
Sample Output
0
1
1
2
3
5
8
Explanation
Each output should be in separate line.
*/

#include<iostream>
using namespace std;

int fibonacci(int n) {
	if(n<=1)
		return n;
	return fibonacci(n-1) + fibonacci(n-2);
	
}

int main() {
	int n;
	cin>>n;
	cout<<0<<endl;
	for(int i=1; fibonacci(i)<=n; i++)
		cout<<fibonacci(i)<<endl;
	return 0;
}