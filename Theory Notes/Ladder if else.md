

# 🧮 **C Program: Ladder If-Else (Multiple Conditions)**

### 📌 Topics: `if-else`, Logical Operators, Decision Making

---

## 🧠 **Objective**

1. Find the **maximum number** among four numbers using `if-else if` ladder.
2. Determine whether a number is **positive, negative, or neutral**.

---

## 📘 **Code: Ladder If-Else for Max and Sign Check**

```c
#include <stdio.h>
#include <conio.h>

void main()
{
    // 🌟 Find the maximum among four numbers
    int a = 10, b = 30, c = 20, d = 40;

    if (a > b && a > c && a > d) {
        printf("a is max!\n");
    }
    else if (b > a && b > c && b > d) {
        printf("b is max!\n");
    }
    else if (c > a && c > b && c > d) {
        printf("c is max!\n");
    }
    else if (d > a && d > b && d > c) {
        printf("d is max!\n");
    }

    // 🧭 Check whether a number is positive, negative, or neutral
    int x = 0;
    
    if (x > 0) {
        printf("Number is positive!\n");
    }
    else if (x < 0) {
        printf("Number is negative!\n");
    }
    else {
        printf("Number is neutral!\n");
    }

    getch(); // To hold screen (Turbo C)
}
```

---

## 💡 **Explanation**

### ✅ Max among 4 values using:

```c
if (a > b && a > c && a > d)
```

This ensures `a` is greater than all others.

### ✅ Sign of a number:

```c
if (x > 0) → Positive  
else if (x < 0) → Negative  
else → Neutral (Zero)
```

---

## 🎯 **Real-Life Analogy**

### 🏆 Finding the Topper:

You're comparing marks of 4 students:

* Whoever has marks greater than **all others** is declared "Topper".

### 📈 Temperature Check:

If today’s temperature is:

* `> 0` → it's **warm**
* `< 0` → it's **cold**
* `= 0` → it's **perfectly neutral**

---

## 🧾 **Key Concepts Used**

| Concept      | Description                                   |
| ------------ | --------------------------------------------- |
| `if-else if` | To handle multiple conditions in sequence     |
| `&&` (AND)   | Logical operator to match multiple conditions |
| `>`          | Greater than comparison                       |

---

## ✅ **Output Example (based on current values)**

```
d is max!
Number is neutral!
```

---

## 📝 **5 Related Practice Questions**

1. 🧠 Write a program to find the **maximum of 3 numbers** using ladder `if-else`.
2. ✍️ Take user input for 4 numbers and **display the smallest number**.
3. 🔢 Modify the sign-check program to take input from the user and check the result.
4. 💡 WAP to check if a number is **even, odd, or zero** using `if-else`.
5. 🔁 Use nested `if` to check if a number is **positive and even**, **positive and odd**, or **negative**.
