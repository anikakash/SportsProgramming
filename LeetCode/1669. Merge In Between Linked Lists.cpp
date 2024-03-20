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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* tmp = list1;
        ListNode* tmpA = nullptr;
        ListNode* tmpB = nullptr;

        int sz = 0;
        while(tmp != NULL){
            if(sz == a-1){
                tmpA = tmp;
            }else if(sz == b){
                tmpB = tmp->next;
            }
            tmp = tmp -> next;
            sz++;
        }
        tmpA->next = list2;
        ListNode* tailList2 = getTail(list2);
        tailList2->next = tmpB;

        // cout << tmpA->val << endl;
        return list1;
    }
    ListNode* getTail(ListNode* node) {
        while (node->next != nullptr) {
            node = node->next;
        }
        return node;
    }
};