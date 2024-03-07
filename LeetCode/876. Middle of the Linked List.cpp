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
    ListNode* middleNode(ListNode* head) {
        int sz=1;
        ListNode *fast = head;
        while(fast != NULL && fast->next != NULL){
            sz++;
            fast = fast->next;
        }
        cout<<sz<<endl;
        ListNode* newHead = head;
        for(int i=0; i<sz/2; i++){
            newHead = newHead->next;
        }
        // ListNode * deleteOne = newHead->next;
        // newHead->next = newHead->next->next;
        // delete(deleteOne);
        // return head;
        return newHead;
    }
};