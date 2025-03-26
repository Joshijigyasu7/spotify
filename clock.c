#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#include<windows.h>
int main(){
    int min,hour,sec;
    hour=min=sec=0;

    while(1){
        system("cls");
        printf("%02d : %02d : %02d",hour,min,sec);
        fflush(stdout);

        sec++;
        if(sec==60){
            min+=1;
            sec=0;

        }
        if(min==60){
            hour+=1;
            min=0;
        }
        if(hour==24){
            hour=0;
            min=0;
            sec=0;
        }
        Sleep(1000);
       
    }
    return 0;
}