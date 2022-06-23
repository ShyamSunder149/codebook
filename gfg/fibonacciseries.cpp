class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        long long b = 1,c = 1,temp = 0;
        vector<long long>a;
        if(n == 1)
        a.push_back(b);
        else if(n == 2)
        {
        a.push_back(b);
        a.push_back(c);
        }
        else
        {
            a.push_back(b);
        a.push_back(c);
                    for(int i=2;i<n;++i)
        {
            temp = b+c;
            a.push_back(temp);
            b = c;
            c = temp;
        }
        }

        return a;
    }
};
