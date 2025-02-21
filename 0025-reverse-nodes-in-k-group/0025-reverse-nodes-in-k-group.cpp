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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> vec;
        ListNode* temp = head;

        while(temp != nullptr ){
            vec.push_back(temp->val);
            temp=temp->next;
        }

        int n=vec.size();
        for(int i=0; i+k<=n; i+=k){
            reverse(vec.begin()+i, vec.begin()+i+k);
        }

        ListNode* mover = head;
        int i=0;
        while(mover!=nullptr){
            mover->val = vec[i++];
            mover=mover->next;
        }

        return head;

    }
};