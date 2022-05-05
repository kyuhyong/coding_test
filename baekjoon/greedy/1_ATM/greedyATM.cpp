#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>&arr)
{
    int i, j;
    int temp;
    for (i = 0; i < arr.size(); i++) 
    {
        for (j = 0; j< arr.size() - (i+1); j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
/**
 * Example
 * num = 5;
 * timeArr={3, 1, 4, 3, 2};
 * result = 32
 */
int main() 
{
    ios::sync_with_stdio(0);
    int num;
    vector<int>timeArr;
    cin>>num;
    for(int i=0; i<num; i++) {
        int time; cin>>time;
        timeArr.push_back(time);
    }
    bubbleSort(timeArr);
    for(int x: timeArr)
    cout<<x<<" ";
    cout<<"\n";
    int sum = 0;
    for(int i=0; i<num; i++) {
        for(int j=0; j<=i; j++) {
            sum+= timeArr[j];
        }
    }
    cout<<sum<<"\n";
}