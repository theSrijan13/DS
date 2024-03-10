class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        vector<char> v;
        for(int i=0;i<s.length();i++){
            if(s[i]== '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }s="";
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }s="";
        for(int i=v.size()-1;i>=0;i--){
            s+=v[i];
        }return s;
    }
};