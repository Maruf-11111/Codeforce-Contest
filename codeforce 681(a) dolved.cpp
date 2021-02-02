#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,result;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        result=4*n;
        for(int j=0;j<n;j++)
        {

            result=result-2;
            cout<<result;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
