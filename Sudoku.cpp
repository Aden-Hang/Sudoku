#include"Sudoku.h"
#include<ctime>
#include<stdlib.h>
#include<iostream>
#include<fstream>

using namespace std;

int array[9][9];

void Sudoku::giveQuestion()
{
	/*int board[9][9]={{0,6,0,0,0,0,0,0,0},
					 {0,0,0,0,7,5,4,0,6},
					 {2,8,0,0,0,1,0,0,7},
					 {6,5,0,0,0,0,0,0,0},
					 {0,3,0,0,0,0,0,6,0},
					 {0,0,0,0,0,0,0,5,8},
					 {8,0,0,4,0,0,0,3,9},
					 {1,0,7,9,5,0,0,0,0},
					 {0,0,0,0,0,0,0,7,0}};*/
					 
	int board[9][9]={{7,6,4,3,9,2,8,1,5},
					 {3,1,9,8,7,5,4,2,6},
					 {2,8,5,6,4,1,3,9,7},
					 {6,5,1,7,8,9,2,4,3},
					 {9,3,8,5,2,4,7,6,1},
					 {4,7,2,1,3,6,9,5,8},
					 {8,2,6,4,1,7,5,3,9},
					 {1,4,7,9,5,3,6,8,2},
					 {5,9,3,2,6,8,1,7,4}};
					 
	int i , j;
	
	ofstream file("Question.txt",ios::out);
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			file<<board[i][j]<<" ";
		}
		file<<endl;
	}
}

void Sudoku::readIn()
{
	int i , j;
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cin>>array[i][j]; 
		}
	}
}

void Sudoku::transform()
{
	change();
}

void Sudoku::change()
{
	srand(time(NULL));
	changeNum(rand()%9+1,rand()%9+1);
	changeRow(rand()%3,rand()%3);
	changeCol(rand()%3,rand()%3);
	rotate(rand()%101);
	flip(rand()%2);
}

