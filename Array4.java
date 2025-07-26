import java.util.*;

class Array4
{
    public void Shiftleft(int Brr[] , int n)
    {
        int temp = Brr[0];

        for(int i = 1;  i < n; i++)
        {
            Brr[i-1] = Brr[i];
        }
        Brr[n-1] = temp;

        System.out.println("After left shifting :-");

        for(int j = 0; j < n; j++)
        {
            System.out.println(Brr[j]);
        }
    }

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int ilength = 0;

        System.out.println("Enter the number of elements in the array :-");
        ilength = sobj.nextInt();

        int Arr[] = new int[ilength];

        System.out.println("Enter the elements in the array :-");

        for(int i = 0; i < ilength; i++)
        {
            Arr[i]= sobj.nextInt();
        }

        System.out.println("Elements in the array are :-");
        for(int i = 0; i < ilength; i++)
        {
            System.out.println(Arr[i]);
        }

        Array4 aobj = new Array4();

        aobj.Shiftleft(Arr, ilength);

    }
}