#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }

int mode(int array[],int elements){
  int modeCount=0,modeValue=0;
  for(int i=0;i<elements;i++){
      int count=0;
      for(int j=0;j<elements;j++){
        if(array[i]==array[j]){
          count++;
        }
      }
      if(count>modeCount){
        modeCount=count;
        modeValue=array[i];
      }
  }
  return modeValue;
}
