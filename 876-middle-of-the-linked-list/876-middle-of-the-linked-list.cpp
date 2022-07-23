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
        int count = 0;
        ListNode* cur = head, *prev = head;
        while(cur != NULL){
            count++;
            cur = cur->next;
        }
        count = count /2;
        while(prev !=NULL && count){
            count--;
            prev = prev->next;
        }
        return prev;
        return head;
    }
};