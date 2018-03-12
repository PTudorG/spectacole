#include<fstream>
#include<iostream>
using namespace std;
float M[100][2];
int n,k,g,aux;

int read_data()
{fstream f;
f.open("inputs.dat",ios::in);
f>>n;
f>>k;
for (int i=1;i<=n;i++)
{for (int j=1;j<=2;j++)
f>>M[i][j];
M[i][2]=M[i][2]+(k/100.0);
if(M[i][2]-int(M[i][2])>=0.6)
{M[i][2]=M[i][2]+1;
M[i][2]=M[i][2]-0.6;}}}

int sort_data()
{do{g=0;
   for(int i=1;i<=n-1;i++)
       if(M[i][2]>M[i+1][2])
         {aux=M[i][2];
          M[i][2]=M[i+1][2];
          M[i+1][2]=aux;g=1;}}
    while(g!=0);}

float spectacole()
{for (int ultimul=0,i=1;i<n;i++)
if (M[i][1]>=M[ultimul][2])
{cout<<i+1<<" ";
ultimul=i;}}


int main()
{read_data();
sort_data();
spectacole();
return 0;}
