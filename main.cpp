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
		long long array[n];
		array[0]=0;
		array[1]=1;
		for (unsigned int i=2; i!=n+1; ++i) {
			array[i]=array[i-2]+array[i-1];
		}
		return array[n];
	}
}

int main() {
	unsigned int n=100;
//	cout<<Fibonacci(n)<<endl;
	cout<<Fibonacci_2(n)<<endl;
	return 0;
}
