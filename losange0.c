#include <stdio.h>
int entrertaille();
void Isocele(int taille);
void inverseIsocele(int taille);
int main(){
	int taille=0;
	printf("la taille du losange\n");
	taille=entrertaille();
     Isocele(taille);
     inverseIsocele(taille);
   
      return 0;
}
int entrertaille(){
	int n;
	scanf("%d",&n);    
    return n;
 }  

void Isocele(int taille){
	int i,j,k;
    for( i=1;i<=taille;i++){
		for( j=0;j<=taille-i;j++){
			printf("    ");
	    }
			for( k=0;k<(i*2-1);k++)
		printf(" *  "); 	
        printf("\n");}  
}	
void inverseIsocele(int taille){
	int i,j,k;
    for( i=taille-1;i>=1;i--){
		for( j=taille-i;j>=0;j--){
			printf("    ");	
	    }
			for( k=(i*2-1);k>0;k--)
		        printf(" *  "); 
		        printf("\n");
		    }
}
