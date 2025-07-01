
# 🔁 Loop-Based Number Operations in C

## 🧾 Description

This C program demonstrates the use of `while` loops for solving real-world problems involving **digits of numbers**. These programs are ideal for **intermediate practice** with loops, arithmetic operators, and logic building in C.

---

## 📌 Concepts Covered

* Looping with `while`
* Modulus `%` and Division `/` operations
* Number digit extraction
* Variable manipulation
* Palindrome and reverse logic

---

## 📂 Programs Included

### ✅ 1. **Sum of First and Last Digit**

```c
int num = 1458;
int ld = num % 10;
int fd = 0;

while (num > 9) {
    num /= 10;
}
fd = num;
printf("%d + %d = %d", fd, ld, fd + ld);
```

### ✅ 2. **Count Total Digits**

```c
int num = 123456;
int count = 0;
while (num > 0) {
    count++;
    num /= 10;
}
printf("Total digits = %d", count);
```

### ✅ 3. **Sum of All Digits**

```c
int num = 487;
int sum = 0;
while (num > 0) {
    sum += num % 10;
    num /= 10;
}
printf("Sum = %d", sum);
```

### ✅ 4. **Reverse the Number**

```c
int num = 1234;
int rev = 0;
while (num > 0) {
    rev = rev * 10 + num % 10;
    num /= 10;
}
printf("Reverse = %d", rev);
```

### ✅ 5. **Check if Number is Palindrome**

```c
int num = 121;
int original = num;
int rev = 0;
while (num > 0) {
    rev = rev * 10 + num % 10;
    num /= 10;
}
if (original == rev)
    printf("Palindrome");
else
    printf("Not a palindrome");
```

### ✅ 6. **Product of All Digits**

```c
int num = 1234;
int product = 1;
while (num > 0) {
    product *= num % 10;
    num /= 10;
}
printf("Product = %d", product);
```

### ✅ 7. **Print Each Digit (From Last to First)**

```c
int num = 9876;
while (num > 0) {
    printf("%d\n", num % 10);
    num /= 10;
}
```

---

## 🧠 Important Logic Pattern

| Operation         | Code Pattern            |
| ----------------- | ----------------------- |
| Last Digit        | `num % 10`              |
| Remove Last Digit | `num /= 10`             |
| Sum of Digits     | `sum += num % 10`       |
| Reverse           | `rev = rev * 10 + last` |
| First Digit       | Loop until `num <= 9`   |

---

## 📘 Recommended Student Assignments

1. Find second digit from the left.
2. Count number of even and odd digits.
3. Check if a number is Armstrong.
4. Find sum of squares of digits.
5. Convert number to binary using loop.


