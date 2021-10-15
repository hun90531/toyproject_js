#include <stdio.h>

int main() {
  int a, b, x, y, start;
  scanf("%d %d", &a, &b);

  char arr[a][a];

  for(int i = 0; i < a; i++){
    if(i == 0 || i == a - 1){
      for(int j = 0; j < a; j++){
        arr[i][j] = '*';
      }
    }

    else{
      for(int j = 0; j < a; j++){
        if(j == 0 || j == a - 1){
          arr[i][j] = '*';
        }
        else{
          arr[i][j] = ' ';
        }
        
      }
    }

    start = b - 2;
    for(int i = 1; i < a - 1; i++){
      for(int j = start; j < a; j = j + b){
        arr[i][j] = '*';
      }
      start--;
      if(start < 0){
        start = b - 1;
      }
    }
  }
  

  for(int i = 0; i < a; i++){
    for(int j = 0; j < a; j++){
      printf("%c", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
