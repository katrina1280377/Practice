// Copyright 2023 <Copyright Owner>
// Name: Wei-Mei(Katrina) Hsiung, Email: whsiung@uw.edu
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main(int argc, char *argv[]) {
  int num[10]= {7,6,5,1,4,8,3,7,2,1};
  for(int i = 1; i < 10; i++) {
    int prev = i-1, now = i;
    while(prev >= 0 && num[prev] > num[now]) {
      swap(&num[prev], &num[now]);
      prev--;
      now--;
    }
  }
  for(int i = 0; i < 10; i++) printf("%i ", num[i]);
  return EXIT_SUCCESS;
}

