#include<iostream>

void print_error_messages() {
    std::cout << ("ERROR: program input must have searched_word as an argument.\n")
     << ("If you want to run this program simply run it as follows:\n")
     << ("\t1\tInstall g++\n")
     << ("\t2\tGo to folder in terminal and enter \"g++ main.cpp\"\n")
     << ("\t3\tEnter: \"./a.out zyrafa < input_file.txt\"\n");
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