#include <stdio.h>
#include <string.h>
#define max 15

void functionFindName(char (*array)[max], char* name);

void printOnlyName(char* name,int r, int c, int direction);

int main()
{
    char name[max],isim[max][max];

    for(int i=0; i<max; i++)
        for(int j=0; j<max; j++)
            scanf(" %c",&isim[i][j]);
    scanf("%s",name);

    functionFindName(isim,name);
    return 0;
}

void functionFindName(char (*array)[max], char* name){
    int a=1;
    int   direction;
    int len = strlen(name);
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++)
            {
                if(name[0] == array[i][j]){


                        for(int k=0;k<len;k++){
                            if(name[k] == array[i][j+k]){
                                a+=1;
                                if(a == len){
                                    direction = 1;
                                    printOnlyName(name,i,j,direction);
                                        return;}
                                else
                                    continue;
                            }
                                else{
                                    break;
                                }
                        }
                        a = 1;

                        for(int k=0;k<len;k++){
                            if(name[k] == array[i+k][j+k]){
                                a+=1;
                                if(a == len){
                                    direction = 2;
                                    printOnlyName(name,i,j,direction);
                                        return;}
                            }
                                else{
                                    break;
                                }
                        }
                        a = 1;

                        for(int k=0;k<len;k++){
                            if(name[k] == array[i+k][j]){
                                a+=1;
                                if(a == len){
                                    direction = 3;
                                    printOnlyName(name,i,j,direction);
                                        return;}
                            }
                                else{
                                    break;
                                }
                        }
                        a = 1;

                        for(int k=0;k<len;k++){
                            if(name[k] == array[i][j-k]){
                                a+=1;
                                if(a == len){
                                    direction = 4;
                                    printOnlyName(name,i,j,direction);
                                        return;}
                            }
                                else{
                                    break;
                                }
                        }
                        a = 1;

                        for(int k=0;k<len;k++){
                            if(name[k] == array[i+k][j-k]){
                                a+=1;
                                if(a == len){
                                    direction = 5;
                                    printOnlyName(name,i,j,direction);
                                        return;}
                            }
                                else{
                                    break;
                                }
                        }
                        a = 1;

                            for(int k=0;k<len;k++){
                                if(name[k] == array[i-k][j]){
                                    a+=1;
                                    if(a == len){
                                        direction = 6;
                                    printOnlyName(name,i,j,direction);
                                        return;}
                                    }
                                else{
                                    break;
                                }
                            }
                            a = 1;

                            for(int k=0;k<len;k++){
                                if(name[k] == array[i-k][j+k]){
                                    a+=1;
                                    if(a == len){
                                        direction = 7;
                                    printOnlyName(name,i,j,direction);
                                        return;}
                                    }
                                else{
                                    break;
                                }
                            }
                            a = 1;

                            for(int k=0;k<len;k++){
                                if(name[k] == array[i-k][j-k]){
                                    a+=1;
                                    if(a == len){
                                        direction = 8;
                                    printOnlyName(name,i,j,direction);
                                        return;}
                                }
                                else{
                                    break;
                                }
                            }
                            a = 1;
                }
            }//end second for
        }
        direction = 0;
        int i = -1;
        int j = -1;
        printOnlyName(name,i,j,direction);
}

void printOnlyName(char* name,int r, int c, int direction){
    int len = strlen(name);
    char array[max][max], isim[len];

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            array[i][j] = '*';}}
    if(direction == 1){
        for(int k=0;k<len;k++){
        array[r][c+k] = name[k];
            }}

    else if(direction == 2){
        for(int k=0;k<len;k++){
            array[r+k][c+k] = name[k];
            }}

    else if(direction == 3){
        for(int k=0;k<len;k++){
            array[r+k][c] = name[k];
            }}

    else if(direction == 4){
        for(int k=0;k<len;k++){
            array[r][c-k] = name[k];
            }}

    else if(direction == 5){
        for(int k=0;k<len;k++){
            array[r+k][c-k] = name[k];
            }}

    else if(direction == 6){
        for(int k=0;k<len;k++){
            array[r-k][c] = name[k];
            }}

    else if(direction == 7){
        for(int k=0;k<len;k++){
            array[r-k][c+k] = name[k];
            }}

    else if(direction == 8){
        for(int k=0;k<len;k++){
            array[r-k][c-k] = name[k];
            }}

for(int i = 0; i < 15; i++){
    for(int j = 0; j < 15; j++){
        printf("%c",array[i][j]);
        }
    printf("\n");
    }
}
