<div align="center">

# 📚 Libft

### *Reimplementing the C Standard Library — One Function at a Time*

[![42 School](https://img.shields.io/badge/42-Paris-000000?style=for-the-badge&logo=42&logoColor=white)](https://42.fr/)
[![Language](https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Build](https://img.shields.io/badge/Build-Make-427819?style=for-the-badge&logo=gnu&logoColor=white)](https://www.gnu.org/software/make/)
[![Norm](https://img.shields.io/badge/Norm-42-blueviolet?style=for-the-badge)](https://github.com/42School/norminette)

---

*A handcrafted C library — part recreation of `libc`, part custom toolkit — built from the ground up as the foundation of the 42 Paris curriculum.*

</div>

---

## 🧭 Overview

**Libft** is the cornerstone project of the 42 Paris cursus. The mission: rebuild a curated set of standard C library functions from scratch, then extend them with custom utilities that will be reused throughout every subsequent project.

This isn't about reinventing the wheel — it's about understanding *exactly* how the wheel turns. By reimplementing functions like `strlen`, `memcpy`, and `atoi` byte-by-byte, the project demystifies what happens beneath the surface: how memory is allocated, how pointers traverse it, and how the abstractions we take for granted are actually built.

> 💡 **Philosophy:** *You can't truly use a tool until you've forged it yourself.*

---

## 🎯 Project Goals

| Pillar | What You Learn |
|--------|---------------|
| 🔧 **Memory Management** | Manual allocation, deallocation, and pointer arithmetic |
| 📐 **Low-Level C** | How standard functions are implemented under the hood |
| 🧩 **Modularity** | Building reusable, well-tested components |
| 📏 **42 Norm** | Strict adherence to the school's coding standard |
| 🔗 **Linked Lists** | Bonus: dynamic data structures from scratch |

---

## ⚙️ Prerequisites

Before building the library, make sure your environment is ready:

| Requirement | Purpose |
|-------------|---------|
| **GCC** or **Clang** | C compiler |
| **GNU Make** | Build automation via the `Makefile` |
| **Git** | Repository cloning and version control |
| **Unix-like OS** | Linux or macOS (Windows users: use **WSL**) |

Verify your installation:

```bash
gcc --version
make --version
git --version
```

---

## 🚀 Getting Started

### 1. Clone the repository

```bash
git clone <repository-url> libft
cd libft
```

### 2. Build the library

| Command | Action |
|---------|--------|
| `make` | Compiles the library → produces `libft.a` |
| `make clean` | Removes object files (`.o`) |
| `make fclean` | Removes object files **and** `libft.a` |
| `make re` | Full rebuild (`fclean` + `make`) |

### 3. Use it in your project

Include the header in your source code:

```c
#include "libft.h"
```

Then compile and link against the static library:

```bash
cc your_file.c -L. -lft -o your_program
```

---

## 📖 Resources

A curated list of references that supported this build:

- 🐍 **[Python Tutor](https://pythontutor.com/)** — Step-by-step visualization of code execution. Invaluable for grasping pointers and memory layout.
- 📘 **[Koor.fr — C String Functions](https://koor.fr/C/cstring/strchr.wp)** — Reference documentation for `libc` string operations.
- 🛠️ **[Makefile Tutorial](https://makefiletutorial.com/)** — A clear, modern guide to writing effective Makefiles.
- 📚 **[TutorialsPoint — C](https://www.tutorialspoint.com/)** — General C reference, particularly strong on linked lists.
- 🎥 **[CS50](https://cs50.harvard.edu/)** — Foundational computer science and C programming videos.
- 📄 **42 Paris Subject PDF** — Official project requirements and Norm rules.

---

## 🤖 A Note on AI Usage

AI was used as a **learning aid**, not a code generator. Specifically, it helped:

- ✍️ Refine the wording of this README and clarify the project's motivation
- 💭 Explain edge cases and reinforce conceptual understanding

> ✅ **Every line of implementation code in this library was written by hand.**
> The goal of Libft is to learn — and shortcuts defeat the purpose.

---

<div align="center">

### *Built with ☕, late nights, and a healthy respect for `valgrind`.*

**42 Paris** • Crafted by **bbk**

</div>
