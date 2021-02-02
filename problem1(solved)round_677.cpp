#include<bits/stdc++.h>
using namespace std;
int main()
{
   int number,t,re,a,x,j,div,ans;
   a=10;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>re;
       div=re%10;



       for( j=0;re!=0;j++)
       {
          re=re/a;
       }
       if(j==1)
         {
             ans= (div-1)*10+1;
         }
          if(j==2)
         {
             ans= (div-1)*10+3;
         }
          if(j==3)
         {
             ans= (div-1)*10+6;
         }
          if(j==4)
         {
             ans= (div-1)*10+10;
         }




         cout<<ans<<endl;


   }


}
