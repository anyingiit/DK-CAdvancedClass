<!-- Source: Best-README-Template BLANK_README (Unlicense) — https://github.com/othneildrew/Best-README-Template -->
<a id="readme-top"></a>

# DK CAdvancedClass

Coursework from a 2021 C and C++ class: one small program per exercise date, plus a hand-written dynamic array template that one of the programs is built on.

**English** · [简体中文](README.zh-CN.md)

[![CI](https://github.com/anyingiit/DK-CAdvancedClass/actions/workflows/ci.yml/badge.svg)](https://github.com/anyingiit/DK-CAdvancedClass/actions/workflows/ci.yml)
[![License](https://img.shields.io/github/license/anyingiit/DK-CAdvancedClass)](LICENSE)

[Report a bug](https://github.com/anyingiit/DK-CAdvancedClass/issues/new?template=bug_report.yml) · [Request a feature](https://github.com/anyingiit/DK-CAdvancedClass/issues/new?template=feature_request.yml)

<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#about-the-project">About The Project</a></li>
    <li><a href="#getting-started">Getting Started</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>

## About The Project

This repository holds one C or C++ file per exercise, grouped into folders named for the date each assignment was given (`src/2021-3-8/` through `src/2021-3-18/`); most programs read from standard input and print a computed result, such as counting character classes, summing squared digits, or drawing a triangle of asterisks. `src/tool/MyArray.h` and `src/tool/LinkedList.h` are two container templates written from scratch; only `MyArray.h` is currently included by an exercise, `src/2021-3-15/Q4.cpp`'s search for the perfect numbers below 1000. `CMakeLists.txt` defines build targets for eight of these programs — `src/2021-3-18/Q2.cpp` is an empty stub with no `main` and has no working target.

See the [open issues](https://github.com/anyingiit/DK-CAdvancedClass/issues) for planned features and known issues.

## Getting Started

### Prerequisites

- CMake 3.17 or newer and a C++20 compiler (GCC or Clang), the floor `CMakeLists.txt` declares
- A C compiler for `src/2021-3-12/Q1.c`, which is not wired into `CMakeLists.txt` and must be compiled directly

### Installation

```sh
git clone https://github.com/anyingiit/DK-CAdvancedClass.git
cd DK-CAdvancedClass
cmake -S . -B build
cmake --build build --target Q1_doubleDimensionalArray Q2_functionAbout Q3_pointerAbout Q1 Q3 Q3Test Q4 Q5
```

`Q2` (`src/2021-3-18/Q2.cpp`) is left out of the target list above because that file has no `main` and cannot link.

## Usage

Most of the built programs read values from standard input; `Q4` needs none and prints its result immediately:

```sh
./build/Q4
```

This runs `src/2021-3-15/Q4.cpp`, which lists every perfect number from 1 to 1000 together with the divisors that sum to it.

## Contributing

Contributions are welcome. Read [CONTRIBUTING.md](CONTRIBUTING.md) for how to open an issue or a pull request, and [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) for the standards expected of everyone taking part.

Please do not report security issues in public issues or pull requests. [SECURITY.md](SECURITY.md) explains how to report them privately.

## License

Distributed under the MIT License. See [LICENSE](LICENSE) for details.

## Contact

Project link: [https://github.com/anyingiit/DK-CAdvancedClass](https://github.com/anyingiit/DK-CAdvancedClass)

<p align="right">(<a href="#readme-top">back to top</a>)</p>
