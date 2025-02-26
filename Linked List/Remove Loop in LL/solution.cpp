#include <bits/stdc++.h>
using namespace std;

/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(NULL){}
};
*/

class solution {
public:
    Node* removeLoop(Node* head) {
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head->next;
                while(fast->next!=slow){
                    slow=slow->next;
                    fast=fast->next;
                }
                fast->next=nullptr;
            }
        }
        return head;
        
    }
};