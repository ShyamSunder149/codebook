class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         if(n < 3) return -1;
         else
         {
             sort((a),a+n);
             return a[n-3];
         }
    }

};
