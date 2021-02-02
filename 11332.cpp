#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,x=-1,cn,mn=0;

        cin>>n;

       for(i=0;n!=0;i++)

       {
            x=n%10;
            n=n /10;
           j=j+x;



           cout<<x<<" ";



       }
        cout<<j<<endl;




}
