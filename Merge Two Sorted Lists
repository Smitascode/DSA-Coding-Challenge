class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        if(list1->val>=list2->val) list2->next = mergeTwoLists(list1, list2-> next);
        else{
            list1->next = mergeTwoLists(list1->next, list2);
            list2 = list1;
        }return list2;
    }
};
