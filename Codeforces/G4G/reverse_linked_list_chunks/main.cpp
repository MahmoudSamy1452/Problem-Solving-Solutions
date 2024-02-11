#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

};

struct node *reverse_all (struct node *head)
{
    // Complete this method
    struct node * prev = head;
    head = head->next;
    prev->next = nullptr;
    while(head){
        node * t;
        if(head->next)
            t = head->next;
        else t = nullptr;
        head->next = prev;
        prev = head;
        head = t;
    }
    return prev;
}

struct node *reverse (struct node *head, int k) {
    node* tail = head;
    int n = 1;
    while(tail && tail->next && n < k){
        tail = tail->next;
        n++;
    }
    node* next = tail->next;
    tail->next = nullptr;
    node* reversed1 = reverse_all(head);
    node* ans = reversed1;
    node* reversed2;
    while(next) {
        head = next;
        tail = head;
        n = 1;
        while (tail && tail->next && n < k) {
            tail = tail->next;
            n++;
        }
        next = tail->next;
        tail->next = nullptr;
        reversed2 = reverse_all(head);
        while (reversed1->next)
            reversed1 = reversed1->next;
        reversed1->next = reversed2;
        reversed1 = reversed2;
    }
    return ans;
}

int main(){
    int n, x;
    cin >> n;
    cin >> x;
    node* head = new node(x);
    node* it = head;
    n--;
    while(n--){
        cin >> x;
        it->next = new node(x);
        it = it->next;
    }
    cin >> n;
    node* ans = reverse(head, n);
    head = ans;
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
}
