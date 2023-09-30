class Solution {
public:
    int max(vector<int>& salary){
        int max=salary[0];
        for(int i=0;i<salary.size();i++){
            if(salary[i]>max){
                max=salary[i];
            }
        }
        return max;
    }
    int min(vector<int>& salary){
        int min=salary[0];
        for(int i=0;i<salary.size();i++){
            if(salary[i]<min){
                min=salary[i];
            }
        }
        return min;
    }
    

    double average(vector<int>& salary) {

        int maxi=max(salary);
        int mini=min(salary);

        double sum=0;

        for(int i=0;i<salary.size();i++){
            sum += salary[i];   
                 }
    
        sum=sum-maxi-mini;
        double avg=sum/(salary.size()-2);
        return avg;
    }
};
