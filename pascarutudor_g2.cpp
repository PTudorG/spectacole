#include<fstream>
#include<iostream>
using namespace std;
float M[100][2];
int n,k,g,aux,nr[100];

int read_data()
{fstream f;
f.open("inputs.dat",ios::in);
f>>n;
f>>k;
for (int i=0;i<n;i++)
{nr[i]=i+1;
for (int j=0;j<=1;j++)
f>>M[i][j];
M[i][1]=M[i][1]+(k/100.0);
if(M[i][1]-int(M[i][1])>=0.6)
{M[i][1]=M[i][1]+1;
M[i][1]=M[i][1]-0.6;}}}

int sort_data()
{do{g=0;
   for(int i=0;i<n-1;i++)
       if(M[nr[i]][1]>M[nr[i+1]][1])
         {aux=nr[i];
          nr[i]=nr[i+1];
          nr[i+1]=aux;g=1;}}
    while(g!=0);}

float spectacole()
{int ultimul=0;
for (int i=1;i<n;i++)
if (M[nr[i]][0]>=M[nr[ultimul]][1])
{cout<<nr[i]+1<<" ";
ultimul=i;}}


int main()
{read_data();
sort_data();
spectacole();
return 0;}
