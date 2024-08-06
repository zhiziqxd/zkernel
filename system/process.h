#ifndef process_H
#define process_H
struct process{
    char id;
    short class_;
    short state;
}proc[99999];
bool if_good[99999];
long long int number_pro;
long long int to=1;
void add(short classes,char id){
    number_pro++;
    proc[number_pro].id=id;
    proc[number_pro].class_=classes;
    return;
}
bool check(int in){
    if(proc[in].state==3){//如果已经完成
      return false;
    }
    if(if_good[in]){
        proc[in].state=1;
    }
    else{
        proc[in].state=0;
    }
    return if_good[in];
}
char run_(int in){
  char ans=proc[in].id;
  for(int i=in;i<number_pro;i++){
    proc[i].id=proc[i+1].id;
    proc[i].class_=proc[i+1].class_;
    proc[i].state=proc[i+1].state;
  }
  return ans;
}
void run_ok(int in){
    proc[in].state=0;
    return;
}
#endif
