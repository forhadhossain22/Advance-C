#include<stdio.h>
int main(){
    int i;

    for(i=1;i<100;i++){
        printf("%d ",i);
        if(i==10) break;    /* exit the loop */
    }

    return 0;
}
