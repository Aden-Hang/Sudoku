class Sudoku
{
	public:
	//int array[9][9];
	void giveQuestion();
	void readIn();
	void solve();
	void transform();
	void change();
	void changeNum(int a,int b);
	void changeRow(int a,int b);
	void changeCol(int a,int b);
	void rotate(int n);
	void flip(int n);
};
