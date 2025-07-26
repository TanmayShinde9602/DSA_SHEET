import java.util.*;

class Array3
{
    public boolean sorted(int Brr[] , int n)
    {
        boolean bresult = false;

        for(int i = 0; i < n-1; i++)
        {
            if (Brr[i]< Brr[i+1])
            {
                bresult = true;
            }
            else
            {
                bresult = false;
                break;
            }
        }

        return bresult;
    }

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int ilength = 0;
        boolean bRet = false;

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

        Array3 aobj = new Array3();

        bRet = aobj.sorted(Arr, ilength);
        if (bRet == true)
        {
            System.out.println("Array is sorted");
        }
        else if (bRet == false)
        {
            System.out.println("Array is not sorted");    
        }
    }
}