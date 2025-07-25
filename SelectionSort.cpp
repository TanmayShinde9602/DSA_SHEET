#include<iostream>
using namespace std;

void Selectionsort(int Brr[], int iSize)
{
    int temp = 0;
    int Min = 0;
    int Min1 = 0;

    for (int i = 0; i < iSize - 1; i++)
    {
        Min = Brr[i];
        Min1 = i; 
        
        for (int j = i+1; j < iSize; j++)
        {
            if (Brr[j] < Min)
            {
                Min = Brr[j];
                Min1 = j;
            }   
        } 
        temp = Brr[i];
        Brr[i] = Brr[Min1];
        Brr[Min1] = temp;      
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

    int *Arr = new int[ilength];\

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

    Selectionsort(Arr, ilength);
    return 0;

}