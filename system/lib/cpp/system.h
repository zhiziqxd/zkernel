#ifndef system_H
#define system_H
#include "io.h"
#include "random.h"
void system(const char *command){
    if(command=="cls"){
        for(int i=1;i<=25;i++){
            printf("/n");
        }
    }
}
void sleep(int time_long){
    while(time_long--){
        for(int i=1;i<=124911402;i++){
            //empty
        }
    }
    return;
}
#endif
