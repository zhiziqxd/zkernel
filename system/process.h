#ifndef procces_H
#define procces_H
#include "lib\io.h"
#include "lib\system.h"
void io_hlt(int long_){
    asm("hlt");
    asm("ret");
    return;
}
void io_cli(){
    asm("cli flag");
    asm("sti");
    return;
}
#endif
