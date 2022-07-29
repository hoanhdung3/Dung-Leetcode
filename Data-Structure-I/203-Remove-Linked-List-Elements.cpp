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
 
// solution 1:
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return nullptr;
        head->next = removeElements(head->next, val);
        return (head->val == val) ? head->next : head;
    }
};

// solution 2:
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val)
            head = head->next;
        ListNode *prev = nullptr, *curr = head;
        while(curr!=nullptr){
            if(curr->val == val)
                prev->next = curr->next;
            else
                prev = curr;
            curr = curr->next;
        }
        return head;
    }
};

// solution 3:
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val)
            head = head->next;
        ListNode* curr = head;
        while(curr!=nullptr && curr->next!=nullptr){
            if(curr->next->val==val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return head;
    }
};

