class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.insert(digits.begin(),0);
        int n=digits.size();
        digits[n-1]+=1;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]>9)
            {
                digits[i]=0;
                digits[i-1]+=1;
            }
            else
                break;
        }
        if(digits.front()==0)
            digits.erase(digits.begin());
        return digits;
    }
};
