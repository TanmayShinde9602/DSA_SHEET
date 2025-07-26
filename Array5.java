import java.util.*;

class Array5
{
    public void Shiftrightbypos(int Brr[] , int n, int k)
    {
        k = k % n;
        int temp[] = new int[k];

        for(int i = 0; i < k; i++)        // Store the last k elements in temp
        {
            temp[i] = Brr[n-k+i];
        }

        for (int i = n - 1; i >= k; i--)     // Shift elements to the right by k positions
        {
        Brr[i] = Brr[i - k];
        }

        for(int i = 0; i < k; i++)         // Copy temp elements to the beginning
        {
            Brr[i] = temp[i];
        }

        System.out.println("Elements after rotation are :-");

        for(int i = 0; i < n; i++)
        {
            System.out.println(Brr[i]);
        }
    }

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int ilength = 0;
        int iPos = 0;

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

        System.out.println("Enter the position to rotate :-");
        iPos = sobj.nextInt();

        Array5 aobj = new Array5();

        aobj.Shiftrightbypos(Arr, ilength,iPos);

    }
}