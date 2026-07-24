## qn: how does c++ work? such that q1.cpp is able to get function declaraiton from io.cpp?

### ans: q1.cpp does not directly get the function declaration from io.cpp. Instead, both files include the declaration from io.h, and the linker later connects the function call to the definition in io.cpp.

1. Seperate compilation

```
g++ q1.cpp io.cpp -o main
```

the compiler treats the .cpp file seperately

```
q1.cpp → q1 object code
io.cpp → io object code
```

```
#include 'io.h' 
```

includes forward declaration and helps to compiler to identify functions, and allow the code to first compile

1. Linking

The linker combines the compiled files:

```
q1 object code + io object code → executable named main
```

If only q1.cpp is compiled `g++ q1.cpp -o main` compilation understands the declaration, but linking fails because no definition was provided. You would get an error similar to: undefined reference to `readNumber()`

The complete relationship is:

```
                     declaration
                    ┌────────────┐
                    │    io.h    │
                    └─────┬──────┘
                          │ included by
                 ┌────────┴────────┐
                 ▼                 ▼
              q1.cpp             io.cpp
          calls function      defines function
                 │                 │
                 ▼                 ▼
              q1.o               io.o
                 └────────┬────────┘
                          ▼
                        linker
                          │
                          ▼
                        main
```

