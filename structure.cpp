#include <iostream>
using namespace std;


struct Person
{
	int toes;
	int knees;
	int shoulder; 
	int head;	
};

int main()
{
	
Person person[5];
	
	for (int i=0;i<5;i++)
	{
	
  cin>>person[i].toes;
  cin>>person[i].knees;
  cin>>person[i].shoulder;
  cin>>person[i].head;
}
  for(int i=0;i<5;i++)
  {
  
  
  cout<<"Person number:"<<i+1;
  cout<<person[i].toes<<"\n";
  cout<<person[i].knees<<"\n";
  cout<<person[i].shoulder<<"\n";
  cout<<person[i].head<<"\n";
}
	return 0;
}
	
	
	
	
	
