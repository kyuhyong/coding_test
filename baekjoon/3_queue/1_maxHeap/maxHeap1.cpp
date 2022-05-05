#include <iostream>
#include <vector>
using namespace std;

void pop(vector<int>&arr)
{
    
}

void push(vector<int>&arr, int num)
{
    arr.push_back(num);
    int idx = arr.size()-1;
    int p_idx = (idx - 1) / 2;
    while(p_idx >= 0 && arr[p_idx] < arr[idx]) {
        //swap elements
        int tmp = arr[p_idx];
        arr[p_idx] = arr[idx];
        arr[idx] = tmp;
        p_idx = (idx-1)/2;
    }
}

int main() 
{
    ios::sync_with_stdio(0);
    int num, input;
    int nodeSize = 1;
    vector<int> arr;
    cin>>num;
    for(int i=0; i<num; i++) {
        cin>>input;
        if(input == 0) {
            if(arr.size()==0) {
                cout<<0<<"\n";
            } else {
                pop(arr);
            }
        } else if(input > 0) {
            push(arr, input);
        }
    }
}