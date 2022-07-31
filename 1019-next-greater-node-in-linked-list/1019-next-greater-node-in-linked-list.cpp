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
    vector<int> nextLargerNodes(ListNode* head) {
     vector<int>v;
        while(head){
            ListNode* cur = head;
            if(cur->next){
               bool flag = false;
               while(cur){
                   if(cur->val > head->val) {
                       v.push_back(cur->val);
                       flag = true;
                       break;
                   }
                   cur = cur->next;
               }
                if(!flag)v.push_back(0);
            }
            else v.push_back(0);
            head = head->next;
        }
        return v;
    }
};