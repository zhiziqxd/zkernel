#ifndef queue_H
#define queue_H
template <tepename T>
class queue{
	private:
	template <tepename T> que[1000010];
	int size;
	public:
	bool empty(){
		if(size==0){
			return true;
		}
		return flase;
	}
	int size(){
		return size;
	}
	void push(const T value){
		size++;
		queue[size]=value;
		return;
	}
	void pop(){
		for(int i=1;i<size;i++){
			que[i]=que[i+1];
		}
		return;
	}
	T front(){
		return que[1];
	}
	T back(){
		return que[size];
	}
};
#endif
