

# 📚 C Language Notes – Variables, Data Types & Operators 🔢💡

---

## 1️⃣ **What is a Variable?** 📦

A **variable** is a container used to **store data** that can change during the execution of a program.

### 🧠 Example:

```c
int age = 25;
```

| Term  | Meaning                        |
| ----- | ------------------------------ |
| `int` | Data type                      |
| `age` | Variable name                  |
| `25`  | Value assigned to the variable |

---

## 2️⃣ **Data Types** 🧬

Data types specify the **type of data** a variable can hold.

| Data Type | Description                    | Example Values     |
| --------- | ------------------------------ | ------------------ |
| `int`     | Integer numbers                | 0, 1, -23, 1000    |
| `float`   | Decimal numbers (less precise) | 78.85, -3.14       |
| `double`  | Decimal numbers (more precise) | 90.9099909090      |
| `char`    | Single character               | 'a', '1', '@', '#' |

### 📌 Code Examples:

```c
int age = 25;
float percentage = 78.85;
double price = 90.99;
char grade = 'A';
```

---

## 3️⃣ **Operators in C** ➕➖✖️➗

### 🔹 1. **Arithmetic Operators** 🔢

Used to perform basic **math operations**:

| Operator | Description         | Example |
| -------- | ------------------- | ------- |
| `+`      | Addition            | `a + b` |
| `-`      | Subtraction         | `a - b` |
| `*`      | Multiplication      | `a * b` |
| `/`      | Division            | `a / b` |
| `%`      | Modulus (remainder) | `a % b` |

---

### 🔹 2. **Assignment Operators** 🧾

Used to **assign or update values** in variables.

| Operator | Example  | Meaning          |
| -------- | -------- | ---------------- |
| `=`      | `a = 10` | Assign 10 to `a` |
| `+=`     | `a += b` | `a = a + b`      |
| `-=`     | `b -= 2` | `b = b - 2`      |
| `*=`     | `a *= b` | `a = a * b`      |
| `/=`     | `a /= b` | `a = a / b`      |

---

### 🔹 3. **Relational Operators** 🔍

Used to **compare two values**.

| Operator | Description      | Example  |
| -------- | ---------------- | -------- |
| `>`      | Greater than     | `a > b`  |
| `<`      | Less than        | `a < b`  |
| `>=`     | Greater or equal | `a >= b` |
| `<=`     | Less or equal    | `a <= b` |
| `==`     | Equal to         | `a == b` |
| `!=`     | Not equal to     | `a != b` |

✅ These return `1` (true) or `0` (false)

---

### 🔹 4. **Logical Operators** 🔗

Used to **combine or modify conditions**.

| Operator | Name        | Example          | Meaning                                   |         |   |         |                                       |
| -------- | ----------- | ---------------- | ----------------------------------------- | ------- | - | ------- | ------------------------------------- |
| `&&`     | Logical AND | `a > 0 && b > 0` | True **only if both** conditions are true |         |   |         |                                       |
| \`       |             | \`               | Logical OR                                | \`a > 0 |   | b > 0\` | True **if any one** condition is true |
| `!`      | Logical NOT | `!(a > 0)`       | Reverses the result (true becomes false)  |         |   |         |                                       |

---

## ✅ **Truth Tables of Logical Operators** 🔢

### 🔸 AND (`&&`)

| A | B | A && B | Result       |
| - | - | ------ | ------------ |
| 0 | 0 | 0      | ❌ Both false |
| 0 | 1 | 0      | ❌ One false  |
| 1 | 0 | 0      | ❌ One false  |
| 1 | 1 | 1      | ✅ Both true  |

---

### 🔸 OR (`||`)

| A | B | A \|\| B | Result       |
| - | - | -------- | ------------ |
| 0 | 0 | 0        | ❌ Both false |
| 0 | 1 | 1        | ✅ One true   |
| 1 | 0 | 1        | ✅ One true   |
| 1 | 1 | 1        | ✅ Both true  |

---

### 🔸 NOT (`!`)

| A | !A | Result             |
| - | -- | ------------------ |
| 0 | 1  | ✅ NOT false → true |
| 1 | 0  | ❌ NOT true → false |

---

### 🎯 Real-Life Analogy:

| Operator | Expression/Example          | Spoken Meaning            | Result                         |
| -------- | --------------------------- | ------------------------- | ------------------------------ |
| `&&`     | I have a **bike AND a car** | ✅ I must have **both**    | True **only if both are true** |
| `\|\|`   | I have a **bike OR a car**  | ✅ I need **at least one** | True if **any one is true**    |
| `!`      | I do **NOT** have a car     | ❌ Reverse the condition   | True if original is false      |

---

## 🧪 Sample Code

```c
#include <stdio.h>

void main() {
    int a = 10, b = 5;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    printf("a == b: %d\n", a == b);
    printf("a > b: %d\n", a > b);
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);
}
```

---

## 🔁 Summary Table

| Concept             | Example         | Meaning                       |
| ------------------- | --------------- | ----------------------------- |
| Variable            | `int age = 25;` | Stores and can change value   |
| Data Type           | `float price;`  | Type of data a variable holds |
| Arithmetic Operator | `a + b`         | Math operation                |
| Assignment Operator | `a += b`        | Short-form assignment         |
| Relational Operator | `a > b`         | Compares values (true/false)  |
| Logical Operator    | `a && b`        | Combines multiple conditions  |

