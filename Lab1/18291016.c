#include <stdio.h>


int* functionFindMin(int* array, int row, int cols, char source, char destination);

int main(){
    int row=10, cols=10,vale = 0;
    int i, j, matris[row][cols]; //matris tanýmlama sekli
    char source,destination,a,b;

	for (i = 0 ; i < row ;i++){
        for (j = 0; j < cols; j++){
            scanf("%d",&matris[i][j]);
        }
    }
    scanf(" %c %c",&source,&destination);

	vale += *functionFindMin(*matris,row,cols,source,destination);

    return 0;
}

int* functionFindMin(int* array, int row, int cols, char source, char destination){
	int i,j,k,value= 0,a = 0;
	char* sehirler = "ABCDEFGHIJ";

	for(k = 0; k<10;k++){
        if(source == sehirler[k]){
            for(i=0;i<10;i++){
                    if(array[k*row+i] < 0){
                            if(sehirler[k] == destination){
                                printf("iki sehir arasi gidilemez");
                                return 0;
                            }//end if
            }
                            else if(array[k*row+i] == 0){
                                    if(sehirler[k] == destination){
                                        printf("iki sehir arasi gidilemez");
                                        return 0;
                                    }//end if
                            }//end if

                    else if( array[k*row+i] >0){
                        if(sehirler[k] == destination){
                                printf("%c-%c %d",source,destination,array[k*row+i]);
                                return &array[k*row+i];
                            }//end if
                        else{
                            a = *functionFindMin(array,row,cols,sehirler[k],destination);
                            if(a == 0){
                                a = -value;
                            }
                            value += a;
                            return &array[k*row+i];
                            }
                    }//end else if
            }//end for
        }//end if
	}//end for
}

