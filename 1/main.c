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

    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}