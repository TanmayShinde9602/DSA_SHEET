#include<iostream>
using namespace std;

void Bubblesort(int Brr[], int iSize)
{
    int temp = 0;
    int DIDSWAP = 0;

    for(int i = (iSize - 1); i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (Brr[j] > Brr[j+1])
            {
                temp = Brr[j];
                Brr[j] = Brr[j+1];
                Brr[j+1] = temp;

                DIDSWAP = 1;         //he BEST case complexity kalavi mhanun kel jar array sortedch asel 
                                     //tr swapping honarch nahi mhanjech iteration karayachi need ch nahi mg
            } 

            if (DIDSWAP == 0)
            {
                break;
            }
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

    Bubblesort(Arr, ilength);
    return 0;

}