class Solution{
    public:
    int smallestEvenMultiple(int n){
        int ans;
        if(!(n%2)){
            return n;
        }
        ans = n*2;
        return ans;
    }


}