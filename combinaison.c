#include <stdio.h>
#include <stdlib.h>
 int combinaison(int ligne,int col){
	if(col==ligne){
		return 1;
	}
	if(ligne==1){
		return col;
	}
	else{
		return combinaison(ligne-1,col-1)+combinaison(ligne,col-1);
	}	 
	//return comb; 
}



int main(){
  int col,ligne;
  int cmb;
  scanf("%d" "%d",&ligne,&col);
  cmb=combinaison(ligne,col);
  printf("%d",combinaison(ligne,col));



return 0;
}
