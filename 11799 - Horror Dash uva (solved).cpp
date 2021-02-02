#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,i;
    int a[100];
    cin>>t;
    int j=1;
    while(t--)
    {

        cin>>n;
       for( i=0;i<n;i++)
       {
           cin>>a[i];
       }
       cout<<"Case "<<j<<":"<<" "<< *max_element(a,a+i)<<endl;
       j++;
    }
}
