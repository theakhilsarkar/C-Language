
# 🧠 **Understanding Nested Loops in C**

### 🔹 What is a Loop?

A **loop** is used to repeat a block of code multiple times.

### 🔹 What is a Nested Loop?

A **Nested Loop** means using one loop inside another loop. In pattern programming:

* **Outer Loop** → controls **rows**.
* **Inner Loop** → controls **columns** or **values in each row**.

---

## 🧾 Structure of Nested Loop

```c
for (int i = 1; i <= rowCount; i++) {
    for (int j = 1; j <= colCount; j++) {
        // print something
    }
    printf("\n"); // to go to next line after each row
}
```

---

## 🧩 Shortcut & Technique to Remember

| Goal                  | Technique                    | Example                        |
| --------------------- | ---------------------------- | ------------------------------ |
| Same value in row     | Use outer loop variable      | `printf("%d", i);`             |
| Changing value in row | Use inner loop variable      | `printf("%d", j);`             |
| Reverse print         | Start loop from high to low  | `for(j=5; j>=1; j--)`          |
| Triangle pattern      | Outer loop range = row count | Inner loop range depends on i  |
| Square pattern        | Both loops fixed range       | `for(i=1; i<=5; i++)` & `j<=5` |

---

## ⭐ Basic Examples and Explanation

### 📌 Pattern 1: Solid Square

```c
// * * * * *
// * * * * *
// * * * * *
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 5; j++) {
        printf("* ");
    }
    printf("\n");
}
```

🧠 3 rows, 5 stars → outer loop controls rows, inner prints 5 stars.

---

### 📌 Pattern 2: Number Increment Pattern

```c
// 1 2 3 4 5
// 1 2 3 4 5
for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 5; j++) {
        printf("%d ", j);
    }
    printf("\n");
}
```

🧠 Use inner loop variable `j` to print 1 to 5 in each row.

---

### 📌 Pattern 3: Reverse Number Pattern

```c
// 5 4 3 2 1
// 5 4 3 2 1
for (int i = 1; i <= 2; i++) {
    for (int j = 5; j >= 1; j--) {
        printf("%d ", j);
    }
    printf("\n");
}
```

🧠 Use decrement in inner loop for reverse order.

---

### 📌 Pattern 4: Decreasing Triangle

```c
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        printf("%d ", j);
    }
    printf("\n");
}
```

🧠 Outer loop decreases, inner prints 1 to i.

---

### 📌 Pattern 5: Increasing Triangle

```c
// 1
// 2 2
// 3 3 3
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= i; j++) {
        printf("%d ", i);
    }
    printf("\n");
}
```

🧠 Outer controls row count; print outer loop variable i times.

---

### 📌 Pattern 6: Binary Alphabet Pattern

```c
// A
// B A
// C B A
for (char i = 'A'; i <= 'E'; i++) {
    for (char j = i; j >= 'A'; j--) {
        if (j % 2 == 0)
            printf("0 ");
        else
            printf("1 ");
    }
    printf("\n");
}
```

🧠 Print 1 for odd letters, 0 for even. Good example of logic inside nested loops.

---

## 🎯 Tips to Solve Patterns Easily

1. **Row → Outer Loop**, **Column → Inner Loop**
2. If numbers/stars change in column → use **inner loop**
3. If same number/character in row → use **outer loop**
4. For reverse: use `j--` instead of `j++`
5. Triangle patterns: range of inner loop depends on `i`
6. Start with **dry run** (pen-paper walkthrough)
7. Use **`printf("\n")` after inner loop** for new line

