#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int distinct = 1;
    if(A.size() <= 1) {
        return A.size();
    } else {
        sort(A.begin(), A.end());
        for(int i = 1; i<A.size(); i++) {
            if(A[i] == A[i-1]) {

            } else {
                distinct++;
            }
        }
    }
    return distinct;
}

int main(void) {
    int n; 
    vector<int>arr;
    /*
    cin>>n;
    for(int i =0;i<n;i++) {
        int a; cin>>a;
        arr.push_back(a);
    }*/
    n = 5;
    arr = {2, 1, 1, 2, 3, 1};
    cout<<solution(arr)<<'\n';
}