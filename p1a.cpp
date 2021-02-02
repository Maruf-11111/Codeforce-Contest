#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char c[200];
    set <char> sa;
    set <char> :: iterator it;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        for(int j=0;j<b;j++)
        {
            cin>>c[j];
            }

           sort(c, c+b);
           for(int j=0;j<b;j++)
        {
            cout<<c[j];
            }
            cout<<endl;




    }
    return 0;
}
