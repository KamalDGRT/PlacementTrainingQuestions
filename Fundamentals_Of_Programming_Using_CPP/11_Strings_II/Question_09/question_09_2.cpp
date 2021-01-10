// Remove all Characters in Second String which are present in First String

#include <iostream>
#include <cstring>
#include <cstdlib>
#define ASCII_SIZE 256

using namespace std;

//Remove characters from string1 which are in string2
char *RemoveChars(char *string1, char *string2)
{
    //Count array stores the count of chars from string2
    int *count = (int *)calloc(sizeof(int), ASCII_SIZE);
    int i = 0, j = 0;

    for (int i = 0; *(string2 + i); i++)
        count[*(string2 + i)]++;

    while (*(string1 + i))
    {
        char temp = *(string1 + i);
        //If count of charcter is zero add to output
        if (count[temp] == 0)
        {
            *(string1 + j) = *(string1 + i);
            j++;
        }
        i++;
    }
    //Null termination
    //removing extra characters
    *(string1 + j) = '\0';

    return string1;
}

//Main function to test above function
int main()
{
    char string1[100], string2[100];
    cin.getline(string1, 100);
    cin.getline(string2, 100);
    cout << RemoveChars(string2, string1);
    return 0;
}
