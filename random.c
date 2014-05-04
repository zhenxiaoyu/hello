/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年05月04日 20时30分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void random(int group[][])
{
		 int group[10][4] = {0};
		 int i,j;
		 srand(time(NULL));
		 for(i = 1;i <= 39;i++)
		 {
		 	j = rand() % 40; 
			while(*(group[0] + j % 40) != 0)
			j++;
			*(group[0] + j % 40) = i;
		 }
		 for(i=0;i<10;i++)
		 {
			printf("第%d组：",i+1);
			for(j=0;j<4;j++)
			printf("%d ",group[i][j]);
			printf("\n");
		 }
}
main()
{
	int group[][];
	random(group);
}
