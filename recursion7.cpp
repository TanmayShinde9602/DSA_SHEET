#include<iostream>
using namespace std;

class Tanmay
{
    public :
    int iSize = 0;
    int *Arr = NULL;

    Tanmay(int ivalue)
    {
        iSize = ivalue;
        Arr = new int[iSize];
    }

    void accept()
    {
        for (int i = 0; i < iSize ; i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        for (int i = 0; i < iSize ; i++)
        {
            cout<<Arr[i]<<"\t";
        }
    }

    void Reverse()
    {
        int iStart = 0;
        int iEnd = iSize - 1;
        int temp = 0;

        while (iStart < iEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;

        }
        
    }

};

int main()
{
    int ilength = 0;
    int No = 0;

    cout<<"Enter the No of elements in the array :-\n";
    cin>>ilength;

    Tanmay tobj(ilength);
    tobj.accept();
    tobj.Display();
    tobj.Reverse();
    tobj.Display();
}