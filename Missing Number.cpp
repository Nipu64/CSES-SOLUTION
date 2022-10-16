#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++)
       {

       cin>>arr[i];
       ans=ans+arr[i];

       }
       for(int i=1;i<=n;i++)
        x=x+i;
       cout<<x-ans<<endl;



       return 0;

}
