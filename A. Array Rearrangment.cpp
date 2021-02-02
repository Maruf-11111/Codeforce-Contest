#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a[52],b[52],sum,flag,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        flag=0;
        sum=0;
        cin>>n>>x;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        k=n-1;
        for(int j=0;j<n;j++)
        {
            //cout<<j<<endl;
            cin>>b[j];
            sum=a[k]+b[j];

           // cout<<sum<<endl;
            k--;
            if(sum>x)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;
    }
}
