class Solution {
    public:
    void addBinary(string a,string b){
        string sum="";
        int temp=0;
        int size_a = a.size()-1;
        int size(b) = b.size()-1;
        while(size_a >=0 ||size_b >= 0 || temp==1){
            temp+=((size_a >=0)? a[size_a]-'0':0);
            temp+=((size_b >=0)? b[size_b]-'0':0);
            sum = char(temp%2 + '0')+sum;
            temp/=2;
            size_a--;
            size_b--;
        }
    }
}
public: