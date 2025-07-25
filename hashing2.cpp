#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the String:-\n";
    cin>>s;
    
    int Hash[26] = {0};

    for (int  i = 0; i < s.size(); i++)
    {
        Hash[s[i]- 'a']++;
    }

    int ivalue = 0;
    cout<<"Enter the no of charcter to check its frequency:-\n";
    cin>>ivalue;

    while (ivalue--)
    {
        char ch;
        cin>>ch;

        cout<<Hash[ch-'a'];
        cout<<"\n";
    }
    return 0;
}