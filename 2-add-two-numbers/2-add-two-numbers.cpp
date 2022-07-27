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
    string s1 = "";
    string s2 = "";
    void solve1(ListNode* l1){
        if(l1 != NULL){
            solve1(l1->next);
            s1 += to_string(l1->val);
        }
    }
    void solve2(ListNode* l2){
        if(l2 != NULL){
            solve2(l2->next);
            s2 += to_string(l2->val);
        }
    }
    string findSum(string str1, string str2){
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i=0; i<n1; i++){
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
    return str;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        solve1(l1);
        solve2(l2);
        string s = findSum(s1, s2);
        ListNode* cur = NULL, *temp = cur;
        for(int i = s.size() - 1; i >= 0; i--){
            ListNode* node = new ListNode(s[i] - '0');
            if(cur == NULL){
                cur =  node;
                temp = cur;
            }
            else {
                temp->next = node;
                temp = temp->next;
            }
        }
        return cur;
    }
};