# include <iostream>
using namespace std;

int main() {

  char op;
 float a,b;

  cout << "Choose the operation : +, -, *, /: ";
  cin >> op;

  cout << "Enter Numbers repectively: ";
  cin >> a >> b;

  switch(op) {

    case '+':
      cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;

    case '/':
      if( b != 0){
      cout << a << " / " << b << " = " << a / b;}
      else{
        cout << "Divison by zero is not allowed:" << endl;
      }
      break;

    default:
      cout << "Error! Operation is not valid:";
      break;
  }

  return 0;
}