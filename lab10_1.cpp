#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    string blank = "" , grade = "";
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    getline(cin,blank);
    getline(cin,blank);
    getline(cin,blank);
    int x = rand()%9;
    if(x == 0) grade = "A";
    if(x == 1) grade = "B+";
    if(x == 2) grade = "B";
    if(x == 3) grade = "C+";
    if(x == 4) grade = "C";
    if(x == 5) grade = "D+";
    if(x == 6) grade = "D";
    if(x == 7) grade = "F";
    if(x == 8) grade = "W";
    cout << "You will get " << grade << " in this 261102."; 



    return 0;
}