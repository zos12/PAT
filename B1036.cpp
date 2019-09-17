#include<cstdio>
int main(){
	int row,col;
	char c;
	scanf("%d %c", &col, &c);
    if(col % 2 == 0){
    	row = col / 2;
    }else{
    	row = (col + 1) / 2;
    }
    for(int i = 0; i < col; i++){
    if(i == col - 1){
    	printf("%c\n",c);
    }else{printf("%c",c);}
    }
    for(int k = 1; k < row - 1; k++){
    	for(int i = 0; i < col; i++){
    		if(i == 0){
    			printf("%c",c);
    		}else if(i == col - 1){
    			printf("%c\n",c);
    		}else{
    			printf(" ");
    		}
    	}
    }
    for(int i = 0; i < col; i++){
    	if(i == col - 1){
    	printf("%c\n",c);
    }else{printf("%c",c);}
    }
}