#include <cs50.h>
#include <stdio.h>

// function declarations/prototpyes
int count_letters(string);
int count_words(string);
int count_sentences(string);
int reading_level(int, int, int);
void print_level_info(int);

int main(void)
{
    string text = get_string("Text: ");

    int letter_counter = count_letters(text);
    int word_counter = count_words(text);
    int sentence_counter = count_sentences(text);
    int reading_level = calculate_level(letter_counter, word_counter, sentence_counter);
    print_level_info(reading_level);

}

// function definitions
int count_letters(string text)
{
    // TODO
}

int count_words(string)
{
    // TODO
}

int count_sentences(string)
{
    // TODO
}

int reading_level(int letters, int words, int sentences)
{
    // TODO
}

void print_level_info(int level)
{
    // TODO
}