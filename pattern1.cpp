/*
	1
   232
  34543
 4567654
*/

#include<iostream>

using namespace std;

int main() {

	int n;
	cout<<"Enter n:";
	cin>>n;

	//loop for rows 1 to n
	for(int i=1; i<=n; i++) {
		//spaces
		for(int space=1; space<=n-i; space++) 
			cout<<" ";

		//increasing numbers
		int val = i;
		for(int cnt=1; cnt<=i; cnt++) {
			cout<<val;
			val++;
		}

		//decreasing numbers
		//val is 1 more than required value
		val -= 2;
		for(int cnt=1; cnt<=i-1; cnt++) {
			cout<<val;
			val--;
		}

		//newline
		cout<<endl;
	}

	return 0;
}