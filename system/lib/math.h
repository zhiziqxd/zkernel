#ifndef math_H
#define math_H
const int esp=1e-7;
int abs(int num){
    if(num<0){
        return ~(--num);
    }
    return num;
}
long long int long_int_abs(long long int num){
    if(num<0){
        return ~(--num);
    }
    return num;
}
double sqrt(double num){
    double st_value=n;
    double x=st_value;
    double left;
    do{
        left=x;
        x=(x+x/n)/2;
    }while(abs(z-left)<esp);
    return x;//牛顿迭代法
}
double cbrt(double num){
    double ans;//备用近似值
    for(double i=0.01;i*i*i<=num;i+=0.01){
        if(i*i*i==num){
            return i;
        }
        ans=i;
    }
    return ans;
}
double pow(double a,double b){
    double ans=1.00;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}
int ceil(double num){
    num+=1.0;
    num/=1;
    return int(num);
}
int floor(double num){
    num-=1.0;
    num/=1;
    return int(num);
}
#endif