#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int money, vector<int>coinList) {
    vector<int>cashOut(coinList.size());
    //for(int i=0; i<coinList.size(); i++) {
    //    cashOut.push_back(0);
    //}
    int num = 0;
    for(int i=0; i<coinList.size(); i++) {
        num = money / coinList[i];
        if(num > 0) {
            cashOut[i] = num;
        }
        money %= coinList[i];
    }
    return cashOut;
}

int main(void) {
    int m = 50237;
    vector<int>coins = {50000,10000,5000,1000,500,100,50,10,1};
    vector<int>cashList = solution(m, coins);
    for(int e:cashList)
    cout<<e<<" ";
    cout<<'\n';
}