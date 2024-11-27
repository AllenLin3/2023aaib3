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
class Solution { // *代表指標,老師把它叫槍,用來瞄準的「準星」
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* = list1; // 可以轉接(舊的)list1過去
        //ListNode* ans = new ListNode(99); // 可以開新的(放99)
        ListNode* ans = new ListNode(99, new ListNode(90));
        //開新的 Node 裡面放99, 後面轉接「新的Node裡有90」
        return ans;
    }
};