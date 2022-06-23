class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    vector<int>a;
	    for(int i=0;i<n;++i)
	    {
	        a.push_back(arr[i]);
	    }
	    sort(a.begin(),a.end());
	    a.erase(unique(a.begin(),a.end()),a.end());
	    int m = a.size();
	    if(m == 1) return -1;
	    else return a[m-2];
	}
};
