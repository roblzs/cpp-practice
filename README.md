# cpp-practice
💡 C++ practice

## Compile
```
g++ -o runProgram
```

## Run
```
.\runProgram
```

## What I learned

Import library or package that can be accessed and used in code.

```cpp 
#include <library_name>
```

namespace is a declarative region that provides a scope to the indentifiers (the names of types, functions, variables, etc) inside it.

If this line is included, I don't have to reference std:: before a function call

```cpp
using namespace std;
```

std = standart

cout = character output

This line finds namespace in <iostream> library with a name of std and selects a function cout:
```cpp
std::cout << "Hello World!"
```

main() is important function that executes when the app starts. If there is no main() functions, the app will fail
```cpp
int main() {
    
}
```

Before writing function name there is a variable type that the function is going to return. In this case 💼 there should be a number/integer returned.
```cpp
int main() {
    return 0;
}
```

To get to the next line in console there can be a escape character \n or endl after the writeable string

endl = end line (a cleaner way to get to the next line in console)

```cpp
cout << "Hello World!\n";
cout << "Hello World!" << endl;
```

Define two variables with the same data type

```cpp
int x, y;

x = 5;
y = 6;
```

data types with const before them can't be changed

```cpp
const int number = 5;
```

get input data

cin = character input
```cpp
int n;

cin >> n;
```

clear cin error from console
```cpp
int n;

cin >> n;
cin.clear();
cin.ignore(1000, '\n');

cout << n;
```

## Data types

```cpp
int x = 10;
float y = 3.6;
bool is_true = true;
string hello = "Hello";
char h = 'h'; // a single character in between single quotation marks ('')
```

To use string data type, string library must be imported

```cpp
#include <string>
```

## Variable naming rules:

* must be unique
* can't contain any special characters besides _
* can't start with number
* should be descriptive