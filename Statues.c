#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
/*int l=4;
int*t=(int*)malloc(sizeof(int)*l);*/
int t[4]={2,6,3,8};

int max,h,min;
min=100;int g;
g=1;h=0;
int*tab;
max=0;
tab=(int*)malloc(sizeof(int)*max);
for(int i=0;i<4;i++){
	h=t[i];
	if(max<h){
		max=h;
	}
}
	//printf("%d\n",n);
for(int i=0;i<4;i++){
	g=t[i];
	if(min>g){
		min=g;
	}
}
printf("\n%d and %d\n",max,min);
int car[3];
if(min<100){

int i=0;int j;
j=0;

while(min<=max && i<max){
	tab[i]=(min);
	printf("%d\n",tab[i]);
	min++;i++;
	
}
printf("\n%d\n" ,i);
for(int h=0;h<max;h++){
	for(int k=0;k<max;k++){
	if(t[h]!=tab[k]){
		car[j]=tab[k];
		
}
	
}
}
printf("\n%d\n",car[j]);
}


return 0;
}
