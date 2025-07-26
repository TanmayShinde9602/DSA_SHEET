import java.util.*;

class Array2
{
    public static int secondlargest(int Brr[] , int n)
    {
        int iSlargest = Brr[n-1];

        for(int i = n-2; i >= 0; i--)
        {
            if (iSlargest > Brr[i])
            {
                iSlargest = Brr[i];
                break;
            }
        }
        return iSlargest;
    }

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int ilength = 0;
        int iRet = 0;

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

        for(int i = 1; i < ilength; i++)
        {
            int iCnt = i;
            while (iCnt > 0 && Arr[iCnt] < Arr[iCnt - 1])
            {
                int temp = Arr[iCnt];
                Arr[iCnt] = Arr[iCnt-1];
                Arr[iCnt-1] = temp;

                iCnt--;
            }
        }

        System.out.println("After Sorting the array :-");
        for(int i = 0; i < ilength; i++)
        {
            System.out.println(Arr[i]);
        }

        iRet = secondlargest(Arr, ilength);
        System.out.println("Second largest element is :-\n"+iRet);
    }
}