#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int entrenombre();
int** allouerTableau(int taille);
void calculvaltriangle(int** tab,int taille);
void affichetrianglePascal(int** tab,int taille);
int main(){

	int** tab=NULL;
	int taille;
	
	printf("entrez la taille que vous voulez de votre triangle de Pascal:\n");
	taille=entrenombre(); 

	tab=allouerTableau(taille);
	calculvaltriangle(tab,taille);
	affichetrianglePascal(tab,taille);
	return 0;
	
}

int** allouerTableau(int taille){
	int** tab=NULL;
	tab=(int**)malloc(taille*sizeof(int*));
	for(int i=0;i<=taille;i++){
		tab[i]=(int*)malloc(taille*sizeof(int));
	}
	return tab;
}
void calculvaltriangle(int** tab,int taille){
		
	for(int i=0;i<=taille;i++){
	  for( int j=0;j<i+1;j++){
		if(j==0 || i==j){
			//tab[i][j]=1;
		   *(*(tab+i)+j)=1;
		}
		else{
			tab[i][j]=tab[i-1][j-1]+tab[i-1][j];
			*(*(tab+i)+j)=*(*(tab+(i-1))+(j-1))+*(*(tab+(i-1))+j);
		}
	}	
	
	}
}
void affichetrianglePascal(int** tab,int taille){
	
	for(int i=0;i<=taille;i++){
	   for( int j=0;j<=i;j++){   
			printf("%d ",*(*(tab+i)+j));
	    
	   }
	   printf("\n");
	}
}

int entrenombre(){
	int t;
	scanf("%d",&t);
	return t;
	
}
