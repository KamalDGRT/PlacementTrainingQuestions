# O M02 - Comparing Two Linked Lists

-   You’re given the pointer to the head nodes of two linked lists.
-   Compare the data in the nodes of the linked lists to check if
    they are equal.
-   The lists are equal only if they have the same number of nodes
    and corresponding nodes contain the same data.
-   Either head pointer given may be null meaning that the corresponding
    list is empty.

### Input Format

-   You have to complete the
    `int CompareLists(LinkedListNode* headA, LinkedListNode* headB)` method
    which takes two arguments - the heads of the two linked lists to compare.
-   You should NOT read any input from stdin/console.

### Output Format

-   Compare the two linked lists and return 1 if the lists are equal.
-   Otherwise, return 0.
-   Do NOT print anything to stdout/console.

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

//BODY STARTS HERE


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
int compare(LinkedListNode* headA, LinkedListNode* headB) {

}


//BODY ENDS HERE

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    int res;
    int headA_size = 0;

    LinkedListNode* headA = NULL;
    LinkedListNode* headA_tail = NULL;

    scanf("%d\n", &headA_size);
    for(int i = 0; i < headA_size; i++) {
        int headA_item;
        scanf("%d", &headA_item);
        headA_tail = _insert_node_into_singlylinkedlist(headA, headA_tail, headA_item);

        if(i == 0) {
            headA = headA_tail;
        }
    }


    int headB_size = 0;

    LinkedListNode* headB = NULL;
    LinkedListNode* headB_tail = NULL;

    scanf("%d\n", &headB_size);
    for(int i = 0; i < headB_size; i++) {
        int headB_item;
        scanf("%d", &headB_item);
        headB_tail = _insert_node_into_singlylinkedlist(headB, headB_tail, headB_item);

        if(i == 0) {
            headB = headB_tail;
        }
    }


    res = compare(headA, headB);
    fprintf(f, "%d\n", res);

    fclose(f);
    return 0;
}

```
