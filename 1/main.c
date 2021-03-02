#include <stdio.h>

void print_error_messages() {
    printf("ERROR: program input must have searched_word as an argument.\n"); 
    printf("If you want to run this program simply run it as follows:\n");
    printf("\t1\tInstall gcc\n");
    printf("\t2\tGo to folder in terminal and enter \"gcc main.c\"\n");
    printf("\t3\tEnter: \"./a.out zyrafa < input_file.txt\"\n");
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

    while ((c = getchar()) != EOF) {
        if (found == 0) {
            if (c == argv[1][word_index]) {
                if (word_index == (sizeof(argv[1]) - 3)) {
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