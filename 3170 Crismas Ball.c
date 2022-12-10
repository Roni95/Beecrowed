#include <stdio.h>
 
int main() {
 
    int own, need,tree;
    scanf("%d%d",&own,&tree);
    need = tree/2;
    if(own>=tree)
        printf("Amelia tem todas bolinhas!\n");
    else
        printf("Faltam %d bolinha(s)\n", need-own);
    return 0;
}
