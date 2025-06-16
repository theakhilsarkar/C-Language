# 📚 C Language Notes – Arrays and Value Updation 🧠📊

---

## 🔹 **What is an Array?** 📦

An **array** is a **collection of multiple values of the same data type** stored in **contiguous memory locations** using a single variable name.

### ✨ Syntax:

```c
dataType arrayName[size];
```

### ✅ Example:

```c
int a[5] = {12, 34, 23, 12, 56};
// Index:       0   1   2   3   4
```

* You can access or update values using **indexing**:
  `a[0]` gives 12
  `a[2] = 99` updates the third value to 99

---

## 🧮 Array Index Concept

🔢 **Indexing always starts from 0**, just like:

> A lift starts from **Ground (0)** floor → 1st → 2nd → …

---

## 🔁 Printing Array Elements

```c
for(int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
}
```

✅ This loop prints all elements from the array.

---

## 🔄 Update Array


Here’s a **complete, structured documentation** 📘 based on your advanced array operations lecture in C. It includes definitions, code examples, real-life logic 💡, and practical tasks, perfect for revision or teaching. 👨‍🏫

---

# 🔰 **C Language: Advanced Array Programs** 🔰

**Topic:** Maximum/Minimum, Array Addition, Sorting, Reversing, and Multiplication Table

---

## 📌 What is a 1D Array?

A **1D (One-Dimensional) Array** is a **list of elements of the same data type** stored in **contiguous memory**.

```c
int a[6] = {1, 5, 22, 7, 9, 18};
```

---

## ✅ **1. Find Maximum Value in Array** 🔝

### 📖 Logic:

* Assume the **first element** is the maximum.
* Traverse the array: if any element is **greater**, update the max.

### 💻 Code:

```c
int a[6] = {1, 5, 22, 77, 9, 18};
int max = a[0];
int i;

for(i = 0; i < 6; i++) {
    if(max < a[i]) {
        max = a[i];
    }
}
printf("Maximum value: %d", max);
```

---

## ✅ **2. Addition of Two Arrays ➕**

### 📖 Logic:

* Take two arrays of the same size.
* Add each element of `a[i]` and `b[i]`, and store in `ans[i]`.

### 💻 Code:

```c
int a[5] = {1, 2, 3, 4, 5};
int b[5] = {10, 20, 30, 40, 50};
int ans[5];
int i;

for(i = 0; i < 5; i++) {
    ans[i] = a[i] + b[i];
}

for(i = 0; i < 5; i++) {
    printf("%d ", ans[i]);
}
```

---

## 🔁 **Upcoming Practice Tasks** (Interview-Oriented) 💼

### ✅ **3. Print Array in Reverse Order 🔄**

> Useful for understanding indexes and memory logic.

```c
for(i = size - 1; i >= 0; i--) {
    printf("%d ", a[i]);
}
```

---

### ✅ **4. Sort Array in Ascending Order ⬆️**

### 💡 Logic:

Use **Bubble Sort** or **Selection Sort** to sort.

```c
for(i = 0; i < n-1; i++) {
    for(j = i+1; j < n; j++) {
        if(a[i] > a[j]) {
            // Swap
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
```

---

### ✅ **5. Sort Array in Descending Order ⬇️**

```c
for(i = 0; i < n-1; i++) {
    for(j = i+1; j < n; j++) {
        if(a[i] < a[j]) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
```

---

### ✅ **6. Multiplication Table of Each Element (Nested Loop)** 🔢

```c
int a[5] = {1, 2, 3, 15, 6};

for(i = 0; i < 5; i++) {
    printf("Table of %d:\n", a[i]);
    for(j = 1; j <= 10; j++) {
        printf("%d x %d = %d\n", a[i], j, a[i]*j);
    }
    printf("\n");
}
```

---

## 🎯 Real-Life Use Case

> Imagine you are storing **student marks**, and you want to:

* 🏆 Find the highest marks (max)
* 🔄 Compare marks of two sections (addition)
* 🧠 Sort students based on scores
* 📚 Print a multiplication table for roll numbers

---

## 📝 Summary Table

| Concept        | Purpose                         |
| -------------- | ------------------------------- |
| `max` in array | Find highest value              |
| Array addition | Merge data from two sources     |
| Reverse array  | View data from end              |
| Sorting        | Order data logically            |
| Multiplication | Repetition-based logic practice |

