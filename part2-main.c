/**
 * Machine Problem 0
 * CS 241 - Spring 2016
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "part2-functions.h"

/**
 * (Edit this function to print out the "Illinois" lines in
 * part2-functions.c in order.)
 */
int main() {
  // your code here
  first_step(81);
  
  int *temp2;
  temp2 = malloc(sizeof(int));
  *temp2 = 132;
  second_step(temp2);
  free(temp2);
  
  int **temp3 = malloc(sizeof(int));
  temp3[0] = malloc(sizeof(int));
  *temp3[0] = 8942;
  double_step(temp3);
  free(temp3[0]);
  free(temp3);
  
  	char * pt = (char *)malloc(12*sizeof(char)); 
    int i;
	for(i = 0; i<12; i++){
		pt[i] = 0;
	}
	pt[5] = 15;
    strange_step(pt);
    free(pt);
    
    char *f = malloc(sizeof(char) * 4);
	f[3] = 0;
	empty_step(f); 	
	free(f);
	
	
	char *a = malloc(sizeof(char)*4);
	char *b = a;
	a[3] = 'u';
	two_step(b,a);
	free(a);
	
	char *initiator = malloc(sizeof(char) * 5);	
	char *first = initiator;
	char *second = initiator + 2;
	char *third = initiator + 4;
	three_step(first, second, third);		
	free(initiator);
	
	char * s3first = "fAf";
	char * s3second = "ffIf";
	char * s3third = "fffQf";
	step_step_step(s3first,s3second,s3third);	
	
	
	char *z = "1"; 
	int x = *z; 
	it_may_be_odd(z, x); 
	
	char * mytoken = strdup("CS241,CS241, KARTIK");
    tok_step(mytoken);
    free(mytoken);
  
  	char *myorange = malloc(sizeof(char) * 4);
	myorange[0] = 1;
	myorange[1] = 0;
	myorange[2] = 0;
	myorange[3] = 2;
	the_end(myorange, myorange);
	free(myorange);
  
  
  return 0;
}
