#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    int num, input;
    vector<int> ref;
    vector<int> arr;
    cin>>num;
    for(int i =0; i<num; i++) {
        cin>>input;
        ref.push_back(input);
    }
    for(int i = 0; i<num; i++) {
        if(ref[i] > 0) {
            arr.push_back(ref[i]);
        } else if(ref[i] == 0) {
            int ret = 0;
            if(arr.size() == 0) ret =0;
            else {
                sort(arr.begin(), arr.end());
                ret = arr.back();
                arr.pop_back();
            }
            cout<<ret<<"\n";
        }
    }
}