## Goal

simple script in c++ that generate a random euromillion ticket, 
create a random tirrage, and if the tirrage and the ticket are equal, print the number of try.


## CMake starter

Minimal CMake example, the only dependency is cmake

Project structure

```sh
├── CMakeLists.txt
├── my_euroMillion
├── build
│   ├── ...
│   ├── Makefile
│   ├── bin
│   │   └── my_euroMillion
│   └── lib
│       └── libWorld.dylib
├── include
│   └── project
│       └── euroMillion.hpp
└── src
    ├── euroMillion.cpp
    └── main.cpp
```

- `./include/project` contains headers used in the library
- `./src/` contains header implementation and additional source files to create the executable

### Usage

```sh
mkdir build
cd build
cmake ..
make
cd ..
./my_euroMillion number_of_try
```

