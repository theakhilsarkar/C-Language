

# 🧮 **C Program: Two-Dimensional Arrays (2D Arrays)**

### 📌 Topic: Arrays, Nested Loops, Input/Output

---

## 📚 **What is a 2D Array?**

A **2D array** is a collection of elements arranged in rows and columns — like a **table** or **matrix**.

🔹 Think of it as an **array of arrays**.
🔹 It is declared as:

```c
data_type array_name[rows][columns];
```

---

## 💡 **Example:**

```c
int a[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

🧠 Here,

* 3 rows and 3 columns
* Access element like: `a[1][2]` → 6 (Row 1, Column 2)

---

## 🛠️ **Program Code: Displaying 2D Array (Static)**

```c
#include <stdio.h>
#include <conio.h>

void main() {
    int r = 3, c = 3;
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;

    printf("2D Array Elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    getch();
}
```

---

## 🧾 **Explanation**

| Term        | Meaning                                        |
| ----------- | ---------------------------------------------- |
| `a[i][j]`   | Accesses the element at row `i` and column `j` |
| `r`         | Number of rows                                 |
| `c`         | Number of columns                              |
| Nested Loop | Outer loop for rows, inner loop for columns    |

---

## 📌 **2D Array with User Input Example**

```c
#include <stdio.h>
#include <conio.h>

void main() {
    int r = 2, c = 3;
    int a[2][3];
    int i, j;

    // 📥 Taking user input
    printf("Enter elements of 2D array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 📤 Displaying 2D array
    printf("\nThe 2D Array is:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    getch();
}
```

---

## 🧠 **Real-Life Analogy:**

📅 Imagine a **calendar**:

* Rows = weeks
* Columns = days
  Each date can be accessed like `calendar[week][day]`.

---

## 📋 **Summary Table**

| Concept        | Example                   | Description                    |
| -------------- | ------------------------- | ------------------------------ |
| 2D Declaration | `int a[3][2];`            | 3 rows, 2 columns              |
| Access         | `a[1][0]`                 | Element at 2nd row, 1st column |
| Loop Use       | Nested `for` loops        | Used to iterate rows/columns   |
| Input          | `scanf("%d", &a[i][j]);`  | Takes user input               |
| Output         | `printf("%d ", a[i][j]);` | Displays each element          |

---

## 📝 **5 Practical Assignment Questions**

1. 🔢 Write a C program to **take user input** in a 3x3 matrix and **find the sum of all elements**.

2. 🔁 Write a program to **transpose a matrix** (convert rows to columns).

3. ➕ Write a program to **add two 2D arrays** (matrices) and display the result.

4. ✂️ Write a program to **print only diagonal elements** of a 3x3 matrix.

5. 🔍 Write a program to **search a number** in a 2D array and print its position (row & column).
