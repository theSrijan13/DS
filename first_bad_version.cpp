class Soluition{
    public:
    int firstbadversion{
        int start = 0;
        int end = n;
        int result = 0;
        while(start<=end){
            int mid = (start + end)/2;
            if(isbadversion()==1){
                result = mid;
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        return result;
    }
}