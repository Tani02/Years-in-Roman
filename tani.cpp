#include < constream.h >
#include < conio.h >

  void main() {
    clrscr();
    char input[4];
    cout << "Enter year: ";
    cin >> input;

    switch (input[0]) {
    case '1':
      cout << "m";
      break;
    case '2':
      cout << "mm";
      break;
    case '3':
      cout << "mmm";
      break;
    case '4':
      cout << "mmmm";
      break;
    case '5':
      cout << "v";
      break;
    case '6':
      cout << "vm";
      break;
    case '7':
      cout << "vmm";
      break;
    case '8':
      cout << "vmmm";
      break;
    case '9':
      cout << "vmmmm";
      break;
    }

    switch (input[1]) {
    case '1':
      cout << "c";
      break;
    case '2':
      cout << "cc";
      break;
    case '3':
      cout << "ccc";
      break;
    case '4':
      cout << "cccc";
      break;
    case '5':
      cout << "d";
      break;
    case '6':
      cout << "dc";
      break;
    case '7':
      cout << "dcc";
      break;
    case '8':
      cout << "dccc";
      break;
    case '9':
      cout << "dcccc";
      break;
    }

    switch (input[2]) {
    case '1':
      cout << "x";
      break;
    case '2':
      cout << "xx";
      break;
    case '3':
      cout << "xxx";
      break;
    case '4':
      cout << "xxxx";
      break;
    case '5':
      cout << "l";
      break;
    case '6':
      cout << "lx";
      break;
    case '7':
      cout << "lxx";
      break;
    case '8':
      cout << "lxxx";
      break;
    case '9':
      cout << "lxxxx";
      break;
    }

    switch (input[3]) {
    case '1':
      cout << "i";
      break;
    case '2':
      cout << "ii";
      break;
    case '3':
      cout << "iii";
      break;
    case '4':
      cout << "iiii";
      break;
    case '5':
      cout << "v";
      break;
    case '6':
      cout << "vi";
      break;
    case '7':
      cout << "vii";
      break;
    case '8':
      cout << "viii";
      break;
    case '9':
      cout << "viiii";
      break;
    }

    getch();
  }
