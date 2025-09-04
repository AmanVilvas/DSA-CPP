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
    ListNode* reverseLL(ListNode* head){

        ListNode* tempHead = head;
        ListNode* prev = nullptr;
        ListNode* fwd = head;

        while(tempHead){

            fwd = tempHead->next;
            tempHead->next = prev;
            prev = tempHead;
            tempHead = fwd;

        }
    
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if (fast != nullptr) {  // odd-length list
            slow = slow->next;
        }
        ListNode* revLL = reverseLL(slow);

        ListNode* first = head;
        ListNode* sec = revLL;

        while(sec){
            if(first->val != sec->val){
                return false;
            }
            first = first->next;
            sec = sec->next;
        }
        return true;
    }
};