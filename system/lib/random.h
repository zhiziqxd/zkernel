#ifndef random_H
#define random_H
const int RAND_MAX=
long long int rand_start;
void srand(long long int st){
    rand_start=st;
}
int rand(){
    rand_start--;
    return rand_start*2-4+1-4/3%1045+3435-56%32767;
}
#endif
