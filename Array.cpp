#include<iostream>
#include<string>
#include<iomanip>
using namespace std ;
void menu() ;
int main()
{
	int score[4],total=0,max=0,min ;
	string name[4] ;
	for(int i=0 ; i<4 ; i++)
	{
		cout << "Name [" << i << "] : " ;
		cin >> name[i] ;
		cout << "Score[" << i << "] : " ;
		cin >> score[i] ;
		
	}
	cout << "---------------------\n" ;
	cout << "Name          Score  \n" ;
	cout << "---------------------\n" ;
	for(int i=0 ; i<4 ; i++)
	{
		cout << name[i] << "\t\t" << score[i] << endl ;
	}
	min = score[0] ;
	for(int i=0 ; i<4 ; i++)
	{
		total += score[i] ;
		if(score[i] > max)
			max = score[i] ;
		if(score[i] < score[0])
			min = score[i] ;
	}
	
	cout << "---------------------\n" ;
	cout << "Total Score : " << total << endl ;
	cout << "Average     : " << (float)total/4 << endl ;
	cout << "Max Score   : " << max << endl ;
	cout << "Min Score   : " << min << endl ;
	system("pause") ;
	return 0 ;
}
