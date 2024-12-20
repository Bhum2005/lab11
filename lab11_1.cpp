// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    cout << "Press Enter 3 times to reveal your future.";
    for (int i = 0; i < 3; i++) {
        cin.ignore();
    }
    srand(time(0));
    int randnumber=rand()%9+1;
    if(randnumber==1){
        cout << "You will get A in this 261102.";
    }
    else if(randnumber==2){
        cout << "You will get B in this 261102.";
    }
    else if(randnumber==3){
        cout << "You will get C+ in this 261102.";
    }
    else if(randnumber==4){
        cout << "You will get C in this 261102.";
    }
    else if(randnumber==5){
        cout << "You will get D+ in this 261102.";
    }
    else if(randnumber==6){
        cout << "You will get D in this 261102.";
    }
    else if(randnumber==7){
        cout << "You will get F in this 261102.";
    }
    else if(randnumber==8){
        cout << "You will get W in this 261102.";
    }
    else if(randnumber==9){
        cout << "You will get B+ in this 261102.";
    }
    
}