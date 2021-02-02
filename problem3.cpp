

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    long long int test,i,j,number,siz=0,mi,ma=0,hipos,lowpos,res,ans;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>number;
        hipos=0;
        lowpos=-1;
        siz=0;

        for(j=0;j<number;j++)
        {

         if(j==0 || j==1)
            ma=siz;


          cin>>siz;


          if(j!=0)
{
         if(siz>ma)
          {

              lowpos=j-1;
          }
        if(siz>=ma)
          {
              mi=ma;

              ma=siz;
              hipos=j;



          }

}

        }
        //cout<<hipos<<endl;
        //cout<<lowpos<<endl;
        ans=number-1;
        if(hipos==ans && lowpos==-1)
        {
            res=-1;

        }
        else if(hipos==ans)
        {
            res=lowpos+2;

        }
       else if(hipos!=ans)
        {
            res=hipos+1;

        }
        cout<<res<<endl;
    }
    return 0;
}
