#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    set <int> a;
    ///declaration of set
    set <int> :: iterator v;
    ///declaring iterator

    ///inserting value in set
    a.insert(100);
    a.insert(1000);
    a.insert(90);
    a.insert(10);
    a.insert(10);
    a.insert(90);
    a.insert(50);
    a.insert(40);
    v = a.begin();
    //a.erase(v);
    ///erase by the iterator
    //a.erase(1000);
    ///erase by the value
    a.erase(v,a.find(50));
    ///erase values to a specific limit
    for(v=a.begin();v!=a.end();v++)
    {
        cout<<" "<<*v<<endl;
    }
    ///printing a set in descending order
    set <int,greater<int>> x;
    set <int,greater<int>> :: iterator ze;
    x.insert(100);
    x.insert(1000);
    x.insert(90);
    x.insert(10);
    x.insert(10);
    cout<<"printing in descending order"<<endl;

    for(ze=x.begin();ze!=x.end();ze++)
    {
        cout<<" "<<*ze<<endl;
    }
    x.clear();
    ///clear the full set.
     for(ze=x.begin();ze!=x.end();ze++)
    {
        cout<<" "<<*ze<<endl;
    }


    return 0;





}
