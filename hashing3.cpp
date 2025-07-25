#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number of elements in array: ";
    cin>>n;
    
    int Arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>Arr[i];
    }

    map<int,int> mpp;                  //ithe jar unordered map use kela tr time complexity aajun kami honar 
                                       // karan map madhe data sorted asto unordered madhe sorted data nasato
    for (int i = 0; i < n; i++)
    {
        mpp[Arr[i]] ++;
    }

    for ( auto it : mpp)
    {
        cout<<it.first <<"->"<<it.second<<endl;
    }
    

    int q = 0;
    cout<<"Enter how many elements you want to find :-\n";
    cin>>q;

    while (q--)
    {
        int ivalue;
        cout << "Enter number: \n";

        cin>>ivalue;

        cout<<"Total frequency in Array :-\n"<<mpp[ivalue]<<"\n";
    }
    
    return 0;
}