#ifndef procces_H
#define procces_H
#include "lib\io.h"
#include "lib\system.h"
struct process{
	int around;
	void (*func)();
	bool end_run=false;
}pro[9999];
int process_cnt;
void add_process(int a,void (*b)()){
	process_cnt++;
	pro[process_cnt].around=a;
	pro[process_cnt].func=b;
	return;
}
void run_pro(){
	int minn=1e9,in;
	for(int i=1;i<=process_cnt;i++){
		if(minn>pro[i].around&&!pro[i].end_run){
			minn=pro[i].around;
			in=i;
		}
	}
	pro[in].func();
	pro[in].end_run=true;
	return;
}
void io_hlt(){
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
