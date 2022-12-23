class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        return binary(A, 0, A.size());
    }
private:
    int binary(vector<int>v, int low, int high)
    {
        if(low + 1 == high)
            return low;
        int mid = low + (high - low)/2;
        if(v[mid] > v[mid-1] && v[mid] > v[mid+1])
            return mid;
        else if(v[mid - 1] > v[mid])
            return binary(v, low, mid);
        else
            return binary(v, mid + 1, high);
    }
};
