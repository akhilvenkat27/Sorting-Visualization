
#include <bits/stdc++.h>
using namespace std;
void display(vector<int>v,int maxe,int n)
{
  vector<vector<char>>str1;
  vector<char>s;
  long long int i,j,k,l,m;
  for(i=0;i<n;i++)
   {
     for(j=0;j<v[i];j++)
       s.push_back('|');
    for(j=v[i];j<maxe;j++)
       s.push_back(' ');
     reverse(s.begin(),s.end());
     str1.push_back(s);
     s.clear();
   }
   for(i=0;i<maxe;i++)
   {
     for(j=0;j<maxe;j++)
       s.push_back(' ');
     reverse(s.begin(),s.end());
     str1.push_back(s);
     s.clear();
   }
  
  for(i=0;i<maxe;i++)
   {
     for(j=0;j<maxe;j++)
     {
       cout<<str1[j][i]<<" ";
     }
     cout<<endl;
   }
   cout<<endl;
   str1.clear();
}
int main()
{
  cout<<"THIS IS THE INTERPRETATION OF INSERTION SORT"<<endl;
  long long int i,j,k,l,m,temp,n;
  vector<int>v;
  cout<<"enter the size"<<endl;
  cin>>n;
  cout<<"enter the values "<<endl;
  for(i=0;i<n;i++)
  {
    cin>>m;
    v.push_back(m);
  }
  int maxe=*max_element(v.begin(),v.end());
  cout<<endl;
  for(i=0;i<n;i++)
  {
      long long int min=i,des=i;
      for(j=i+1;j<n;j++)
      {
          if(v[j]<v[des])
          des=j;
      }
      swap(v[i],v[des]);
      display(v,maxe,n);
  }
}
