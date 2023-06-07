class Solution{
    int hammingweight(uint32_t int n){
        int count=0;
        while(n!=0){
            count=count+(n%2);
            n>>=1;
        }
        return count;
    }
}