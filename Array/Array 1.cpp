#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <float.h>

void main(){
  int array[4];
  int SizeofArray = sizeof(array)/sizeof(int);
  int total = 0;
  for(int i=0; i<SizeofArray; i++){
	 printf("array[%d] = ",i);
	 scanf("%d",&array[i]);
  }
  for(int i=0; i< SizeofArray; i++){
	 total += array[i];
  }
  printf("total = %d",total);
}
