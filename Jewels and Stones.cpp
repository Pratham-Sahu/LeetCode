class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int jewel = 0; jewel<jewels.length(); jewel++){
            for(int stone = 0; stone < stones.length(); stone++){
                if(jewels[jewel] == stones[stone]){
                    count++;
                }
            }
        }
    return count;
    }
};
