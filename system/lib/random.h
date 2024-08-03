#ifndef random_H
#define random_H
void srand(int n){
    rand_start=n;
}
int rand_start;
int rand(){
    return (n*50-2+5-7*3/2+1*5)%100000;
}
#endif