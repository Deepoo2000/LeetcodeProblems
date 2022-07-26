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
    int index = 0;
    void solve(ListNode* head, int n){
        if(head){
            solve(head->next, n);
            if(index == 0){
                head->next = head->next->next;
            }
            index--;
        }
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        int count = 0;
        while(cur != NULL)cur = cur->next, count++;
        if(count == 1) return NULL;
        if(count == n){
            head = head->next;
        }
        index = n;
        solve(head, n);
        return head;
    }
};