#include<iostream> 
using namespace std;

int main()
{
    int no = 0;

    cout<<"Enter the No of elements in array :-\n";
    cin>>no;

    char *CH = new char[no];
 
    for (int i = 0; i < no; i++)
    {
        cin>>CH[i];
    }

    int Hash[26] = {0};

    for (int i = 0; i < no; i++)
    {
        Hash[CH[i] - 'a']++;
    }

    int q = 0;
    cout<<"Enter the how many numbers frequency you want to find:-\n";
    cin>>q;

    while (q--)
    {
       char ivalue = 0;
       cout<<"\nEnter the Character:-\n";
       cin>>ivalue;

       cout<<Hash[ivalue-'a'];
    } 
    return 0;
}

//retrun the frequency of small alphabets(a to z)