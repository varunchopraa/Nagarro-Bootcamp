#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout<<"Enter n: ";
	cin>>n;

	int inp;

	int max_so_far = INT_MIN;
	int min_so_far = INT_MAX;

	for(; n>0; n--) {

		cin>>inp;
		if(inp>max_so_far)
			max_so_far = inp;
		if(inp<min_so_far)
			min_so_far = inp;
	}

	cout<<"Min: "<<min_so_far<<endl<<"Max: "<<max_so_far<<endl;

	return 0;
}