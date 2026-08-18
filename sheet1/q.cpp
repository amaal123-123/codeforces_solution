#include <iostream>
 #include <cmath>
using namespace std;
int main() {
    double x,y;
    if(!(cin>>x>>y)){
        return 0;
    }
if (x==0&&y==0){
    cout <<"Origem"<<endl;
}
else if (y==0){
    cout <<"Eixo X"<<endl;
}
else if (x==0){
    cout <<"Eixo Y"<<endl;
}
 
else if (x>0&&y>0){
    cout <<"Q1";
}
else if (x<0&&y>0){
    cout <<"Q2";
}
else if (x<0&&y<0){
    cout<<"Q3";
 
}
else cout<<"Q4";
 return 0;
}
