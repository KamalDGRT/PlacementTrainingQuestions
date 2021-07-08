# Balanced Brackets

A bracket is considered to be any one of the following
characters: `(`, `)`, `{`, `}`, `[`, or `]`.

Two brackets are considered to be a matched pair if the
an opening bracket (i.e., `(`, `[`, or `{`) occurs to
the left of a closing bracket (i.e., `)`, `]`, or `}`)
of the exact same type. There are three types of
matched pairs of brackets: `[]`, `{}`, and `()`.

A matching pair of brackets is not balanced if the set
of brackets it encloses are not matched.
For example, `{[(])}` is not balanced because the
contents in between `{` and `}` are not balanced.
The pair of square brackets encloses a single,
unbalanced opening bracket, `(`, and the pair of
parentheses encloses a single, unbalanced closing
square bracket, `]`.

By this logic, we say a sequence of brackets is
balanced if the following conditions are met:

-   It contains no unmatched brackets.
-   The subset of brackets enclosed within the confines
    of a matched pair of brackets is also a matched
    pair of brackets.

Given `n` strings of brackets, determine whether each
sequence of brackets is balanced.

If a string is balanced, return `YES`.

Otherwise, return `NO`.

### Function Description

Complete the function _`isBalanced`_ in the editor below.

_`isBalanced`_ has the following parameter(s):

-   _string s_: a string of brackets

##### Returns

-   _string_: either `YES` or `NO`

### Input Format

-   The first line contains a single integer , the number of strings.
-   Each of the next lines contains a single string , a sequence of brackets.

### Constraints

-   1 <= `n` <= 10^3
-   1 <= `|s|` <= 10^3

where `|s|` is the length of the sequence.

-   All chracters in the sequences ∈ { `{`, `}`, `(`, `)`, `[`, `]` }.

### Output Format

For each string, return `YES` or `NO`.

### Sample Input

```
3
{[()]}
{[(])}
{{[[(())]]}}
```

### Sample Output

```
YES
NO
YES
```

### Explanation

-   n = 3
-   first s = `{[()]}`
-   second s = `{[(])}`
-   third s = `{{[[(())]]}}`

-   The string `{[()]}` meets both criteria for being a balanced string.
-   The string `{[(])}` is not balanced because the
    brackets enclosed by the matched pair `{` and `}`
    are not balanced: `[(])`.
-   The string `{{[[(())]]}}` meets both criteria for being a balanced string.

### Code Stub

```c
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* isBalanced(char* s) {

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int t = parse_int(ltrim(rtrim(readline())));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char* s = readline();

        char* result = isBalanced(s);

        fprintf(fptr, "%s\n", result);
    }

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
```
