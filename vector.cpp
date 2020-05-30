#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(12);
  cout<<"Size of the vector: "<<v.size();
 // v.clear();   for clear the vector

  vector<int>::iterator itr=v.begin();    //itr is a pointer

    //cout<<*(itr+0); accessing on index based
cout<<endl<<"Iteratting from begining";  
 while(itr!=v.end()){
   cout<<endl<<"value=> "<<*itr;
    itr++;
  }
cout<<endl<<v.max_size();
  


return 0;
}