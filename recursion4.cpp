#include<iostream>
using namespace std;

class Tanmay
{
    public :
    void Display(int i , int n)
    {
        if (i > n)
        {
            return;
        }
        Display(i+1 , n);
        cout<<i<<"\t";
        
    }
};

int main()
{
    int No = 0;

    cout<<"Enter the length\n";
    cin>>No;

    Tanmay tobj;
    tobj.Display(1, No);
    return 0;
}

//printing numbers N to 1 but here the we calls the function before display the output
//suppose 5 i/p dil mag ha program aadhi 5 vela display function call karnar 
//Ani mg if chi condition run honar ani te 5th function call madhun return krnar mg 5 print zala 
//mg te aadhichya 4th function call madhe yenar return sathi aas karat karat 1 paryant print honar