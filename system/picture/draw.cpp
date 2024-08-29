#ifndef draw_H
#define draw_H
class display{
    private:
    char draw[80][25];
    public:
    void init(){
        for(int i=0;i<80;i++){
            draw[i][24]='\n';
        }
        return;
    }
    void print_draw(){
        const char *out=&draw[0][0];
        printf(out);
    }
    void change(char ch,int x,int y){
        draw[x][y]=ch;
    }
    void x_change(char ch,int y,int start,int end){
        for(int i=start;i<=end;i++){
            draw[i][y]=ch;
        }
    }
    void y_change(char ch,int x,int start,int end){
        for(int i=start;i<=end;i++){
            draw[x][i]=ch;
        }
    }
    void clear(){
        for(int i=0;i<79;i++){
            for(int j=0;j<25;j++){
            	draw[i][j]=0;
						}
        }
    }
}dis;
#endif