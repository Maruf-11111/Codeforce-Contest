#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ri;
    v.assign(5,10);
    ///upper function means it assign 10 to the first 5 value.

    for(int i=0;i<10;i++)
    {
        v.push_back(i);

    }
    ///this is not the proper way of travesersing
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j];
        ///cout<<v.empty()<<endl;
        ///v.empty() this function is used for checking if a function is empty or not. if empty it will output 1 and if not empty it will output 0.
    }
    ///cout<<v.max_size()<<endl;
    ///proper way is traversing is given below with iterator

    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }

    i=v.begin();
    v.erase(i+5);
    v.insert(i+5,30);
    ///this will insert a value in the position of i+5 and laters values of index will be increased by 1.
    ///now if we want to replace the value of i+5 th value we have to add a erase function before that function
    cout<<endl;
    ///use of reverse iterator
    for( ri=v.rbegin(); ri!=v.rend(); ri++)
    {
        cout<< *ri<<" ";
    }
    return 0;
}

