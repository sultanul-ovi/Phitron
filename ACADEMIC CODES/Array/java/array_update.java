// Java Implementation
// Array Update

class array_update
{

    static int findElement(int arr[], int n, int key)
    {
        int i;
        for (i = 0; i < n; i++)
            if (arr[i] == key)
                return i;
        return -1;
    }

    // update Funtion
    static void update(int arr[], int n, int key, int val)
    {
        int pos = findElement(arr, n, key);
        if (pos == -1)
        {
            System.out.println("Element not found");
        }
        else{
            arr[key-1] = val;
        }
        

    }

    public static void main(String args[])
    {
        int i;
        int arr[] = {1,2,3,4,5};

        int n = arr.length;
        int key = 3;
        int val = 6;
        System.out.println("Initial Array: ");
        for (i=0; i<n; i++)
            System.out.print(arr[i] + " ");

        update(arr, n, key,val);

        System.out.println("\n\nArray after update: ");
        for (i=0; i<n; i++)
            System.out.print(arr[i]+" ");
    }
}