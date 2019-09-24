#include"uhead.h"
int sort1(int* i,int j){
	int k,m;
	int temp;
	for(k=0;k<j-1;k++){
		for(m=0;m<j-1;m++){	
			if(i[m]<i[m+1])
			{
				temp=i[m];
				i[m]=i[m+1];
				i[m+1]=temp;
			}
		}	
	}
	return 0;
}
double calculate_time(){
    struct timeval t;
    gettimeofday(&t,0);
    return t.tv_sec + 1E-6 * t.tv_usec;
}
int sum(int* i,int j){
	int sum1=0;
	int k;
	for(k=0;k<j;k++){
		sum1=sum1+i[k];	
	}
	return sum1;
}
double ave(int i,int j){
	double a1=(double)i/(double)j;
	return a1;
}
