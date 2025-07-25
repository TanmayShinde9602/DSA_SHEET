#include<iostream>
using namespace std;

class Tanmay
{
    int n = 0;
    public :
    Tanmay(int no)
    {
        n = no;
    }

    void Display()
    {
        int iCount = 0;
        for (int i = 1; i <= n; i++)
        {
            iCount = i;
            for (int j = 1; j <= i; j++)
            {
                cout<<iCount;
            }   
            cout<<"\n";
        }   
    }
};

int main()
{
    int ilength = 0;
    cout<<"Enter the length :-\n";
    cin>>ilength;

    Tanmay tobj(ilength);
    tobj.Display();


    return 0;
}




//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5 