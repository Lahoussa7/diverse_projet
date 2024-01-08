#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int*deciTobit(int*ta,int e);
int*deciTobit2(int*t);
int addition(int a,int b);
int main(){
	printf(" transfome un nombre decimal en bit\n");  //la somme de deux nombre que vous entriez sera changer en bit aussi
	int*t;
	t=malloc(sizeof(int*)*8);
	int* ti;
	ti=malloc(sizeof(int*)*8);
	int* to;
	to=malloc(sizeof(int*)*8);
	int* te;
	te=malloc(sizeof(int*)*8);
	
	int* t1;
	t1=malloc(sizeof(int*)*8);
	
	int* t2;
	t2=malloc(sizeof(int*)*8);
	
	int ta[8];
	int e,h,f,i,l,m;
	
	h=8;l=8;m=8;
	
	printf("entrer un nombre positive :\n");
	scanf("%d" "%d",&f,&e);
	i=addition(e,f);
	printf("%d\n",i);
	t=deciTobit(ta,e);
	for(h=h-1;h>=0;h--){
   
    ti=deciTobit2(t);
    printf("%d",ti[h]);
    }
	te=deciTobit(ta,f);
    to=deciTobit(ta,i);
    printf("\n");
    for(l=l-1;l>=0;l--){
   
    t1=deciTobit2(te);
    printf("%d",t1[l]);
    }    printf("\n");
    for(m=m-1;m>=0;m--){
   
    t2=deciTobit2(to);
    printf("%d",t2[m]);
    }    printf("\n");
	
	return 0;
}
int*deciTobit(int*ta,int e){
	int d,q,j;
	
	int*t;
	t=malloc(sizeof(int*)*8);
	
	do{
	for(j=0;j<=8;j++){
		
	d=2;
	q=e/d;  
	ta[j]=e%2;
    e=q;
	t[j]=ta[j];
    } 
    }while(e!=0);  
    
return t;  

}
int*deciTobit2(int*t){
	int* ty;
	int i=8;
	ty=malloc(sizeof(int*)*8);
     for(i=i-1;i>=0;i--){
		 ty[i]=t[i];
	 }
	 return ty;
 }
int addition(int a,int b){
	int s;
	s=0;
	s=a+b;
	return s;
}


