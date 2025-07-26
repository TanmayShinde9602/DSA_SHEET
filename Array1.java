import java.util.*;

class Array1
{
    public static int findlargest(ArrayList<Integer> brr, int n)
    {
        int ilargest = brr.get(0);
        
        for(int i = 1; i < n; i++)
        {
            if (brr.get(i) > ilargest)
            {
                ilargest = brr.get(i);
            }
        }
        return ilargest; 
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ilength = 0;
        int iResult = 0;

        System.out.println("Enter the number of elements in the array :-");
        ilength = sobj.nextInt();

        ArrayList<Integer> Arr = new ArrayList<>();

        System.out.println("Enter the elements in the array :-");
        for(int i = 0; i< ilength; i++)
        {
            Arr.add(i, sobj.nextInt());
        }

        System.out.println("Elements in the array are :-");
        for(int i = 0; i < ilength; i++)
        {
            System.out.println(Arr.get(i));
        }

        iResult = findlargest(Arr , ilength);

        System.out.println("Largest element in the array is :-\n"+iResult);
    }
}