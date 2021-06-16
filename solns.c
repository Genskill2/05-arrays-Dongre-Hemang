/* Enter your solutions in this file */
#include <stdio.h>

/* Max Function*/

int max(int array[],int elements){
  int max=array[0];
  for(int i=0;i<elements;i++){
    if(array[i]>max){
      max=array[i];
    }
  }
  return max;
}


/* Min Function*/

int min(int array[],int elements){
  int min=array[0];
  for(int i=0;i<elements;i++){
    if(array[i]<min){
      min=array[i];
    }
  }
  return min;
}

/*Average Function*/

float average(int array[],int elements){
  int sum=0;
  for(int i=0;i<elements;i++){
    sum+=array[i];
  }
  float average=(float)sum/elements;
  return average;
}

/* Mode Function*/

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

/* Factors Function*/

int checkIfPrime(int);

int factors(int number,int array[]){
    int numberOfFactors=0;
    int i=2;
    while(i<number){
        if(number%i==0)
            if(checkIfPrime(i)==1){
                array[numberOfFactors]=i;
                numberOfFactors++;
                number=number/i;
                if(checkIfPrime(number)==1){
                    array[numberOfFactors++]=number;
                }
            }
            else continue;
        else
            i++;
    }
    return numberOfFactors;
}

int checkIfPrime(int n){
    int checked=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                checked=1;
            }
        }
        if(checked==0)
            return 1;
        else
            return 0;
}

       
