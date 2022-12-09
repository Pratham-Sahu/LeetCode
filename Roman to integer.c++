class Solution {
public:
    int romanToInt(string s) {
        int k=0,j=0,n=s.length();
        int a[n];
        for(int i=0;i<n;i++)
        {
            switch(s[i]){
            case 'I': a[i]=1; break;
            case 'V': a[i]=5; break;
            case 'X': a[i]=10; break;
            case 'L': a[i]=50; break;
            case 'C': a[i]=100; break;
            case 'D': a[i]=500; break;
            case 'M': a[i]=1000; break;
            default: break;
            }
        }
        int i=0;
        for(;i<n-1;i++)
        {
            if(a[i]<a[i+1])
                j-=a[i];
            else
                j+=a[i];
        }
        j+=a[n-1];
        return j;
    }
};
