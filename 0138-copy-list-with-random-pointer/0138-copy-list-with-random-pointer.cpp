/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        // add copyNode in between of nodes
        Node* copyNode;
        while (temp) {
            copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }
        temp = head;
        while (temp) {
            copyNode = temp->next;
            if (temp->random) {
                copyNode->random = temp->random->next;
            } else {
                copyNode->random = NULL;
            }
            temp = temp->next->next;
        }
        Node* dummy = new Node(-1);
        Node* res = dummy;
        temp = head;
        while (temp) {
            res->next = temp->next;
            temp->next = temp->next->next;
            // res->next->next = NULL;
            res = res->next;
            temp = temp->next;
        }
        return dummy->next;
    }
};