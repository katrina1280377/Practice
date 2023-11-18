// Copyright 2023 <Copyright Owner>
// Name: Wei-Mei(Katrina) Hsiung, Email: whsiung@uw.edu
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stddef.h>
void* memcpy_(void* dst, void *src, size_t size, size_t bytes) {
  if(dst == NULL || src == NULL) return NULL;
  char* dst_ch = (char*)dst; 
  char* src_ch = (char*)src; 
  while(size > 0) {
    for(size_t i = 0; i < bytes; ++i) {
      *dst_ch = *src_ch;
       dst_ch++;
       src_ch++;
    }
    size -= bytes;
    }

  return dst;
}


int main(int argc, char *argv[]) {
  char* source = "hello";
  char target[50];
  memcpy_(target, source, sizeof(source), sizeof(int));
  for(int i = 0; i < 5; i++) printf("%c ", target[i]);
  return EXIT_SUCCESS;
}

