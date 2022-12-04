#include <cmath>
class Solution {
public:
    int maxArea(vector<int>& height) {
            int left=0;
            int maxArea=-1;
          int right=height.size()-1;
            while(right!=left){
                   auto localmin = min(height[right],height[left] );
               auto  val= localmin  *(right-left) ;
            
                if (localmin==height[right] ){
                    right--;
                }else {
                    left++;
                }
            maxArea=max(maxArea,val);
         }
return maxArea;
    }
};
