# CMake/GoogleTest/Boost C++ Project Template

### Division with a remainder library

Do you need a starting C++ project that supports:
* Visual Studio Code
* CMake
* Local simple static template library
* Google Tests
* boost library

## Usage

### Prerequisites

You will need:

 * A modern C/C++ compiler
 * CMake 3.1+ installed (on a Mac, run `brew install cmake`)
 * If you prefer to code in a great IDE, I highly recommend [Jetbrains CLion](https://www.jetbrains.com/clion/). It is fully compatible with this project.

### Building The Project

#### Git Clone

First we need to check out the git repo:

```bash
❯ mkdir ~/workspace
❯ cd ~/workspace
❯ git clone \
    https://github.com/drxaero/CppTemplate \
    my-project
❯ cd my-project
```

#### Project Structure

There are three empty folders: `lib`, `bin`, and `include`. Those are populated by `make install`.

The rest should be obvious: `src` is the sources, and `test` is where we put our unit tests.

Now we can build this project, and below we show three separate ways to do so.

#### Building Manually

```bash
❯ rm -rf build && mkdir build
❯ git submodule init && git submodule update
❯ cd build
❯ cmake ..
❯ make && make install
❯ cd ..
```


#### Running the tests

```bash
❯ bin/my_proj_tests
[==========] Running 5 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 5 tests from DividerTest
[ RUN      ] DividerTest.5_DivideBy_2
[       OK ] DividerTest.5_DivideBy_2 (1 ms)
[ RUN      ] DividerTest.9_DivideBy_3
[       OK ] DividerTest.9_DivideBy_3 (0 ms)
[ RUN      ] DividerTest.17_DivideBy_19
[       OK ] DividerTest.17_DivideBy_19 (0 ms)
[ RUN      ] DividerTest.Long_DivideBy_Long
[       OK ] DividerTest.Long_DivideBy_Long (0 ms)
[ RUN      ] DividerTest.DivisionByZero
[       OK ] DividerTest.DivisionByZero (0 ms)
[----------] 5 tests from DividerTest (1 ms total)

[----------] Global test environment tear-down
[==========] 5 tests from 1 test case ran. (1 ms total)
[  PASSED  ] 5 tests.
```

#### Running the CLI Executable

Without arguments, it prints out its usage:

```bash
❯ bin/my_proj
```

### License

&copy; 2023 Janus Cheng.

Open sourced under MIT license, the terms of which can be read here — [MIT License](http://opensource.org/licenses/MIT).

