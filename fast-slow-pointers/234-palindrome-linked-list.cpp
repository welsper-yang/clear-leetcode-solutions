class PalindromeLinkedList {
public:

    ListNode* reverse(ListNode* head){
        ListNode* prev=head;
        ListNode* curr=head->next;
        prev->next=nullptr;
        while(curr!=nullptr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }


    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr) return true;
        ListNode* mid=head;
        ListNode* fast=head;
        while(fast!=nullptr){
            mid=mid->next;
            if(fast->next==nullptr)
                break;
            else
                fast=fast->next->next;
        }
        ListNode* tail=reverse(mid);
        while(tail!=nullptr){
            if(head->val!=tail->val)
                return false;
            tail=tail->next;
            head=head->next;
        }
        return true;
    }
};