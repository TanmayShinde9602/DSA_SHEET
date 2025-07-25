#include<iostream>
using namespace std;

class Tanmay
{
    public :
    int Summation(int i , int Sum)
    {
        if (i<1)
        {
            return Sum;
        }
        Sum = Sum + i;
        Summation(i-1, Sum);
    }
};

int main()
{
    int n = 0;
    int iSum = 0;

    cout<<"Enter the length os numbers :-\n";
    cin>>n;

    Tanmay tobj;
    iSum = tobj.Summation(n,0);
    cout<<"Summation of Numbers is :-\n"<<iSum;

    return 0;
}