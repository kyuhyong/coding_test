#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(0);
    int n, a, b;
    //cin>>n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d %d",&a, &b);
        printf("%d\n",a+b);
        //cin>>a>>b;
        //cout<<a+b<<"\n";
    }
    return 0;
}