// Да се напише функция, която по дадено изречение и дума замества всяко срещане на думата в изречението с броя '*', колкото са
// буквите, поставя указател към последната промяна и връща броя на срещанията.

#include <iostream>
#define STR_SIZE 100

int strlen(char *ptr)
{
    int len = 0;
    for (; *ptr; ptr++, len++);
    return len;
}

bool is_same(char *sen, char *word)
{
    if (strlen(sen) < strlen(word))
        return false;
    for (; *word; word++, sen++)
        if (*word != *sen)
            return false;
    return true;
}

int change(char *sentence, char *word, char *&ptr)
{   
    int seen = 0;
    int word_len = strlen(word);
    for (char *sen_ptr = sentence; *sen_ptr; sen_ptr++)
    {
        if (*sen_ptr == *word)
            if (is_same(sen_ptr, word))
            {
                ptr = sen_ptr;
                seen++;
                for (int i = 0; i < word_len; i++)
                {   
                    *sen_ptr = '*';
                    sen_ptr++;
                }   
            }
    }
    return seen;
}

int main()
{
    char sentence[] = "This place pl cruel.", 
         word[] = "pl", 
         *ptr;

    std::cout << "Appearances: " << change(sentence, word, ptr) << std::endl
              << "New sentence: " << sentence << std::endl;

    std::cout << "Rest of sentence using ptr: ";
    for (; *ptr; std::cout << *ptr, ptr++);
    std::cout << std::endl;

    return 0;
}
