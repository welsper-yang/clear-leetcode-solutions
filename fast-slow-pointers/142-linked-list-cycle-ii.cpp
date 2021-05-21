class LinkedListCycleII {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr) return nullptr;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(slow!=fast){
            if(fast==nullptr||fast->next==nullptr) return nullptr;
            slow=slow->next;
            fast=fast->next->next;
        }
        // meet in head, speedup
        if(fast==head) return head;
        fast=head;
        slow=slow->next;
        while(slow!=fast){
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};