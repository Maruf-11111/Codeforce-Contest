#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,siz,j,flag=0,count=0,book[55],k,frist,ans;
    cin>>t;
    for(i=0;i<t;i++)
    {

        cin>>siz;
        for(j=0;j<siz;j++)
        {
            cin>>book[j];
            if(book[j]==1)
            {
                count++;
                k=j;

            }
            if(count==1)
            {
                frist=k;
            }

        }
        ans= ((k - frist)+1)-count;
        cout<<ans<<endl;
        k=0;
        frist=0;
        count=0;
    }
    return 0;

}
