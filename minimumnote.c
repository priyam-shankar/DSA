#include<stdio.h>
void main(){
    int payAmount = 590;
    int n = 10;
    int note[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int minNote = 0;
    for(int i = 0; i<n; i++) {
        if(payAmount >= note[i]) {
            minNote = minNote + (payAmount/note[i]);
            payAmount = payAmount % note[i];
        }
        if(payAmount == 0) {
            break;
        }
    }
    printf("Minimum no. of note is: %d\n",minNote);
}