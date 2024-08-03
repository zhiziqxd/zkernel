#ifndef io_H
#define io_H
#define endl "\n"
static uint8_t x=0,y=0;
void printf(const char* out){
    static uint16* videomemory=(unit16*)0xb8000;
    for(int i=0;out[i];i++){
        if(out[i]=='/n'){
            y++;
            x=0;
        }
        else{
            videomemory[80*y+x]=(videomemory[80*y+x]&0xFF00)|str[i];
            x++;
        }
        if(x>=80){
            x=0;
            y++;
        }
        if(y>=25){
            for(y=0;y<25;y++){
                for(x=0;x<80;x++){
                    VideoMemory[i]=(VideoMemory[i] & 0xFF00)|' ';
                }
            }
            x=0;
            y=0;
        }
    }
    return;
}
struct cout{
    void flush(){
        printf("\n");
    }
}
cout operator <<(cout a,const char* str){
    printf(str);
}
#endif