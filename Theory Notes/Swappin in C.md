
# 🔄 **C Program: Swapping Two Numbers**

### 📌 Topic: Variables, Arithmetic Operators, Input/Output

---

## 🧠 **Objective**

Learn how to swap the values of two variables in C:

1. ✅ Using a third (temporary) variable
2. ✅ Without using a third variable (using logic)

---

## 📋 **Concepts Covered**

* Input/Output using `scanf()` and `printf()`
* Variable declaration
* Basic arithmetic operations
* Swapping logic
* Format specifiers

---

## 📎 **Format Specifiers Recap**

| Data Type | Format Specifier |
| --------- | ---------------- |
| `int`     | `%d`             |
| `float`   | `%f`             |
| `double`  | `%lf`            |
| `char`    | `%c`             |

---

## 🔧 **Code: Swapping Two Numbers**

```c
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b;

    // 📥 Taking input from user
    printf("Enter value of a: ");
    scanf("%d", &a);
    
    printf("Enter value of b: ");
    scanf("%d", &b);

    // ✅ Swapping without using third variable
    a = a + b;  // Step 1
    b = a - b;  // Step 2
    a = a - b;  // Step 3

    // 📤 Display result after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d", a, b);

    getch(); // Turbo C specific: holds output screen
}
```

---

## 🔍 **Step-by-Step Example**

Assume:
`a = 10`, `b = 20`

```
Step 1: a = a + b → 10 + 20 = 30
Step 2: b = a - b → 30 - 20 = 10
Step 3: a = a - b → 30 - 10 = 20
```

✅ Final Output: `a = 20`, `b = 10` (Swapped!)

---

## 🧠 **Real-Life Analogy**

📦 Imagine two gift boxes (`a` and `b`) placed on a table.
You can either:

* Use a **third empty box** (temp) to help transfer gifts and swap.
* Or, if you're clever, **shift the gifts using your hands** without needing a third box — just like logic-based swapping!

---

## 🎯 **Learning Outcomes**

By the end of this activity, you should be able to:

* Accept input from user using `scanf()`
* Display output using `printf()`
* Apply logic to swap values using arithmetic
* Understand the concept of variables and memory changes

---

## 📝 **Practice Questions**

1. ✍️ Write a program to **swap two float numbers** using a third variable.
2. ✍️ Modify the above program to take input as `char` and **swap characters**.
3. ✍️ Write a program to **find the maximum of two numbers** using `if` condition.
4. ✍️ Take input of 3 numbers and **swap the largest and smallest**.
5. ✍️ Write a program to **swap two numbers using multiplication and division**, without using third variable.
