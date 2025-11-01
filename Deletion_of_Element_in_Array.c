#include<stdio.h>
int main(){
  int x;
  scanf("%d",&x);
  int array[5] ={10, 20, 30, 40, 50};
  
  for(int i=x;i<4;i++){
    array[i]=array[i+1];
  }
  for(int i=0;i<4;i++){
    printf("%d ",array[i]);
  }
  return 0;
  
}
