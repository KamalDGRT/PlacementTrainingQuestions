# Pangrams

-   A _pangram_ is a string that contains every letter of the alphabet.
-   Given a sentence determine whether it is a pangram in
    the English alphabet.
-   Ignore case.
-   Return either `pangram` or `not pangram` as appropriate.

#### Example

-   `s` = `The quick brown fox jumps over the lazy dog`
-   The string contains all letters in the English alphabet,
    so return `pangram`.

#### Function Description

-   Complete the function _pangrams_ in the editor below.
-   It should return the string `pangram` if the input string is a pangram.
-   Otherwise, it should return `not pangram`.

pangrams has the following parameter(s):

-   _string s_: a string to test

#### Returns

_string_: either `pangram` or `not pangram`

### Input Format

A single line with string `s`.

### Constraints

-   0 < `length of s` <= 10^3
-   Each character of `s`, `s[i]` ∈ {a - z, A -Z, _space_}

### Sample Input 0

```
We promptly judged antique ivory buckles for the next prize
```

### Sample Output 0

```
pangram
```

### Sample Explanation 0

All of the letters of the alphabet are present in the string.

### Sample Input 1

```
We promptly judged antique ivory buckles for the prize
```

### Sample Output 1

```
not pangram
```

### Sample Explanation 0

The string lacks an `x`.

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
 * Complete the 'pangrams' function below.
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
char* pangrams(char* s) {

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = pangrams(s);

    fprintf(fptr, "%s\n", result);

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
