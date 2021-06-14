#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
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
    
   
