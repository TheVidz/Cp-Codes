#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
scanf("%d %d %d",&a,&b,&c);
	for(int i=0; i*a<=c; ++i) 
    {
		int t=(c-i*a);
		if(t%b==0) 
        {
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}