# 02x02 - Stacks Using a LinkedList

Stack is a linear data structure which follows a particular
order in which the operations are performed.

We will be learning about LIFO (Last In First Out) Stacks.

Your task is to implement the stack data structure using Linked List.

Your implementation must include the following members/functions :

```c
struct stackNode{
    int val;
    struct stackNode* next;
}; //struct for nodes of the stack

typedef struct stackNode stackNode;

stackNode* stackHead; // Head Pointer for stack LinkedList
void push(int x) // Insert an element onto the top of the stack
int peek() // Returns the topmost element on the stack
void pop() // Removes an element from the top of the stack
int empty() // Returns 1 if the stack is empty and 0 otherwise
```

##### _NOTE :_

-   All the functions must have an O(1) running complexity.
-   You are not responsible for taking any input or output.
-   You are not supposed to modify any part of the code except the BODY.
-   Leave the HEAD and TAIL of the code untouched.
-   Name of the functions/variables must remain unchanged.

### INPUT

Not Needed

### OUTPUT

Not Needed

### Sample Input 0

```
14
1 1
1 2
1 3
4
3
2
4
3
2
4
3
2
4
3
```

### Sample Output 0

```
3
3 2 1
2
2 1
1
1
Invalid
Invalid
```

### Code Stub

```c
//HEAD

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

//BODY

struct stackNode{
    int val;
    struct stackNode* next;
};
typedef struct stackNode stackNode;
stackNode* stackHead; - Head Pointer for stack LinkedList
void push(int x) - Insert an element onto the top of the stack
int peek() - Returns the topmost element on the stack
void pop() - Removes an element from the top of the stack
int empty() - Returns 1 if the stack is empty and 0 otherwise

//TAIL

int main()
{
    int n;
    stackHead = NULL;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t, x;
        scanf("%d", &t);
        if (t == 1) {
            scanf("%d", &x);
            push(x);
        }
        else if (t == 2) {
            if (empty()) {
                printf("Invalid\n");
            }
            else {
                pop();
            }
        }
        else if (t == 3){
            if (empty()) {
                printf("Invalid\n");
                continue;
            }
            stackNode* j = stackHead;
            while (j) {
                printf("%d ", j->val);
                j = j->next;
            }
            printf("\n");
        }
        else {
            if (empty()) {
                printf("Invalid\n");
                continue;
            }
            printf("%d\n", peek());
        }
    }
    return 0;
}
```
