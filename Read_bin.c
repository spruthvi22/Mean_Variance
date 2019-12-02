/*
* Author:Pruthvi Suryadevara
* Email: pruthvi.suryadevara@tifr.res.in
* Description: C code Read Mean and Variance form 
* Compiled Output: Read_bin.out
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  float val[2];
  FILE *infile;
  infile=fopen("Men_Var.bin","r");
  if(infile==NULL)
    {
      printf("file not found");
      exit(1);
    }
  fread(&val,sizeof(float),2,infile);
  printf("Mean = %f\n",val[0]);
  printf("Variance = %f\n",val[1]);
}
