#include<iostream>
using namespace std;
int countSetBits(int n)
{
int count=0;
while(n)
{
int p= n&(-n);
n=n-p;
count++;
}
return count;
}

int main()
{
int n;
cin>>n;
int count=countSetBits(n);
cout<<count;
return 0;
}
