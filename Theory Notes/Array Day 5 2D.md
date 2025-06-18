

# 📘 C Language Notes – 2D Arrays & Related Programs (Sum, Diagonal, Rows, Columns)

---

## ✅ 1. What is a 2D Array?

A **2D Array** is a collection of elements arranged in **rows and columns**, like a matrix or a table.
Each element is accessed using **two indices**: `a[i][j]`, where `i` is the row number and `j` is the column number.

### 🧠 Real-Life Example:

* **Spreadsheet (Excel)** – Rows and Columns of data
* **Tic Tac Toe Game** – 3x3 Grid

---

## 🧱 2. Syntax of 2D Array

```c
int a[3][3];  // declaration of 3x3 matrix
```

* `a[0][0]` – first row, first column
* `a[2][1]` – third row, second column

---

## 🔬 Programs Covered

We’ll solve these:

1. ✅ Sum of all elements of 2D array
2. ✅ Sum of diagonal elements
3. ✅ Sum of anti-diagonal elements
4. ✅ Check if all elements of **n-th row** are same
5. ✅ Check if all elements of **n-th column** are same

---

## 🧪 Example Input Matrix

```
1 2 3
4 5 6
7 8 9
```

---

## 🔢 Practical Program with Explanations

---

### ✅ **Program: Sum of Anti-Diagonal Elements of 2D Array**

```c
#include <stdio.h>

void main()
{
    int r, c, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    // Input elements
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of Anti-Diagonal elements (i + j == c - 1)
    for (i = 0, j = c - 1; i < r && j >= 0; i++, j--)
    {
        sum = sum + a[i][j];
    }

    // Display Matrix
    printf("\nMatrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Anti-Diagonal = %d\n", sum);
}
```

---

### 🔁 You can modify this program to cover:

#### 1️⃣ Sum of all elements:

```c
sum += a[i][j]; // inside nested for loop
```

#### 2️⃣ Sum of diagonal elements:

```c
if (i == j)
    sum += a[i][j];
```

#### 3️⃣ Check if all elements in n-th row are same:

```c
int row = 1; // for example
int same = 1;
for(j = 1; j < c; j++) {
    if(a[row][j] != a[row][0]) {
        same = 0;
        break;
    }
}
if(same)
    printf("All elements in row %d are same", row);
else
    printf("Elements in row %d are not same", row);
```

#### 4️⃣ Check if all elements in n-th column are same:

```c
int col = 1; // for example
int same = 1;
for(i = 1; i < r; i++) {
    if(a[i][col] != a[0][col]) {
        same = 0;
        break;
    }
}
if(same)
    printf("All elements in column %d are same", col);
else
    printf("Elements in column %d are not same", col);
```

---

## 📊 Real-Life Analogy Table

| Task                       | Real-life Example                     |
| -------------------------- | ------------------------------------- |
| Sum of all elements        | Total marks in all subjects           |
| Diagonal elements          | Main road in square city layout       |
| Anti-diagonal              | Diagonal from opposite corner         |
| Row same elements check    | Same items in a restaurant row        |
| Column same elements check | Same lights on each floor of building |

---

## ❓ 5 Practice Questions

1. WAP to find the **transpose** of a matrix.
2. WAP to **check if a matrix is symmetric**.
3. WAP to **multiply two matrices** (only if valid).
4. WAP to find the **maximum element** in each row.
5. WAP to **count even and odd numbers** in a 2D array.
