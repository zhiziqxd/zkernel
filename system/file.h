#ifndef file_H
#define file_H
union {
    int num;
    bool num;
    long long int num;
    char num;
};
struct value{
    union value{
        int num;
        bool num;
        long long int num;
        char num;
    };
}_value[999999];
long long int memory=0x000000;
void write_bit(int bit_l){
    auto var=num;
    _value[memory].value.num=var;
    memory+=bit_l;
}
auto read_bit(int bit_in){
    return _value[bit_in].value.num;
}
#endif
