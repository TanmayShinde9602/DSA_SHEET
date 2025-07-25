#include<iostream>
using namespace std;

void Insertion(int *Brr, int iSize)
{
    int temp = 0;
    int iCNT = 0;
    for (int i = 0; i < iSize; i++)
    {
        iCNT = i;

        while (iCNT > 0 && Brr[iCNT] < Brr[iCNT-1])        //ithe iCNT > 0 chi condition pn dili karan icnt - 1 kelya vr te 0 chya mage mhanjech -1 ,-2 la nako jav  
        {
            temp = Brr[iCNT-1];
            Brr[iCNT-1] = Brr[iCNT];
            Brr[iCNT] = temp;

            iCNT--;
        } 
    }

    cout<<"\n";

    cout<<"Elements in the array are :-\n";
    for (int i = 0; i < iSize; i++)
    {
        cout<<Brr[i]<<"\t";
    }    
}

int main()
{
    int ilength = 0;

    cout<<"Enter the No. of elements in the array :-\n";
    cin>>ilength;

    int *Arr = new int[ilength];

    cout<<"Enter the Elements in the array :-\n";
    for (int i = 0; i < ilength; i++)
    {
        cin>>Arr[i];
    }
    cout<<"Elements in the array are :-\n";
    for (int i = 0; i < ilength; i++)
    {
        cout<<Arr[i]<<"\t";
    }

    Insertion(Arr, ilength);

    return 0;
}