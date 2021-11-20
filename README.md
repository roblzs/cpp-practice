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

### Lesson1

```cpp 
#include <library_name>
```
This imports library or package that can be accessed and used in code.

```cpp
using namespace std;
```
namespace is a declarative region that provides a scope to the indentifiers (the names of types, functions, variables, etc) inside it.

If this line is included, I don't have to reference std:: before a function call

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
