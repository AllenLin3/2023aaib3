class Solution { 
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); //空包彈
        ListNode* now = ans; // 答案放在 now 裡面
        while(list1 != nullptr || list2 != nullptr){ // 任何一邊有資料,就繼續做
            if(list1==nullptr){ // 有一個是空的
                now->next = list2; // 另一個,全部都上
                list2 = nullptr;
            }else if(list2==nullptr){ // 有一個是空的
                now->next = list1; // 另一個,全部都上
                list1 = nullptr;
            }else if(list1->val < list2->val){ // list1 是小的
                now->next = new ListNode(list1->val); // 答案放在 now 的下一筆,放小的
                list1 = list1-> next; // list1 換下一筆
                now = now-> next; // 現在也換下一筆
            }else{ // list2是小的
                now->next = new ListNode(list2->val); // 答案放在 now 的下一筆,放小的
                list2 = list2-> next; // list2 換下一筆
                now = now-> next; // 現在也換下一筆
            }
        }
        return ans->next; // 空包彈的下一筆,才是真的答案
    }
};