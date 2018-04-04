#include <iostream>
#include <stdexcept>
using namespace std;

long long Fibonacci(unsigned int n) {

	if (n==0) 
		return 0;
	else if (n==1)
		return 1;
	else
		return Fibonacci(n-1)+Fibonacci(n-2);
}

long long Fibonacci_2(unsigned int n) {
	if (n==0) 
		return 0;
	else if (n==1)
		return 1;
	else {
		long long temp1=0;
		long long temp2=1;
		long long temp3=0;
		for (unsigned int i=2; i!=n+1; ++i) {
			temp3=temp1+temp2;
			temp1=temp2;
			temp2=temp3;
		}
		return temp3;
	}
}

int main() {
	unsigned int n=10;
	cout<<Fibonacci(n)<<endl;
	cout<<Fibonacci_2(n)<<endl;
	return 0;
}
