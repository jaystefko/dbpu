#include<iostream>

void print_error_messages() {
    std::cout << ("ERROR: program input must have searched_word as an argument.\n")
     << ("If you want to run this program simply run it as follows:\n")
     << ("\t1\tInstall g++\n")
     << ("\t2\tGo to folder in terminal and enter \"g++ main.cpp\"\n")
     << ("\t3\tEnter: \"./a.out zyrafa < input_file.txt\"\n");
}

size_t strlen(const char *str)
{
    const char *p = str;
    while (*p != '\0')
        ++p;
    return p - str;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error_messages();
        return -1;
    }

    int c, line_number, word_index, found;
    
    line_number = 1;
    word_index = 0;
    found = 0;

    size_t searched_word_length = strlen(argv[1]);

    while ((c = getchar()) != EOF) {
        if (found == 0) {
            if (c == argv[1][word_index]) {
                if (word_index == (searched_word_length - 1)) {
                    printf("%d\n", line_number);
                    found = 1;
                } else {
                    word_index += 1;
                }
            } else if (word_index != 0) {
                word_index = 0;
            }
        }

        if (c == '\n') {
            line_number += 1;
            word_index = 0;
            found = 0;
        }
    }

    return 0;
}