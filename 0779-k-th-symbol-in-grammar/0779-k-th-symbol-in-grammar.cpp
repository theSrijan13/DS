class Solution {
public:
    int recursion(int n,int k){
        // base case
        if(n==1){
            return 0;
        }
        int totalElements = pow(2,(n-1));
        int halfElements = totalElements/2;
        
        // if traget is present in right side
        if(k>halfElements){
            return 1- kthGrammar(n,k-halfElements);
            
        }
        return recursion(n-1,k);
    }
    int kthGrammar(int n, int k) {
        return recursion(n,k);
    }
};