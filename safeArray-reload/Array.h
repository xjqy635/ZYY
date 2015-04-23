class Array 
{  
	public:
		//int set(int i,int j);
		int& operator[] (int i); 
		int get(int i,int *k);
		//Array(int i,int j);
	private:
		int a[100];
};
