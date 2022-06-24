int strstr(string s, string x)
{
     //Your code here
     if (s.length() == 1 && x.length() == 1)
     {
         if(s[0] == x[0]) return 0;
         else return -1;
     }
     int m = s.find(x);
     if(m) return m;
     else return -1;
}
