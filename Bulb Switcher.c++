class Solution {
public:
    int bulbSwitch(int n) {
        int j=0,i=0; 
        while(i++<=n){
            if(pow(i,2)<=n)
                j++;
            else
                break;
        }
        return j;
    }
};
