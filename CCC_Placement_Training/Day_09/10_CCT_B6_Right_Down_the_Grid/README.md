# CCT B6 - Right Down the Grid

-   You are in a 2D maze of dimensions N x M.
-   Your initial position is `(1, 1)` and your final position is `(N, M)`.

-   The cell`(i, j)` has value `A[i][j]`.
-   The cost of travelling any path in this maze is equal to the sum
    of values of all cells that you have visited while travelling the path.

-   From a cell `(i, j)` you can only go either right, or down, i.e. you can
    only go to `(i + 1, j)` or `(i, j + 1)`.
-   Note that at any point you cannot leave the grid.

-   Your task is to calculate the minimum cost that it would take you to
    go from the initial position to the final position.

### Input

-   First line contains two integers N and M.
-   Next N lines each contain M integers denoting the values of `A[i][j]`

### Output

Print the minimum cost of travel

##### Notes

-   All input values do not exceed 1000

### Sample Input 0

```
3 3
1 1 2
2 3 1
2 2 1
```

### Sample Output 0

```
6
```
