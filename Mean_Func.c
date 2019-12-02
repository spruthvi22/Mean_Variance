/*
* Author:Pruthvi Suryadevara
* Email: pruthvi.suryadevara@tifr.res.in
* Description: Defining the function that finds the mean and variance of a array 
*/

#include<stdio.h>
#include<stdlib.h>
#include"Mean_Func.h"

float* Men_Var(float *ary,int n) //Defining the function
{
  // Men_Var function takes in the input array, its size and returns the
  // Mean and Variance 
  float *men_var=(float*)malloc(2*sizeof(float));
  men_var[0]=0;
  men_var[1]=0;
  for(int i=0;i<n;i++)
  {
    men_var[0]=men_var[0]+ary[i];
    men_var[1]=men_var[1]+(ary[i]*ary[i]);
  }
  men_var[0]=men_var[0]/n;
  men_var[1]=(men_var[1]/n)-(men_var[0]*men_var[0]);
  return(men_var);
}
