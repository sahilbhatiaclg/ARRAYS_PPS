#include<stdio.h>
int main(){
  int arr[100][100];
  printf("Enter elements for a 3x3 matrix:\n2D Array: 3x3 Matrix\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
  
  
}
