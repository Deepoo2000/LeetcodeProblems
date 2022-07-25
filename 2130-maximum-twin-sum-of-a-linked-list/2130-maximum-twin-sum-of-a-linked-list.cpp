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
    int pairSum(ListNode* head) {
        int mx = 0;
        vector<int>v;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        int index = v.size() - 1;
        for(int i = 0; i < v.size() / 2; i++){
            mx = max(v[i] + v[index--], mx);
        }
        return mx;
    }
};