class LinkedListCycle {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr) return false;
        ListNode* slowPointer=head;
        ListNode* fastPointer=head->next;
        while(slowPointer!=fastPointer){
            if(fastPointer==nullptr||fastPointer->next==nullptr)
                return false;
            fastPointer=fastPointer->next->next;
            slowPointer=slowPointer->next;
        }
        return true;
    }
};