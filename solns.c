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

int checkPrime(int n){
       int checked=0;
       for(int i=2;i<n;i++){
           if(n%i==0){
              return 0;
           }
           else{
                return 1;
           }
        }
   }

int factors(int number,int ret[]){
    int i=2,count=0;
    
        while(i<number){
            while(number%i==0){
                if(checkPrime(i)==1){
                    number/=i;
                    ret[count]=i;
                    count++;
                 }
            } 
            i++;
        }
        printf("%d\n",count);
        return count;    
}
    
