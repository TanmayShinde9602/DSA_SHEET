import java.util.*;

class Array6
{
    public void AddArray(int Brr1[], int Brr2[], int n1, int n2)
    {
        Set<Integer> st = new HashSet<Integer>();

        for(int i = 0; i < n1; i++)
        {
            st.add(Brr1[i]);
        }

        for(int j = 0; j < n2; j++)
        {
            st.add(Brr2[j]);
        }

        Vector<Integer> temp = new Vector<Integer>();

        for(Integer it : st)
        {
            temp.add(it);
        }

        System.out.println("After adding two arrays the final array is:-");

        for(int i = 0; i<temp.size(); i++)
        {
            System.out.println(temp.get(i));
        }
    }
    public static void main(String Args[])
    {
        int ilength1 = 0;
        int ilength2 = 0;

        Scanner sobj  = new Scanner(System.in);

        System.out.println("Enter the no. of elements in first array:-");
        ilength1 = sobj.nextInt();

        int Arr1[] = new int[ilength1];

        System.out.println("Enter the elements in first array :-");
        for(int i = 0; i < ilength1; i++)
        {
            Arr1[i]=sobj.nextInt();
        }

        System.out.println("Enter the no. of elements in second array:-");
        ilength2 = sobj.nextInt();

        int Arr2[] = new int[ilength2];

        System.out.println("Enter the elements in second array :-");
        for(int i = 0; i < ilength2; i++)
        {
            Arr2[i]=sobj.nextInt();
        }

        Array6 aobj = new Array6();
        aobj.AddArray(Arr1, Arr2, ilength1, ilength2);
    }
}