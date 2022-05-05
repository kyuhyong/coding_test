#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>&arr, int target, int start, int end)
{
   if(start > end) return 0;
   int mid = (start + end)/2;
   if(arr[mid] == target) {
      return 1;
   } else if(arr[mid] > target) {
      return binarySearch(arr, target, start, mid - 1);
   } else {
      return binarySearch(arr, target, mid + 1, end);
   }
}

int main()
{
   ios::sync_with_stdio(0);      //To reduce time
   int n,m,input;
   vector<int> vec1;
   vector<int> vec2;
   cin>>n;        //Input size of numbers
   for(int i = 0; i<n; i++) {
      cin>>input;
      vec1.push_back(input);
   }
   sort(vec1.begin(), vec1.end());
   cin>>m;
   for(int i = 0; i<m; i++) {
      cin>>input;
      vec2.push_back(input);
   }
   for(int i =0; i<m; i++) {
      int result = binarySearch(vec1, vec2[i], 0, n-1);
      cout<<result<<"\n";
   }
   return 0;
}