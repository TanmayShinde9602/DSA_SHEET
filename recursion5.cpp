#include<iostream>
using namespace std;

class Tanmay
{
    public :
    void Display(int i , int n)
    {
        if (i < 1)
        {
            return;
        }
        Display(i-1 , n);
        cout<<i<<"\t";
        
    }
};

int main()
{
    int No = 0;

    cout<<"Enter the length\n";
    cin>>No;

    Tanmay tobj;
    tobj.Display(No, No);
    return 0;
}