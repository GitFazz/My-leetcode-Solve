/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start
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

       if(head==nullptr || head->next==nullptr) return head;

       ListNode* node = head->next;
       ListNode* prev = reverseList(node);
       node->next = head;
       
       head->next = nullptr;

       return node;
       
    }
};
// @lc code=end

