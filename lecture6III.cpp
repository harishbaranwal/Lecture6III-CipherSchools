#include <iostream>
using namespace std;

int main(){

    // printing till 100 using while loop.

    // int i=1;
    // while (i<101)
    // {
    //     cout << i << " ";
    //     i++;
    // }
    
    // guess the number 65 the user has 100 chance.

    int i=100;
    int input;
    for(i=1;i<101;i++){
        cin >> input;
        if(input == 65){
            cout << "congrats you have guessed correct";
            break;        
        }
    }


    return 0;
}
