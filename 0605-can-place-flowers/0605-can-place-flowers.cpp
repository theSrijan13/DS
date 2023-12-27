class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int num = flowerbed.size();
        for(int i=0;i<num;i++){
            if(flowerbed[i] == 0){
                bool emptyleft = (i==0) || (flowerbed[i-1]==0);
                bool emptyright = (i==num-1) || (flowerbed[i+1] == 0);
                
                if(emptyleft && emptyright){
                    flowerbed[i]=1;
                    count++;
                    if(count>=n){
                        return true;
                    }
                }
            }
        }
        return count>=n;
    }
};