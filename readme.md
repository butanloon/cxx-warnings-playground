## Introduction

This repository is a playground for experimenting with different build configurations related to warnings.

## Acknowledgement

Sincere thanks for Sir Jonathan Müller for writing the blog. This is work is based on the article "[Tutorial: Managing Compiler Warnings with CMake](https://www.foonathan.net/2018/10/cmake-warnings/)"

## Description

### Dependency graph

`my-lib`

|-> `not-my-lib`

|-> `not-my-lib-header-only`

### Current behaviour

- Warnings from the header file of the "external" shared (should work for a static too) library (`not-my-lib`) were generated when building it but not when building the library (`my-lib`) which depends on it.
- Warnings from the header file of the "external" header only library (`not-my-lib`) were generated when building the special test target but not when building the library (`my-lib`) which depends on it.
- Warnings from the header file of the "external" header only library (`not-my-lib`) were generated when building the usual tests too, this behaviour can be changed.

### Build

```bash
mkdir build && cd build
cmake ..
cmake --build .
```

## Note

Please, do not use this as is
