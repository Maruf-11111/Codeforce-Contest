#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t,n,mx;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int high=0,low=0,a=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {

            mx=a;
            cin>>a;
            if(j==0)
            continue;
            if(mx>a)
            {
                low=low+1;
            }
            else if(mx<a)
            {
                high=high+1;
            }


        }
        cout<<"Case "<<i+1<<":"<<" "<<high<<" "<<low<<endl;
    }
    return 0;
}
