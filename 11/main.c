#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){srand(time(NULL));int _[5][5],__[5][5],___[5][5],i,j,k,s;for(i=0;i<5;i++)for(j=0;j<5;j++){_[i][j]=rand()%10;__[i][j]=rand()%10;}for(i=0;i<5;i++)for(j=0;j<5;j++){s = 0;for(k=0;k<5;k++){s+=_[i][k]*__[k][j];___[i][j] = s;}}printf("Wynik mnożenia:\n");for(i=0;i<5;i++){for(j=0;j<5;j++){printf("%6d\t",___[i][j]);}printf("\n");}return 0;}
