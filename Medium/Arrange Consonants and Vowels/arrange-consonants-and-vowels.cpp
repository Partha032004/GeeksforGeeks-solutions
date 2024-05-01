//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head) {
    if (head == NULL)
        return;
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void append(struct Node **headRef, char data) {
    struct Node *new_node = new Node(data);
    struct Node *last = *headRef;

    if (*headRef == NULL) {
        *headRef = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution
{
    public:

    struct Node* arrangeCV(Node *head)
    {
       if(head==NULL || head->next==NULL)
       return head;
       
       Node *temp=head;
       
       Node *vDummy=new Node(-1);
       Node *cDummy=new Node(-1);
       
       Node *vcur=vDummy;
       Node *ccur=cDummy;
       
       while(temp!=NULL){
           if(temp->data=='a' || temp->data=='e' || temp->data=='i' || temp->data=='o' || temp->data=='u')
           {
               vcur->next=temp;
               vcur=vcur->next;
           }
           else{
               ccur->next=temp;
               ccur=ccur->next;
           }
           
           temp=temp->next;
       }
       
       vcur->next=cDummy->next;
       ccur->next=NULL;
       
       return vDummy->next;
    }
};


//{ Driver Code Starts.

// task is to complete this function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        char tmp;
        struct Node *head = NULL;
        cin >> n;
        while (n--) {
            cin >> tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
    return 0;
}

// } Driver Code Ends