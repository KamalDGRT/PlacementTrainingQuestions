# O 01 - Printing a Linked List

-   Given a pointer to the head node of a linked list,
    print its elements in order, one element per line.
-   If the head pointer is null (indicating the list is empty),
    don’t print anything.

### Input Format

-   The `void Print(Node* head)` method takes the head node of
    a linked list as a parameter.

-   Each struct Node has a val field (which stores integer data)
    and a next field (which points to the next element in the list).

-   #### Note:
    -   Do not read any input from stdin/console.
    -   Each test case calls the Print method individually
        and passes it the head of a list.
    -   Do not modify any part of the code except the body.

### Output Format

-   Print the integer data for each element of the linked list to
    stdout/console (e.g.: using `printf`, `cout`, etc.).
-   There should be one element per line.

### Code Stubs

#### C

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

LinkedListNode* _insert_node_into_singlylinkedlist(
    LinkedListNode *head,
    LinkedListNode *tail, int val
    ) {
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

// BODY STARTS HERE


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
void print(LinkedListNode* head) {

}

//BODY ENDS HERE

int main()
{
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


    print(head);

    return 0;
}
```

#### C++

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
```
