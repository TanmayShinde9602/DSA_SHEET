#include<iostream>
using namespace std;

class tanmay
{
    public :
    int iCnt = 1;

    void Display(int i , int No1)
    {
        if (i> No1)
        {
            return;
        }
        cout<<i<<"\t";
        
        Display(i+1, No1);
    }
};

int main()
{
    int n = 0;
    cin>>n;
    tanmay tobj;
    tobj.Display(1, n);

    return 0;
}

//print 1 to n by using recursion