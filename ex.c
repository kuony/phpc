#include<stdio.h>
#include<time.h>



int main(){
	clock_t s_time,e_time;
	int i,sum=0;
	s_time=clock();
	printf("%.7f \n",(double)s_time);
	for(i=0;i<1000000000;i++)
		sum+=i;
	e_time=clock();
	printf("%.7f \n",((double)e_time-(double)s_time)/1000);
	return 0;
}

