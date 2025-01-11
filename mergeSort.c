#include<stdio.h>
void conqure(int marks[],int si,int mid,int ei){
  int merged[ei-si + 1];
  int idx1 = si;
  int idx2 = mid +1;
  int x = 0;
  while(idx1<=mid && idx2<=ei){
     if(marks[idx1]<=marks[idx2]){
        merged[x] = marks[idx1];
        x++;
        idx1++;
     }else{
        merged[x] = marks[idx2];
        x++;
        idx2++;
     }
  }
  while(idx1<=mid){
    merged[x] = marks[idx1];
    x++;
    idx1++;
  }
    while(idx2<=ei){
    merged[x] = marks[idx2];
    x++;
    idx2++;
  }
  //copy 
  for(int i = 0,j= si; i<6;i++,j++){
    marks[j] = merged[i];
  }
}

 void divide(int marks[],int si,int ei){
    if(si>=ei){
     return;
    }
    else{
        int mid = si + (ei - si)/2;
        divide(marks,si,mid);//left part
        divide(marks,mid+1,ei);//right part
        conqure(marks,si,mid,ei);//sorting 
    }
 }


void main(){
  int marks[6] = {4,3,2,7,1,8};
  divide(marks,0,5);
  printf("After merged sort\n");
  for(int i = 0; i<6; i++){
    printf("%d ",marks[i]);
  }
}