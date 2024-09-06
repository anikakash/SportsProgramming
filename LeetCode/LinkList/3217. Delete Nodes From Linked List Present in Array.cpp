/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st(begin(nums), end(nums));
        
        while(head != NULL && st.find(head->val) != st.end()){
            ListNode * tmp = head;
            head = head->next;
            delete(tmp); // deleteing hanging node. 
        }
        
        ListNode * cur = head;
        
        while(cur!=NULL && cur->next != NULL){
            if(st.find(cur->next->val) != st.end()){
                ListNode * tmp = cur->next;
                cur->next = cur->next->next;
                delete(tmp);
            }
            else{
                cur = cur->next;
            }
        }
        return head;
    }
};