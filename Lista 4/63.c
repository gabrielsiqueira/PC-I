#include <stdio.h>

int main(int argc, char **argv)
{
  
	int  x, d, num;
	
	x = 300; 
	d = 1;
	num = 0;
	
	
	while (x < 401){
		while ( d <= x){
			if ((x%d)==0){
				num+=1;
			}
			d+=1;
		}
		printf("%d = %d\n",x,num);
		x+=1; 
	}
	return 0;
}
