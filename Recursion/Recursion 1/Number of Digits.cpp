#include<iostream>
using namespace std;

int count(int n){
    if(n==0){
        return 0;
    }
    int output = count(n/10);
    return 1+output;
}

int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}
