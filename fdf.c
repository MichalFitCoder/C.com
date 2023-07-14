#include <stdio.h>

int main(){
    int licznik=0;
    for(int i=1;i<=1000;i++){
        if(i%21!=0 && i%22==0)licznik++;
    }
    printf("Licznik wynosi %d",licznik);
    return 0;
}