//
// Created by Sivasubramani on 14/08/22.
//
//206. Reverse Linked

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
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL;
        ListNode*  nxtNode;
        while(head){
            nxtNode = head->next;
            head->next = cur;
            cur = head;
            head = nxtNode;
        }
        return cur;
    }
};