#include <stdio.h>
#include <math.h>
int main() {

for (int i = 0; i < 11; i++)
{
	for (int j = 0; j < 11; j++)
	{
		if(i==0 && j==0){
			printf("Number");
		}else if(i==0){
			printf("%.1f", (((float)j-1)/10));
		}else if(j==0){
			printf("%.1f", (float)(i-1));
		}else{
			printf("%.2f", sqrt((((float)j-1)/10)+ (float)(i-1)));
		}
		printf("\t");
	}
	printf("\n");
	
}


}
