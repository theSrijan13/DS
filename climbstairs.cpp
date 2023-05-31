class Solution{
    public:
    void climbstairs(int n){
        if(n==0){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int a=2;b=1;c=0;
        for(int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}