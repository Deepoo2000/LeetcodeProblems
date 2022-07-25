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
    ListNode* front = NULL;
    int ans = 0;
    void solve(ListNode *head){
        if(head){
            solve(head->next);
            ans = max(ans, front->val + head->val);
            front = front->next;
        }
        
    }
    int pairSum(ListNode* head) {
        front = head;
        solve(head);
        return ans;
    }
};