//2. Add Two Numbers
class Solution {
public:

ListNode* addTwoNumbers(ListNode* h1, ListNode* h2) {
      ListNode* ans=new ListNode(0);
        ListNode* curr=ans;
       int carry=0;
       while(h1!=nullptr||h2!=nullptr)
       {
        int x=(h1!=nullptr)?h1->val:0;
        int y=(h2!=nullptr)?h2->val:0;
        int sum=x+y+carry;
        carry=sum/10;
        curr->next=new ListNode(sum%10);
        curr=curr->next;
        if(h1)h1=h1->next;
        if(h2)h2=h2->next;
       }
      if(carry>0)
     curr->next=new ListNode(carry); 
     return ans->next;
}
};
