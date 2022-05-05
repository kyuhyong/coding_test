#include <iostream>
using namespace std;

int fact(int n)
{
	if(n==1 || n==0) return 1;
	return n*fact(n-1);
}

int main() {
	// your code goes here
	int n = 0; int ans = 0;
	std::cin >> n;
	std::cout<<fact(n)<<std::endl;
	return 0;
}