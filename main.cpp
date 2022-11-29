/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <random>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int a,b,c,d,e,f,g,h;
    cout<<"pls type how many times u want to roll: ";
    cin>>f;
    for (int i=0;i<f;i++){
    b=rand()%5;
        if (b==4){
            c=rand()%5;
            if (c==4){
                d=rand()%5;
                if (d==4){
                    e=rand()%10;
                    if (e>5){
                        cout<<"fucking gold";}
                    else{
                        cout<<"red";
                    }
                    }
                else{
                    cout<<"purple";
                }
                }
                else{
                    cout<<"pink";
                }
        }
        else{
            cout<<"blue";
        }
    a=rand()%9;
    if (a==0){
        cout<<" startrack"<<endl;
    }
    else{
        cout<<endl;
    }
  }
  cout<<"establish cost for key "<<2.5*f<<" USD"<<endl;
}

    