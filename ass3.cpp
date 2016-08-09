#include<stdio.h>
#include<iostream>
using namespace std;


struct var
{
	int vsize;
	char v[50];
}var[100];

int main(void)
{

int p,j,i,k;

cout<<"\nEnter number of pridicates\t";
cin>>p;
int pele[p];

for(i=0;i<p;i++)
{
	cout<<"\n NO. of variables for P "<<i+1<<" \t";
	cin>>pele[i];
	var[i].vsize=pele[i];
	for(j=0;j<var[i].vsize;j++)
	{	cout<<"\nvariable "<<j+1<<"\t";
		cin>>var[i].v[j];
		
	}
}

cout<<"\nInitially";
for(i=0;i<p;i++)
{	cout<<"\nFor P "<<i+1<<"\n";
	for(j=0;j<var[i].vsize;j++)
	{
		cout<<" "<<var[i].v[j];
	}
}



for(i=0;i<p;i++)
{
	for(j=0;j<p;j++)
	{
		if(var[i].vsize==var[j].vsize)
		{	int test=0,capture;
			for(k=0;k<var[j].vsize;k++)
			{
				if(var[i].v[k]!=var[j].v[k])
				{
					test=test+1;
					capture=k;
				}							
			}	
			
			if(test==1)
			{
			var[j].v[capture]=var[i].v[capture];
			}		
		}
		
	}

}


cout<<"\nAFTER UNIFICATION";

for(i=0;i<p;i++)
{	cout<<"\nFor P "<<i+1<<"\n";
	for(j=0;j<var[i].vsize;j++)
	{
		cout<<" "<<var[i].v[j];
	}
}

}
