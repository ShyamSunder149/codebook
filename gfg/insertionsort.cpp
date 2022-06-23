    void insert(int arr[], int n)
    {
        int i,j,key;
        for(i=1;i<n;++i)
        {
            key = arr[i];
            j = i-1;
            while(j>=0 && arr[j] > key)
            {
                arr[j+1] = arr[j];
                --j;
            }
            arr[j+1] = key;
        }
        // Your code here  
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        insert(arr,n);
    }
