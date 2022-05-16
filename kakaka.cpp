#include <iostream>
using namespace std;

int main() {
   int a, b, c, d, S;
   int k=0;
  while (k <2){
  cin >> a >> b >> c>> d;
    try {
    if ((a > 0 && b > 0 && c > 0 && d>0) && (a == b || a==c || a==d) &&) 
    {
      if (a != b) S = a*b;
      else S = a*c;
      if (k==0) cout << "Jonuko plotas " << S << endl;
      else cout << "Petriuko plotas " << S <<endl;
    } 
      else if (a == 0 || b == 0 || c== 0 || d==0) {
      throw 0;
    }
    else {
      if (a < 0) throw a;
      else if (b < 0) throw b;
      else throw c;
    }
  }
  catch (int x) {
    if (x == 0)
    {cout << "Klaida: nulinė kraštinė " << x << endl;break;}
    else {cout << "Klaida: neigiama kraštinė " << x << endl;break;}
  } k++;}
      
  return 0;
}
