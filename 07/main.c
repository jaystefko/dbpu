#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/mman.h>

#define LIST_LENGTH 16

int main() {
    mlockall(MCL_CURRENT);
    srand(time(NULL));
    
    int i;
    char preKey[LIST_LENGTH];
    
    for(i = 0; i < LIST_LENGTH; i++) {
        preKey[i] = rand() % 2;
        printf("%x\n", preKey[i]);
    }
    
    munlockall();
    return 0;
}