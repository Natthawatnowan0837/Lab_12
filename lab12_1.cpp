#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9 ;
    string y ;
    if(x == 0)
    {
        y = "A";
    }if(x == 1)
    {
        y = "B+";
    }if(x == 2)
    {
        y = "B";
    }if(x == 3)
    {
        y = "C+";
    }if(x == 4)
    {
        y = "C";
    }if(x == 5)
    {
        y = "D+";
    }if(x == 6)
    {
        y = "D";
    }if(x == 7)
    {
        y = "F";
    }if(x == 8)
    {
        y = "W";
    }
    
    cout << "You will get " <<y <<" in this 261102.";
}