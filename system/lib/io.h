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
void operator <<(cout a,const char* str){
    printf(str);
}
//out
void scanf(char &in){
    unsigned char status;
    unsigned char data;
    status=inb(0x64);
    while(status&0x01==false){
        status=inb(0x64);
    }
    data=inb(0x60);
    in=data;
    return;
}
struct cin{
    //暂时未添加
}
void operator >>(cout a,char in){
    scanf(in);
}
#endif
