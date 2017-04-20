#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    
    double buffer[128*1024];
    
    double n;

    int index = 0;
    
    while(cin>>n) {

          buffer[index++] = n;
    }
    
    for(;--index>=0;) 

        cout<<setprecision(4)<<fixed<<sqrt(buffer[index])<<endl;
    
    return 0;
}