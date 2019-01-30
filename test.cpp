#include<iostream>
#include<string>
#include<memory>

using namespace std;

/*
int* test(){
  return make_shared<int>(1);
}
*/

shared_ptr<int> test(){
  return make_shared<int>(1);
}

template<typename T> void print(const T&t){
  cout << t << endl;
}
  
template<typename T, typename... Y> void print(const T& first, Y... y){
  cout << first << " ";
  print(y...);
}


int main(){
  test();
}
