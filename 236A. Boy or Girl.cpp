#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin >> s;


    set<char> userSet;
    for (int i=0;i<s.size();i++)
    {
        userSet.insert(s[i]);
    }

    if (userSet.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

}

