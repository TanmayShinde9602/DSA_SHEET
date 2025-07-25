#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number of elements in array: ";
    cin>>n;
    
    int Arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>Arr[i];
    }

    int Hash[11] = {0};                  //hash sathi kiti elements ahet te mahit asal pahije ata hya eg madhe aapn 0 te 10 che range ghetalit.

    for (int i = 0; i < n; i++)
    {
        Hash[Arr[i]] ++;
    }

    int q = 0;
    cout<<"Enter how elements to find :-\n";
    cin>>q;

    while (q--)
    {
        int ivalue;
        cout << "Enter number: \n";

        cin>>ivalue;

        cout<<"Total frequency in Array :-\n"<<Hash[ivalue]<<"\n";
    }
    
    return 0;
}


//ithe suppose ek array ghetalay tyat 0 to 10 ashe no. ahet ani ekata number more than 1 pn asu shakato 
// phakt to no. ha 0 te 10 chya range madhala hava 
//ata without hashing problem kay hota ki samaja ek array kelay 0 te 10 chya condition nusar tyat kashehi no. aastil.
//ata aplyala mahit ahe ki no ha 0 te 10 madhale ahe mg jr aaplyala ekhadya no. kiti vela aalay he kadayach asel tr 
//aapan ky krnar for loop use krun purn array iterate kranar tevha aaplayala kalanar ki 0 element kiti vela alay 
//ata aasach jar 1,2,3,4,5,6,7,8,9,10 he sagale kiti vela aalet he jr vrchya step nusar check kel tr time colpplexity kiti vadhel 

//Asha veles HASHING cha use hota tyat aapan ek HASH array ghenar aani tyachi size 11 denar karan array madhe 0 te 10 asech elements ahet
//mg jo main aaray ahe na tyala iterate kratanach pratyek iteration la check krnar konata element ahe jr 1st element 7 asek tr HASH array madhe 8th posion la 
//increment krnar 