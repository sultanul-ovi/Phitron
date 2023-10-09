// Java Implementation
// Array Search

class array_search
{

    // Search Function
    static int findElement(int arr[], int n, int key)
    {
        for (int i = 0; i < n; i++)
            if (arr[i] == key)
                return i;
        return -1;
    }

    public static void main(String args[])
    {
        int arr[] = {1,2,3,4,5,6,7,8,9,10};
        int n = arr.length;

        int key = 8;
        int position = findElement(arr, n, key);

        if (position == - 1)
            System.out.println("Element not found");
        else
            System.out.println("Element Found at Position: " + (position + 1));
    }
}