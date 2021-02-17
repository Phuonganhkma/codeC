#include<stdio.h>
#include<string.h>
int main()
{
    char hoTen[5][50];
    for(int i=0; i<5; i++){
        gets (hoTen[i]);
    }
    for(int i=0; i<4; i++){
        for(int j=1+1; j<5; j++){
            if(strcmp(hoTen[i],hoTen[j])){
                char tmp[50];
                strcpy(tmp, hoTen[i]);
                strcpy(hoTen[i], hoTen[j]);
                strcpy(hoTen[j], tmp);
            }
        }
    }
}

