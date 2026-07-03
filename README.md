# Linux Mini Project - Implement a Make Command

## 📌 Project Overview

This project implements a simple version of the Linux `make` command using the C programming language.

The program reads a `Makefile`, identifies the specified target, and executes the corresponding commands using the `system()` library function.

---

## 🎯 Objectives

- Understand how the Linux `make` command works.
- Read and parse a Makefile.
- Execute commands using the `system()` function.
- Implement a basic custom make utility (`mymake`).

---

## 🛠️ Technologies Used

- C Programming
- Ubuntu (WSL)
- GCC Compiler
- GNU Make
- Visual Studio Code
- Git & GitHub

---

## 📁 Project Structure

```
MiniProject/
│── Makefile
│── main.c
│── mymake.c
│── README.md
```

---

## ⚙️ Compilation

Compile the custom make program:

```bash
gcc mymake.c -o mymake
```

---

## 🚀 Usage

Compile the project:

```bash
./mymake
```

Run the executable:

```bash
./mymake run
```

Clean generated files:

```bash
./mymake clean
```

---

## 📄 Sample Makefile

```make
all:
	gcc main.c -o main

run:
	./main

clean:
	rm -f main
```

---

## 📷 Sample Output

### Compile

```bash
$ ./mymake
Executing: gcc main.c -o main
```

### Run

```bash
$ ./mymake run
Executing: ./main
Hello Jarvis!
```

### Clean

```bash
$ ./mymake clean
Executing: rm -f main
```

---

## 📚 Concepts Used

- File Handling (`fopen`, `fgets`, `fclose`)
- String Functions (`strcmp`, `strcpy`, `sscanf`)
- Command Line Arguments
- `system()` Function
- Makefile Parsing

---

## 👨‍💻 Author

**Vikas**

B.E. Electrical and Electronics Engineering (EEE)

---

## 📜 License

This project is created for educational and learning purposes.
