#include <iostream>

using namespace std;

void removeMultipleChars(string &word);

int main()
{
    string word = "ghheellloooohooee";

    cout << "Before: " << word << endl;
    removeMultipleChars(word);
    cout << "After:  " << word << endl << endl;

    word = "abcdefabcdefghijkllllfghjimmnopqrrrrraabcdljhgf";
    cout << "Before: " << word << endl;
    removeMultipleChars(word);
    cout << "After:  " << word << endl << endl;

    word = "qwertyqwertyabcdqwertzxyzz";
    cout << "Before: " << word << endl;
    removeMultipleChars(word);
    cout << "After:  " << word << endl << endl;

    return 0;
}

/**
 * Loops through the word twice and compares two characters at a time while making sure
 * it isn't comparing itself. The second loop will start at the character after the first character
 * it is comparing to not make any extra comparisons.
 */
void removeMultipleChars(string &word)
{
    for(int i = 0; i < word.size(); ++i)
    {
        for(int j = i+1; j < word.size(); )
        {
            if(i != j && word[i] == word[j])
                word.erase(j,1);
            else
                ++j;
        }
    }
}
