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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL || k==0) return head;
        ListNode* cur = head;
        int count = 1;
        while(cur->next != NULL){
            cur = cur->next;
            count++;
        }
        k = k % count;
        k = count - k;
        if(!k)return head;
        cur->next = head;
        while(k--) cur = cur->next;
        head = cur->next;
        cur->next = NULL;
        return head;
    }
};