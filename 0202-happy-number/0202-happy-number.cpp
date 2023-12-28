class Solution {
public:
    int nexnum(int n){
        int newnumber=0;
        while(n!=0){
            int num = n%10;
            newnumber += num*num;
            n = n/10;
        }
        return newnumber;
    }
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n = nexnum(n);
        }
        return n==1;
    }
};