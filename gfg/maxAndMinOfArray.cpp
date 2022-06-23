pair<long long, long long> getMinMax(long long a[], int n) {
    long long max = a[0],min = a[0];
    for(int i=0;i<n;++i)
    {
        if(a[i]>max) max = a[i];
        else if(a[i]<min) min = a[i];
    }
    pair<int,int> res;
    res = make_pair(min,max);
    return res;
}
