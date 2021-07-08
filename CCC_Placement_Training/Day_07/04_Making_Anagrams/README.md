# Making Anagrams

We consider two strings to be anagrams of each other if
the first string's letters can be rearranged to form
the second string. In other words, both strings must
contain the same exact letters in the same exact
frequency. For example, `bacdc` and `dcbac` are anagrams,
but `bacdc` and `dcbad` are not.

Alice is taking a cryptography class and finding
_anagrams_ to be very useful. She decides on an
encryption scheme involving two large strings where
encryption is dependent on the minimum number of
character deletions required to make the two strings
anagrams. Can you help her find this number?

Given two strings, `s1` and `s2`, that may not be of the same
length, determine the minimum number of character
deletions required to make `s1` and `s2` anagrams. Any
characters can be deleted from either of the strings.

#### Example

- `s1` = `abc`
- `s2` = `amnop`

The only characters that match are the `a`'s so we have to
remove `bc`from `s1` and `mnop` from `s2` for a total of deletions.

#### Function Description

Complete the _makingAnagrams_ function in the editor below.

makingAnagrams has the following parameter(s):

- _string s1_: a string
- _string s2_: a string

#### Returns

- _int_: the minimum number of deletions needed

### Input Format

- The first line contains a single string, `s1`.
- The second line contains a single string, `s2`.

### Constraints

- 1 <= `|s1|`, `|s2|` <= 10^4
- It is guaranteed that `s1` and `s2` consist of 
 lowercase English letters, ascii[a - z].

### Sample Input

```
cde
abc
```

### Sample Output

```
4
```

### Explanation

Delete the following characters from our two strings to
turn them into anagrams:

-   Remove `d` and `e` from cde to get `c`.
-   Remove `a` and `b` from abc to get c.
-   `4` characters have to be deleted to make both strings anagrams.

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

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(char* s1, char* s2) {

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s1 = readline();

    char* s2 = readline();

    int result = makingAnagrams(s1, s2);

    fprintf(fptr, "%d\n", result);

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
```
