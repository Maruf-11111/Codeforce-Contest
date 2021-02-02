#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,total=0,j,res,count=0;
    string x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        cin>>x;


      for(int j=1; j<x.size();j++)

        {
            if(x[j]=='0' && x[j-1]=='1'&&x[j+1]=='1')
            {

                x[j+1]='0';


                     cout<<j;


            }








        }



    }


}
