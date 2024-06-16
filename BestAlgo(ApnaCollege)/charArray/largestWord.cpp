#include <iostream>
#include <cstring>
using namespace std;
/*Task is to find the largest word in a Sentence*/
int main()
{
    char sent[int(1e6)];
    cout << "Enter the sentence: ";
    scanf("%[^\n]", sent);
    cout << sent << endl;

    int maxlen = 0;
    int currlen = 0;
    char word[int(1e6)];
    char maxWord[int(1e6)];
    int index = 0;
    int lenVal = 0;
    for (int i = 0; sent[i] != '\0'; i++)
    {
        lenVal++;
    }
    for (int i = 0; i <= lenVal; i++)
    {
        if (sent[i] != ' ' and i != lenVal)
        {
            currlen++;
            word[index] = sent[i];
            index++;
        }
        else
        {
            if (maxlen < currlen)
            {
                maxlen = currlen;
                word[index] = '\0';
                strcpy(maxWord, word);
            }
            index = 0;
            currlen = 0;
        }
    }

    cout << "Max length is " << maxlen << endl;
    cout << "Word is : " << maxWord << endl;
    return 0;
}