# O 07 - ZZ Linked Lists-Deletion at Ending

-   Write a program to create a linked list with the given
    number of elements(follow the normal insertion process
    i.e., insert node at end evry time)
-   If there are no elements given then the head of the
    linked list will be null.
-   After completing the insertion of all you will be given
    a value of `k`.
-   Perform the deletion at ending `k` times.
-   Print the elements in the linked list after successful
    completion of deletion.

##### Note:

-   Intially the linked list will be empty.
-   The k value always will be less than no.of elements in the list.

### Input Format

-   First Line contains number of elements(`n`) to be inserted and
    followed the `n + 1` elements the (`n + 1`)th element denotes `k` value.

### Constraints

-   0 <= n <= 100
-   1 <= element <=10000
-   0 <= k <= 1000

### Output Format

Print the elements in the linked list

### Sample Input 0

```
4
1
2
3
4
2
```

#### Sample Output 0

```
1->2
```

### Explanation 0

-   After successful insertion the list will be like `1->2->3->4->NULL`.
-   The given k value is 2.
-   After two successful deletions at ending the list will become
    `1->2->NULL`.
