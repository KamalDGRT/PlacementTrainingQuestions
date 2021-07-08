# N D06 - Harry Potter and the Order of the Phoenix

Harry Potter is in his fifth year now and he is training Dumbdledore's
Army to fight against he who must not be named.

For todays class Harry is teaching people how to cast the spell
"Expecto Patronum".

Everybody has their own patronus animal that relates to their own
personalities.

These cute patronus's leave trails behind them as they walk.

These trails can be represented as a linked list of integers
(This is getting a bit out of hand now).

Harry would like to know how these trails would look like when reversed.

![Phoenix](https://s3.amazonaws.com/hr-assets/0/1499649588-aff4aafb2c-e.jpg)

Formally, Harry would like you to write a function that accepts a pointer
to the head node of a linked list, reverse it and return a pointer to the
head of the new reversed list.

### Code Stub

```c
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}


/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
LinkedListNode* reverseList(LinkedListNode* head) {

}

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    LinkedListNode* res;
    int head_size = 0;

    LinkedListNode* head = NULL;
    LinkedListNode* head_tail = NULL;

    scanf("%d\n", &head_size);
    for(int i = 0; i < head_size; i++) {
        int head_item;
        scanf("%d", &head_item);
        head_tail = _insert_node_into_singlylinkedlist(head, head_tail, head_item);

        if(i == 0) {
            head = head_tail;
        }
    }


    res = reverseList(head);
    while (res != NULL) {
        fprintf(f, "%d ", res->val);

        res = res->next;
    }

    fclose(f);
    return 0;
}
```
