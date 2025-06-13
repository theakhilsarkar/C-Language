

# 🧠 Array Manipulation & Update 🚀



## 🔹 Quick Recap: Array Basics

📦 An **array** is a container that stores **multiple values of the same data type**.
🧮 Indexing in an array starts from **0 up to size-1**.

```c
int a[5] = {1, 2, 3, 4, 5}; 
// indexes:      0  1  2  3  4
```

---

## 🛠️ Part 1: Array Element Update (Static Example)

### ✅ Code Example:

```c
int a[5] = {1, 2, 3, 4, 5};

a[2] = a[1];             // a[2] becomes 2
a[3] = a[1] + a[2];      // a[3] becomes 4
a[0] = a[0] + a[3];      // a[0] becomes 5
```

### 📌 Updated Array:

```
5 2 2 4 5
```

### 🔁 Print the Array:

```c
for(int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
}
```

---

## 🔸 Real-life Analogy 📊

Imagine shelves in a library where you replace or update books based on a formula:

* Replace book at position 2 with the one from position 1.
* Stack books based on addition of values from earlier positions.

---

## 🛠️ Part 2: User-Defined Array Element Update

### ✅ Full Code:

```c
int a[5] = {12, 34, 23, 12, 56};
int index, value;

for(int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
}

printf("\nEnter index to update: ");
scanf("%d", &index);

printf("Enter value to update: ");
scanf("%d", &value);

a[index] = value;

printf("\nUpdated array: ");
for(int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
}
```

### 🎯 Sample Input/Output:

```
Original: 12 34 23 12 56
Enter index to update: 2
Enter value: 99
Updated: 12 34 99 12 56
```

---

## 🧪 Practice Exercises 🧠

1. **WAP to print array in reverse order**

```c
for(int i = 4; i >= 0; i--) {
    printf("%d ", a[i]);
}
```

2. **WAP to print only even numbers**

```c
for(int i = 0; i < 5; i++) {
    if(a[i] % 2 == 0) {
        printf("%d ", a[i]);
    }
}
```

3. **WAP to find sum of array**

```c
int sum = 0;
for(int i = 0; i < 5; i++) {
    sum += a[i];
}
printf("Sum = %d", sum);
```

4. **WAP to update array at a user-defined index**
   ✅ Already done in code above.

---

## 📎 Summary Table

| Concept          | Description                                |
| ---------------- | ------------------------------------------ |
| Array Indexing   | Always starts from 0 to size-1             |
| Updating Array   | Use assignment `a[index] = value;`         |
| Reverse Printing | Start loop from last index                 |
| Even Numbers     | Use condition `if(a[i] % 2 == 0)`          |
| Sum of Elements  | Use loop to accumulate total               |
| Dynamic Input    | Use `scanf()` to get index/value from user |
