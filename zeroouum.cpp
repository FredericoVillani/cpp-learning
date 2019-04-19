#include <iostream>

using namespace std;

int main(){
int A, B, C;
cin >> A >> B >> C;
//>> B >> C;
/*if (A == B and B == C and A ==  C){
    cout << "*";
}
else if(A == B and A != C and B != C){
    cout << "C";
    }
else if(A == C and A != B and C != B){
    cout << "B";
}
else //if(B == C and B!= A and C!= A)
    {
    cout << "A";
    }
//else{
  //  return 0;
  */
  if(A==B){
   if(B == C){
    cout << "*";
   }
   if(B != C){
    cout << "C";
   }
  }
    else if(A != B){
    if(B == C){
        cout << "A";
    }
    if(B != C){
        cout << "B";
    }

  }
}
