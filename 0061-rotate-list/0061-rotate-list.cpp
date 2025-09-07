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
        if (!head || !head->next || k == 0) return head;
        ListNode* temp = head;
        int n = 1;
        while(temp->next){
            temp = temp->next;
            n++;
        }
        if(k>n){
            k %= n;
        }
        int kthNode = n - k;
        if(kthNode == 0){
            return head;
        }
        temp->next = head;
        ListNode* temp1 = head;
        for(int i = 1; i<kthNode; i++){
            temp1 = temp1->next;
        }
        head = temp1->next;
        temp1->next = NULL;
        return head;
    }
};