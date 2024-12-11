 //week14-2
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans =new ListNode();
        ListNode* now = ans; // 模仿前兩週的寫法
        int carry=0; // 進位的小數字
        while(l1 !=nullptr || l2 !=nullptr){ // 只針對其中一個 list 1
            if(l1==nullptr){ // 如果list1 是空的，下面要移掉l1
                int here =l2->val +carry; // 移掉l1 剩下l2
                now ->next =new ListNode(here%10); // 建新 node
                carry =here/10;
                l2=l2->next;
                now= now->next; 
            }else if(l2==nullptr){ // 如果list2 是空的，下面要移掉l2
                int here =l1->val +carry; // 移掉l2 剩下l1
                now ->next =new ListNode(here%10); // 建新 node
                carry =here/10;
                l1=l1->next; 
                now= now->next;
            }else{
                int here = l1->val + l2->val +carry;
                now ->next =new ListNode(here%10); // 建新 node
                carry =here/10;
                l1=l1->next; // 下一筆
                l2=l2->next; // 下一筆
                now= now->next;
            }
        }
        if(carry==1) now ->next = new ListNode(carry);
        return ans ->next; //等下要 return ans -> next
    }
};