void Sudoku::changeNum(int a , int b)
{
	int i , j , temp;
	int stop[9][9];
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			stop[i][j]=array[i][j];
		}
	}	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(stop[i][j]==a)
			{
				stop[i][j]=b;
				continue;
			}
			if(stop[i][j]==b)
			{
				stop[i][j]=a;
				continue;
			}
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cout<<stop[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

void Sudoku::changeRow(int a , int b)
{
	int transport[9][3];
	int i , j;
	int stop[9][9];
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			stop[i][j]=array[i][j];
		}
	}	
	for(i=0;i<9;i++)
	{
		for(j=(a*3);j<(a*3)+3;j++)
		{
			transport[i][j-(a*3)]=stop[i][j];
			stop[i][j]=stop[i][j+(b-a)*3];
			stop[i][j+(b-a)*3]=transport[i][j-(a*3)];
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cout<<stop[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

void Sudoku::changeCol(int a , int b)
{
	int transport[3][9];
	int i , j;
	int stop[9][9];
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			stop[i][j]=array[i][j];
		}
	}	
	for(i=(a*3);i<(a*3)+3;i++)
	{
		for(j=0;j<9;j++)
		{
			transport[i-(a*3)][j]=stop[i][j];
			stop[i][j]=stop[i+(b-a)*3][j];
			stop[i+(b-a)*3][j]=transport[i-(a*3)][j];
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			cout<<stop[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

void Sudoku::rotate(int n)
{
	int times , i , j;
	int stop[9][9];
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			stop[i][j]=array[i][j];
		}
	}	
	times=n%4;
	switch(times)
	{
		case 0:
			{
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						cout<<stop[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
		case 1:
			{
				for(j=0;j<9;j++)
				{
					for(i=8;i>-1;i--)
					{
						cout<<stop[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
		case 2:
			{
				for(i=8;i>-1;i--)
				{
					for(j=8;j>-1;j--)
					{
						cout<<stop[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
		case 3:
			{
				for(j=8;j>-1;j--)
				{
					for(i=0;i<9;i++)
					{
						cout<<stop[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
	}
	cout<<endl<<endl;
}

void Sudoku::flip(int n)
{
	int stop[9][9]={0};
	int i , j , k;
	
	switch(n)
	{
		case 0:
			{
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						stop[8-i][j]=array[i][j];
					}
				}
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						cout<<stop[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
		case 1:
			{
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						stop[i][8-j]=array[i][j];
					}
				}
				for(i=0;i<9;i++)
				{
					for(j=0;j<9;j++)
					{
						cout<<stop[i][j]<<" ";
					}
					cout<<endl;
				}
				break;
			}
	}
}


void Sudoku::solve()
{
	int i , j , k , l ,s, r , m , t , num , start , calculate , row , col , check , wrong , first , second  , done=0  , row1 , col1 , see , chance , second_round , again=0,same=0,stay=0;
	int block[90][10]={0} , unchange_mirror[90][10]={0} , change_mirror[90][10]={0} , origin_block[90][10]={0};
	int stop[9][9]={0} , ask[9] , save[9];
	
	
	
	//複製array
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			stop[i][j]=array[i][j];
		}
	}
	for(second_round=0;second_round<2;second_round++)
	{ 
		//宣告block陣列[90][10] 
		for(i=1;i<90;i++)
		{
			for(j=0;j<10;j++)
			{
				block[i][j]=j;
			}
		}
		//填入已知，並將後方變為0 
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(stop[i][j]!=0)
				{
					block[(10*i)+j+1][0]=stop[i][j];
					for(k=1;k<10;k++)
					{
						block[(10*i)+j+1][k]=0;
					}
				}
			}
		}
		//開始
	
		for(start=0;start<100000;start++)
		{
			//循環計算
			for(calculate=0;calculate<30;calculate++)
			{
				//行消除 
				for(i=1;i<90;i++)
				{
					if(block[i][0]!=0)//i=26
					{
						row=(i/10);		//row=2
						col=(i%10);		//col=6
						for(k=(10*row);k<10*(row+1);k++)
						{
							block[k][block[i][0]]=0;
						}
					}
				}
				//列消除 
				for(i=1;i<90;i++)
				{
					if(block[i][0]!=0)//i=26
					{
						row=(i/10);		//row=2
						col=(i%10);		//col=6
						for(k=col;k<90;k+=10)
						{	
							block[k][block[i][0]]=0;
			 			}
					}
				}
				//方格消除
				for(l=0;l<9;l+=3)
				{
					for(i=l;i<l+21;i+=10)
					{
						for(j=i+1;j<i+4;j++)
						{
							if(block[j][0]!=0)
							{
								for(k=l;k<l+21;k+=10)
								{
									for(r=k+1;r<k+4;r++)
									{
										block[r][block[j][0]]=0;
									}
								}
							}
						}
					}
				}
				for(l=30;l<39;l+=3)
				{
					for(i=l;i<l+21;i+=10)
					{
						for(j=i+1;j<i+4;j++)
						{
							if(block[j][0]!=0)
							{
								for(k=l;k<l+21;k+=10)
								{
									for(r=k+1;r<k+4;r++)
									{
										block[r][block[j][0]]=0;
									}
								}
							}
						}
					}
				}
				for(l=60;l<69;l+=3)
				{
					for(i=l;i<l+21;i+=10)
					{
						for(j=i+1;j<i+4;j++)
						{
							if(block[j][0]!=0)
							{
								for(k=l;k<l+21;k+=10)
								{
									for(r=k+1;r<k+4;r++)
									{
										block[r][block[j][0]]=0;
									}
								}
							}
						}
					}
				}
				//列唯一解
				for(l=0;l<9;l++)
				{
					for(k=1;k<10;k++)
					{	
						check=0;
						for(i=10*l+1;i<10*l+10;i++)
						{
							if(block[i][k]==k)
							{
								check++;
							}
						}
						if(check==1)
						{
							for(m=10*l+1;m<10*l+10;m++)
							{
								if(block[m][k]==k)
								{
									block[m][0]=k;
									for(s=1;s<10;s++)
									{
										block[m][s]=0;
									}
								}
							}
						}
					}
				}
				/*//行唯一解
				for(l=0;l<9;l++)
				{
					for(k=1;k<10;k++)
					{	
						check=0;
						for(i=l+1;i<82+l;i+=10)
						{
							if(block[i][k]==k)
							{
								check++;
							}
						}
						if(check==1)
						{
							for(m=l+1;m<82+l;m+=10)
							{
								if(block[m][k]==k)
								{
									block[m][0]=k;
									for(s=1;s<10;s++)
									{
										block[m][s]=0;
									}
								}
							}
						}
					}
				}*/
				//填入唯一解 
				for(i=1;i<90;i++)
				{
					if(i%10==0)continue;
					check=0;
					for(j=1;j<10;j++)
					{
						if(block[i][j]==0)
						{
							check++;
						}	
						if(block[i][j]!=0)
						{
							num=block[i][j];	
						}
					}
					(check==8)?block[i][0]=num:num=0;
				}
				//填入答案，其餘歸0 
				for(i=1;i<90;i++)
				{
					if(i%10==0)continue;
					if(block[i][0]!=0)
					{
						for(j=1;j<10;j++)
						{
							block[i][j]=0;
						}
					}
				}
			}
			//檢查行錯誤
			wrong=0;
			for(i=0;i<9;i++)
			{		
				for(m=0;m<10;m++)
				{
					ask[m]=0;
				}
				for(j=10*i+1;j<10*i+10;j++)
				{		
					if(block[j][0]==1)ask[1]++;
					if(block[j][0]==2)ask[2]++;
					if(block[j][0]==3)ask[3]++;
					if(block[j][0]==4)ask[4]++;
					if(block[j][0]==5)ask[5]++;
					if(block[j][0]==6)ask[6]++;
					if(block[j][0]==7)ask[7]++;
					if(block[j][0]==8)ask[8]++;
					if(block[j][0]==9)ask[9]++;
				}
				for(k=1;k<10;k++)
				{
					if(ask[k]>1)
					{
						wrong=1;
						break;
					}
				}
			}
			//檢查列錯誤 
			for(i=0;i<9;i++)
			{		
				for(m=0;m<10;m++)
				{
					ask[m]=0;
				}
				for(j=i+1;j<82+i;j+=10)
				{		
					if(block[j][0]==1)ask[1]++;
					if(block[j][0]==2)ask[2]++;
					if(block[j][0]==3)ask[3]++;
					if(block[j][0]==4)ask[4]++;
					if(block[j][0]==5)ask[5]++;
					if(block[j][0]==6)ask[6]++;
					if(block[j][0]==7)ask[7]++;
					if(block[j][0]==8)ask[8]++;
					if(block[j][0]==9)ask[9]++;
				}
				for(k=1;k<10;k++)
				{
					if(ask[k]>1)
					{
						wrong=1;
						break;
					}
				}
			}
			for(j=1;j<90;j++)
			{
				for(i=1;i<10;i++)
				{
					ask[i]=0;
				}
				if(block[j][0]==1)ask[1]++;
				if(block[j][0]==2)ask[2]++;
				if(block[j][0]==3)ask[3]++;
				if(block[j][0]==4)ask[4]++;
				if(block[j][0]==5)ask[5]++;
				if(block[j][0]==6)ask[6]++;
				if(block[j][0]==7)ask[7]++;
				if(block[j][0]==8)ask[8]++;
				if(block[j][0]==9)ask[9]++;
			}
			for(k=1;k<10;k++)
			{
				if(ask[k]>9)
				{
					wrong=1;
					break;
				}
			}
			for(i=1;i<90;i++)
			{
				if(i%10==0)continue;
				if(block[i][0]==0 && block[i][1]==0 && block[i][2]==0 && block[i][3]==0 && block[i][4]==0 && block[i][5]==0 && block[i][6]==0 && block[i][7]==0 && block[i][8]==0 && block[i][9]==0)
				{
					wrong=1;
					break;
				}
			}
			if(wrong==1&&second_round==0)
			{
				origin_block[done/10][done%10]=0;
				done=0;
			}
			if(wrong==1&&second_round==1)
			{
				origin_block[done/10][done%10]=0;
				stay=0;
				done=900;
			}
			see=0;
			for(i=1;i<90;i++)
			{
				if(i%10==0)continue;
				if(block[i][0]==0)
				{
					see=1;
					break;	
				}
			}
			if(wrong==0&&see==0)break;
			
			if(start==0)
			{
				for(i=1;i<90;i++)
				{
					for(j=0;j<10;j++)
					{
						origin_block[i][j]=block[i][j];
					}
				}
			}
			for(i=1;i<90;i++)
			{
				for(j=0;j<10;j++)
				{
					block[i][j]=origin_block[i][j];
				}
			}
			check=0;
			if(second_round==0)
			{
				for(i=1;i<90;i++)
				{
					if(i%10==0)continue;
					for(j=1;j<10;j++)
					{
						if(block[i][j]==j)
						{
							if(done<10*i+j)
							{	
								done=10*i+j;
								block[i][0]=j;
								check=1;
								for(m=1;m<10;m++)
								{
									block[i][m]=0;
								}
								break;
							}
						}
					}
					if(check==1)break;
				}
			}
			if(second_round==1)
			{
				for(i=89;i>0;i--)
				{
					if(i%10==0)continue;
					for(j=9;j>0;j--)
					{
						if(block[i][j]==j)
						{
							if(stay==0)
							{
								stay=1;
								break;
							}
							if(done>10*i+j)
							{	
								done=10*i+j;
															
								block[i][0]=j;
								check=1;
								for(m=1;m<10;m++)
								{
									block[i][m]=0;
								}
								break;
							}
						}
					}
					if(check==1)break;
				}
			}
			for(i=1;i<90;i++)
			{
				if(i%10==0)continue;
				check=0;
				for(j=1;j<10;j++)
				{
					if(block[i][j]==0)
					{
						check++;
					}	
					if(block[i][j]!=0)
					{
						num=block[i][j];	
					}
				}
				(check==8)?block[i][0]=num:num=0;
			}
			//填入答案，其餘歸0 
			for(i=1;i<90;i++)
			{
				if(i%10==0)continue;
				if(block[i][0]!=0)
				{
					for(j=1;j<10;j++)
					{
						block[i][j]=0;
					}
				}
			}	
		} 
		see=0;
		for(i=1;i<90;i++)
		{
			if(i%10==0)continue;
			if(block[i][0]==0)
			{
				see=1;
				break;	
			}
		}
		if(wrong==1)
		{
			cout<<"0";
			break;
		}
		if(wrong==0&&see==0&&second_round==0)
		{
			for(i=0;i<90;i++)
			{
				for(j=0;j<10;j++)
				{
					change_mirror[i][j]=block[i][j];
				}
			}
			done=900;
			/*cout<<"1"<<endl;
			for(i=1;i<90;i++)
			{
				if(i%10==0)
				{
					cout<<endl;
					continue;
				}
				cout<<change_mirror[i][0]<<" ";
			}*/
		}
		
	}
	see=0;
	for(i=1;i<90;i++)
	{
		if(i%10==0)continue;
		if(block[i][0]==0)
		{
			see=1;
			break;	
		}
	}
	same=0;
	if(wrong==0)
	{
		for(i=1;i<90;i++)
		{
			if(i%10==0)continue;
			for(j=1;j<10;j++)
			{
				if(change_mirror[i][0]!=block[i][0])
				{
					same=1;
				}
			}
		}
		if(same==1)
		{
			cout<<"2"/*<<endl*/;
			/*for(i=1;i<90;i++)
			{
				if(i%10==0)
				{
					cout<<endl;
					continue;
				}
				cout<<change_mirror[i][0]<<" ";
			}
			cout<<endl<<endl;
			for(i=1;i<90;i++)
			{
				if(i%10==0)
				{
					cout<<endl;
					continue;
				}
				cout<<block[i][0]<<" ";
			}*/
			
		}
		if(same==0)
		{
			cout<<"1"<<endl;
			for(i=1;i<90;i++)
			{
				if(i%10==0)
				{
					cout<<endl;
					continue;
				}
				cout<<block[i][0]<<" ";
			}
		}
	}
}
