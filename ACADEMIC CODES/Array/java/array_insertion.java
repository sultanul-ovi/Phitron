// Java Implementation
// Array Insertion

class Main
{

    static int insert(int arr[], int n, int key, int capacity)
    {
        if (n >= capacity)
            return n;
        arr[n] = key;
        return (n + 1);
    }


    public static void main (String[] args)
    {  
        int[] arr = new int[20];
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        arr[4] = 5;

        int capacity = 10;
        int n = 5;
        int i, key = 6;

        System.out.print("Original array elements: ");
        for (i = 0; i < n; i++)
            System.out.print(arr[i]+" ");

        
        n = insert(arr, n, key, capacity);

        System.out.print("\nArray elements after insertion: ");
        for (i = 0; i < n; i++)
            System.out.print(arr[i]+" ");
    }
}