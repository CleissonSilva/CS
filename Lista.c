#include <stdio.h>

typedef struct ListNode
{
    int Value;
    struct ListNode* Next;
} ListNode;

int LinkedListAdd(ListNode* Head, ListNode* New);

int main ()
{
    ListNode Head = {42, NULL};
    ListNode New  = {43, NULL};

    LinkedListAdd(&Head, &New);

    ListNode* Iterator = &Head;
    while(Iterator)
    {
        printf("%d->", Iterator->Value);
        Iterator = Iterator->Next;
    }

    return 0;
}

int LinkedListAdd(ListNode* Head, ListNode* New)
{
    while(Head->Next)
    {
        Head = Head->Next;   
    }
    Head->Next = New;
    
    return 0;
}