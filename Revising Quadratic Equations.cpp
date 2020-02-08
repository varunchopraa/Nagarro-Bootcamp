/*
Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Equal , Real and Equal , Imaginary) and the roots.


Input Format
First contains three coefficients a,b,c from the equation ax^2 + bx + c = 0.


Constraints
-100 <= a, b, c <= 100


Output Format
Output contains one/two lines.First line contains nature of the roots .The next line contains roots(in non-decreasing order) separated by a space if they exist. If roots are imaginary do not print the roots.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int a,b,c,x1,x2,d;

	cin>>a>>b>>c;
	if(a>=-100 && a<=100 && b>=-100 && b<=100 && c>=-100 && c<=100) {
		d = b*b - 4*a*c;
		if(d>0) {
			cout<<"Real and Distinct"<<endl;
			int x1 = (-1*b + sqrt(d))/(2*a);
			int x2 = (-1*b - sqrt(d))/(2*a);
			cout<<std::min(x1,x2)<<" "<<std::max(x1,x2);
		}
		else if (d==0) {
			cout<<"Real and Equal"<<endl;
			int x1 = (-1*b + sqrt(d))/(2*a);
			int x2 = (-1*b - sqrt(d))/(2*a);
			cout<<std::min(x1,x2)<<" "<<std::max(x1,x2);
		}
		else 
			cout<<"Imaginary";
		return 0;
	}
	else 
		return -1;
}