class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int beg = 0,end = n-1,mid,result = -1;
        while(beg<=end)
        {
            mid = (beg+end)/2;
            if(arr[mid] == k)
            {
                return mid;
                break;
            }
            else if(arr[mid]<k)
            beg = mid+1;
            else
            end = mid-1;
        }
        return result;
    }
};
