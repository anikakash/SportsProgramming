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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;
        int sz = 0;
        ListNode *tmp = head;
        while(tmp != NULL){
            sz++;
            tmp = tmp->next;
        }

        if(sz == n){
            ListNode * newhead = head->next;
            delete(head);
            return newhead;
        }

        int idx = sz-n;
        tmp = head;
        while(tmp != NULL){
            idx--;
            if(idx == 0) break;
            tmp = tmp->next;
        }

        ListNode * deleteOne = tmp->next;
        tmp->next = tmp->next->next;
        delete(deleteOne);
        return head;
    }
};



// Optimized
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;
        ListNode *fast = head;
        ListNode *slow = head;
        
        for(int i=0; i<n; i++) fast = fast->next;

        if(fast == NULL) return head->next;

       while(fast->next != NULL){
           fast = fast->next;
           slow = slow->next;
       }

        ListNode * deleteOne = slow->next;
        slow->next = slow->next->next;
        delete(deleteOne);
        return head;
    }
};