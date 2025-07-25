#include<iostream>
using namespace std;

class Tanmay
{
    public :
    int iRet = 0;
    int revNo = 0;
    int original = 0;
    bool reverseNO(int No)
    {
        original = No;

        while (No != 0)
        {
            iRet = No % 10;
            revNo = (revNo * 10) + iRet;
            No = No / 10;  
        }

        if (revNo == original)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

};

int main()
{
    int ivalue = 0;
    bool bflag = 0;

    cout<<"Enter the Number:-";
    cin>>ivalue;

    Tanmay tobj;
    bflag = tobj.reverseNO(ivalue);

    if (bflag == true)
    {
        cout<<"Number is palindrome";
    
    }
    else
    {
        cout<<"Number is not palindrome";  
    }
    
    return 0;
}