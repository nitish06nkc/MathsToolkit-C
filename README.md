# 📐 MathsToolkit-C

> A comprehensive command-line mathematical toolkit written in C

**Developer:** Nitish Kumar Chaudhary

---

## 📖 About This Project

**MathsToolkit-C** is a modular, menu-driven **CLI toolkit** built in **C** that combines calculators, number/matrix/stats utilities, finance tools, converters, patterns, bitwise operations, and a history logger into one program.

Each feature is implemented in its own module (`*.c` + `*.h`), while `main.c` acts as the central menu controller.

---

## 🎯 Purpose

This project helps you:

- Run a wide set of **math + utility tools** from a single CLI program
- Use a **menu-based interface** to access different modules quickly
- Explore a **modular C codebase** where each domain is separated cleanly
- Keep a **history log** of operations and manage it from the menu

---

## ✨ Features (Main Menu)

- **Basic Calculator** — add/subtract/multiply/divide for multiple inputs  
- **Scientific Calculator** — powers/roots/logs/trig, degree↔radian, quadratic roots, nPr/nCr, modulus  
- **Number Operations** — prime tools, GCD/LCM, reverse/palindrome/armstrong, digits, factorial, fibonacci  
- **Matrix & Determinants** — matrix ops + symmetry checks + determinant  
- **Statistics Tools** — mean/median/mode/range/variance/std-dev  
- **Finance Kit** — interest, currency exchange, P/L, discount, salary, tax, GST, loan, SIP, FD/RD, inflation, retirement  
- **Conversion System** — unit converters + number system converters (bin/oct/dec/hex)  
- **Real World Utilities** — BMI, percentage, leap year, ASCII, time zone, age, date difference  
- **Patterns** — star patterns + number patterns (includes Pascal/Floyd)  
- **Bitwise Operations** — AND/OR/XOR/NOT, left/right shifts  
- **History** — view and clear stored history  

---

## 📁 Project Structure

```
MathsToolkit-C/program/
│
├── 📄 main.c
│
├── 🔢 Basic Calculator Module
│   ├── basic_ops.c
│   └── basic_ops.h
│
├── 🔬 Scientific Calculator Module
│   ├── scientific_ops.c
│   └── scientific_ops.h
│
├── 🔢 Number Operations Module
│   ├── number_ops.c
│   └── number_ops.h
│
├── 📊 Matrix Operations Module
│   ├── matrix_ops.c
│   └── matrix_ops.h
│
├── 📈 Statistics Module
│   ├── stats_ops.c
│   └── stats_ops.h
│
├── 💰 Finance Module
│   ├── financial_ops.c
│   └── financial_ops.h
│
├── 🔄 Converter Module
│   ├── converter_ops.c
│   └── converter_ops.h
│
├── 🌍 Real-World Utilities Module
│   ├── realworld_ops.c
│   └── realworld_ops.h
│
├── ⭐ Pattern Generator Module
│   ├── pattern_ops.c
│   └── pattern_ops.h
│
├── ⚡ Bitwise Operations Module
│   ├── bitwise_ops.c
│   └── bitwise_ops.h
│
├── 📝 History Module
│   ├── history_ops.c
│   └── history_ops.h
│
└── 📚 Documentation
    └── README.md
```

---

## 💻 Requirements

- **Compiler:** GCC / Clang / MinGW  
- **OS:** Linux / macOS / Windows  
- **Libraries:** Math library required (`-lm`)  
- **Tools:** `git` (for cloning)

---

## 🚀 Installation & Usage

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/nitish06nkc/MathsToolkit-C.git
cd MathsToolkit-C
```

### 2️⃣ Compile

**Linux / macOS**
```bash
gcc main.c basic_ops.c scientific_ops.c number_ops.c matrix_ops.c stats_ops.c financial_ops.c converter_ops.c realworld_ops.c pattern_ops.c bitwise_ops.c history_ops.c -o toolkit -lm
```

**Windows (MinGW)**
```cmd
gcc main.c basic_ops.c scientific_ops.c number_ops.c matrix_ops.c stats_ops.c financial_ops.c converter_ops.c realworld_ops.c pattern_ops.c bitwise_ops.c history_ops.c -o toolkit.exe -lm
```

### 3️⃣ Run

**Linux / macOS**
```bash
./toolkit
```

**Windows**
```cmd
toolkit.exe
```

### 4️⃣ Navigate the Menu
- Enter your name when prompted
- Choose options **1–11** for modules
- Use **Back** options inside sub-menus to return
- Choose **12** to exit

---

## 🤝 Contributing

1. Fork the repository (GitHub UI)
2. Create a new branch:
   ```bash
   git checkout -b feature/my-change
   ```
3. Commit and push:
   ```bash
   git add .
   git commit -m "Describe the change"
   git push origin feature/my-change
   ```
4. Open a Pull Request

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

---

If you find this project helpful, consider giving it a ⭐ on GitHub.  
**Made with ❤️ by Nitish Kumar Chaudhary (NKC)**

*Last Updated: FEBRUARY 2025*

