#include<iostream>
using namespace std;

int main(){
    int Even_number = 0 ;
    int Odd_number = 0 ;
    int N = 1 ;
    while (N!=0){
        cout << "Enter an integer: ";
        cin >> N;
        if (N!=0){
            if(N%2==0){
                Even_number+=1;
            }
            else{
                Odd_number+=1;
            }   
        }        
    }
    cout << "#Even numbers = "<<Even_number<<"\n";
    cout << "#Odd numbers = "<<Odd_number<<"\n";
    return 0;
}
