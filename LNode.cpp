#include<iostream>
using namespace std;

struct LNode{
    int data;
    LNode* next;
};

bool InitLinkList(LNode* &L){
    L = new LNode;
    if(L == NULL)
        return false;
    L->next = NULL;
    return true;
}

LNode* InsertLinkList(LNode* LinkList, int pos, int val) {
    LNode* new_head,*p = new_head;
    p->next = LinkList;
    LNode* node;
    node->data = val,node->next=NULL;
    for (int i = 0; i < pos; i++) p = p->next;
    node->next = p->next;
    p->next = node;
    return new_head->next;
}

bool empty(LNode* L){
    return (L->next == NULL);
}

int main(){
    LNode* L;
    InitLinkList(L);
    for(int i=0;i<5;i++)    
        InsertLinkList(L,i+1,i+1);
    LNode* p = L;
    while(p->next){
        p = p->next;
    }
    cout<<p->data<<" ";
    delete L;
    return 0;
}