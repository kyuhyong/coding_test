#include <iostream>
using namespace std;

int fib(int n)
{
	if(n<2) return n;
	return fib(n-1)+fib(n-2);
}

int main() {
	// your code goes here
	int n = 0;
	std::cin >> n;
	std::cout<<fib(n)<<std::endl;
	return 0;
}