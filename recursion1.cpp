#include<iostream>
using namespace std;

class tanmay
{
    public :

    void Display(int i , int No1)
    {
        if (i> No1)
        {
            return;
        }
        cout<<"TANMAY..!!\n";
        i++;
        Display(i, No1);
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

// Print the name N times using the Recursion