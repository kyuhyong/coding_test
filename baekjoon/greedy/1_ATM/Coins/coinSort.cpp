#include <iostream>
#include <vector>
using namespace std;

int count = 0;

int findRest(vector<int>&arr, int target)
{
    int idx = 0;
    while(arr[idx] < target) {
        idx++;
    }
    int coinVal = arr[idx-1];
    //cout<<idx-1<<"="<<coinVal<<"\n";
    int sum=0;
    while(sum < target) {
        sum+=coinVal;
        count++;
    }
    sum-=coinVal;
    count--;
    return target - sum;
}
/**
 * 동전종류 n, vars
 * 지불할돈 k
 */
int main(){
    int n; 
    int k;
    vector<int>vars;
    cin>>n;
    cin>>k;
    for(int i=0; i<n; i++) {
        int coin; cin>>coin;
        vars.push_back(coin);
    }
    /*
    int n=10; 
    int k=4200;
    vector<int>vars = {1,5,10,50,100,500,1000,5000,10000,50000};
    */
    int total = 0;
    int stac = 0;
    while(k !=0 ) {
        for(int i=n-1; i>-1; i--) {
            stac = k / vars[i];
            total+= stac;
            k -= stac * vars[i];
        }
    }
    cout<<total<<"\n";
}