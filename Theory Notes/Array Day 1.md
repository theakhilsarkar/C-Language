
# 📘 C Language Notes – Arrays & Patterns

## 🔹 What is a Variable?

A **variable** is a container used to store a single value.

```c
int x = 10;
```

* Here, `x` stores one integer value `10`.

✅ **Limitation**: A variable can store **only one** value.
📌 Example:

* If you want to store marks of 5 students, you’d need 5 variables.

---

## 🔹 What is an Array?

An **array** is a special variable that can hold **multiple values of the same data type**.

```c
int marks[5]; // Can store 5 integer values
```

### 🔍 Syntax:

```c
datatype arrayName[size];
```

### ✅ Use-case Example:

You want to store the marks of 50 students:

```c
int marks[50];
```

Now you don't need to declare 50 variables!

---

## 🔸 Array Initialization

### 📌 Static Initialization:

```c
int b[3] = {10, 20, 30};
```

### 📌 Partial Initialization:

```c
int c[10] = {11, 22, 33, 44};
```

> Remaining values will be initialized to 0.

---

## 🔸 Array Traversal

You can **print all elements** using a `for` loop:

```c
for(int i = 0; i < 10; i++) {
    printf("%d\n", c[i]);
}
```

---

## 🛠️ Array Input from User

```c
int p[3];
for(int i = 0; i < 3; i++) {
    printf("Enter p[%d]: ", i);
    scanf("%d", &p[i]);
}
```

And to print:

```c
for(int i = 0; i < 3; i++) {
    printf("%d\n", p[i]);
}
```

---

## 🧮 Practical 1: Find Average of Array Elements

🎯 **Problem**: Take array input from the user and print average.

### ✅ Code:

```c
int n, i, sum = 0;
printf("Enter size of array: ");
scanf("%d", &n);

int a[n];

for(i = 0; i < n; i++) {
    printf("Enter a[%d]: ", i);
    scanf("%d", &a[i]);
}

for(i = 0; i < n; i++) {
    sum += a[i];
}

printf("Sum = %d\n", sum);
printf("Average = %.2f", (float)sum/n);
```

---

## 🧩 Pattern Program: Triangle with Decreasing Numbers

🎯 **Output:**

```
1
7 2
12 8 3
16 13 9 4
19 17 14 10 5
21 20 18 15 11 6
```

### 🧠 Logic:

* Start with a number and subtract dynamic values to create a downward pattern.
* `x` is a decreasing value controlling the step size.

### ✅ Code:

```c
int i, j, a = 1, n = 7, x = 7, y;

for(i = 1; i <= n; i++) {
    y = x;
    int temp = a;
    for(j = 1; j <= i; j++) {
        printf("%d ", a);
        a -= y;
        y++;
    }
    printf("\n");
    a = temp + x;
    x--;
}
```

### 📌 Real-Life Example:

Imagine placing books on a shelf in such a way that each row (level) has one more book than the row above and the serial number of books follow a decreasing difference—looks cool and logical like a pyramid!

---

## 📎 Summary:

| Concept          | Description                                      |
| ---------------- | ------------------------------------------------ |
| Variable         | Stores single value                              |
| Array            | Stores multiple values of same type              |
| Traversal        | Loop through array elements                      |
| Input            | Use `scanf()` inside loop                        |
| Sum & Average    | Add elements and divide by count                 |
| Pattern Printing | Use nested loops + logic to create number shapes |

