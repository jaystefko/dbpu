#include<stdio.h>

void change(int a) {
    a += 2;
}

void change_pointer(int *a) {
    *a += 1;
}

int main() {
    int a = 0;
    printf("%d\n", a);
    change(a);
    printf("%d\n", a);
    change_pointer(&a);
    printf("%d\n", a);
    return 0;
}