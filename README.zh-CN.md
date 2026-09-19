[English](README.md) · **简体中文**

> 英文版是规范版本。本页与 [README.md](README.md) 不一致时，以英文版为准。

<!-- translation-of: README.md sha256:88a4ce42de8146c2 -->

<!-- Source: Best-README-Template BLANK_README (Unlicense) — https://github.com/othneildrew/Best-README-Template -->
<a id="readme-top"></a>

# DK CAdvancedClass

2021 年一门 C/C++ 课程的作业：每次练习对应一个小程序，此外还有一个手写的动态数组模板，其中一个练习程序就建立在它之上。

[![CI](https://github.com/anyingiit/DK-CAdvancedClass/actions/workflows/ci.yml/badge.svg)](https://github.com/anyingiit/DK-CAdvancedClass/actions/workflows/ci.yml)
[![License](https://img.shields.io/github/license/anyingiit/DK-CAdvancedClass)](LICENSE)

[报告问题](https://github.com/anyingiit/DK-CAdvancedClass/issues/new?template=bug_report.yml) · [提出需求](https://github.com/anyingiit/DK-CAdvancedClass/issues/new?template=feature_request.yml)

<details>
  <summary>目录</summary>
  <ol>
    <li><a href="#about-the-project">关于本项目</a></li>
    <li><a href="#getting-started">开始使用</a></li>
    <li><a href="#usage">用法</a></li>
    <li><a href="#contributing">参与贡献</a></li>
    <li><a href="#license">许可证</a></li>
    <li><a href="#contact">联系方式</a></li>
  </ol>
</details>

## 关于本项目

本仓库每个练习对应一个 C 或 C++ 文件，按布置日期分目录存放（`src/2021-3-8/` 到 `src/2021-3-18/`）；大多数程序从标准输入读取数据并打印计算结果，例如统计字符类型、求各位数字的平方和，或打印一个由星号组成的三角形。`src/tool/MyArray.h` 和 `src/tool/LinkedList.h` 是两个从零手写的容器模板；目前只有 `MyArray.h` 被某个练习引用，即 `src/2021-3-15/Q4.cpp` 中对 1000 以内完全数的查找。`CMakeLists.txt` 为其中八个程序定义了构建目标——`src/2021-3-18/Q2.cpp` 是一个没有 `main` 函数的空文件，没有对应的可构建目标。

计划中的功能与已知问题，见 [open issues](https://github.com/anyingiit/DK-CAdvancedClass/issues)。

## 开始使用

### 环境要求

- CMake 3.17 或更高版本，以及支持 C++20 的编译器（GCC 或 Clang），这是 `CMakeLists.txt` 声明的下限
- 编译 `src/2021-3-12/Q1.c` 还需要一个 C 编译器，因为该文件未被纳入 `CMakeLists.txt`，须单独编译

### 安装

```sh
git clone https://github.com/anyingiit/DK-CAdvancedClass.git
cd DK-CAdvancedClass
cmake -S . -B build
cmake --build build --target Q1_doubleDimensionalArray Q2_functionAbout Q3_pointerAbout Q1 Q3 Q3Test Q4 Q5
```

上面的目标列表中没有包含 `Q2`（`src/2021-3-18/Q2.cpp`），因为该文件没有 `main` 函数，无法完成链接。

## 用法

大多数已构建的程序都会从标准输入读取数据；`Q4` 不需要任何输入，运行后立即打印结果：

```sh
./build/Q4
```

这会运行 `src/2021-3-15/Q4.cpp`，它会列出 1 到 1000 之间的每一个完全数，以及能加总得到该数的所有因子。

## 参与贡献

欢迎参与。[CONTRIBUTING.md](CONTRIBUTING.md) 说明如何提交 issue 或 pull request，[CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) 说明对所有参与者的行为要求。

请不要在公开的 issue 或 pull request 中报告安全问题。[SECURITY.md](SECURITY.md) 说明了私下报告的方式。

## 许可证

以 MIT 许可证分发。详见 [LICENSE](LICENSE)。

## 联系方式

项目地址：[https://github.com/anyingiit/DK-CAdvancedClass](https://github.com/anyingiit/DK-CAdvancedClass)

<p align="right">(<a href="#readme-top">back to top</a>)</p>
