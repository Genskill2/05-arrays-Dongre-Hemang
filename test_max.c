#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }

int max(int array[],int elements){
  int max=array[0];
  for(int i=0;i<elements;i++){
    if(array[i]>max){
      max=array[i];
    }
  }
  return max;
}
