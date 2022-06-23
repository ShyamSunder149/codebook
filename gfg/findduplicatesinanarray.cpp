class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        sort((arr),arr+n);
        vector<int>a;
        for(int i=0;i<n-1;++i)
        {
            if(arr[i] == arr[i+1]) a.push_back(arr[i]);
        }
        if(a.empty())
        {
            a.push_back(-1);
        }
        a.erase(unique(a.begin(),a.end()),a.end());
        return a;
    }
};
