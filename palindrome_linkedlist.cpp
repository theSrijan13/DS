class Solution{
    private:
    bool isPalindrome(vector<int> ans){
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            if(arr[s] != arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    public:
    bool isPlaindrome(ListNode* head){
        vector<int> arr;
        ListNode* head;
        while(temp != NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return checkPalindrome(arr);
    }
};