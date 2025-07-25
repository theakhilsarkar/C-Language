

# ✅ **Lecture 02: Advanced Functions in C**



## **📌 Recap**

* Function = reusable block of code.
* Types of user-defined functions:

  1. **TNRN** – Take Nothing, Return Nothing
  2. **TSRN** – Take Something, Return Nothing
  3. **TNRS** – Take Nothing, Return Something
  4. **TSRS** – Take Something, Return Something

---

## ✅ **Key Concept: `return` Keyword**

* Used to return a value from a function to where it was called.
* **Syntax:**

```c
return value;
```

---

## ✅ **Function Categories (with Examples)**

### ✅ 1. **Take Nothing, Return Nothing (TNRN)**

```c
void greet()
{
    printf("Hello, World!\n");
}

int main()
{
    greet();
    return 0;
}
```

---

### ✅ 2. **Take Something, Return Nothing (TSRN)**

```c
void sum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

int main()
{
    sum(10, 20);
    return 0;
}
```

---

### ✅ 3. **Take Nothing, Return Something (TNRS)**

```c
int getNumber()
{
    return 100;
}

int main()
{
    int n = getNumber();
    printf("Number = %d\n", n);
    return 0;
}
```

---

### ✅ 4. **Take Something, Return Something (TSRS)**

```c
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int result = sum(10, 20);
    printf("Sum = %d\n", result);
    return 0;
}
```

---

## ✅ **Nested Function Calling**

Functions can call **other functions** for modular code.
Example:

```c
int total(int eng, int math, int sci)
{
    return eng + math + sci;
}

float percentage(int eng, int math, int sci)
{
    int marks = total(eng, math, sci);
    return marks / 3.0;
}
```

---

## ✅ **Passing Array to Function**

Example:

```c
#include <stdio.h>

int sumOfArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int result = sumOfArray(arr, 5);
    printf("Sum of array: %d\n", result);
    return 0;
}
```

**Output:**

```
Sum of array: 15
```

---

## ✅ **Real-Life Example**

* **Bank System Functions:**

  * `deposit(amount)`
  * `withdraw(amount)`
  * `checkBalance()`

---

## ✅ **Practice Problems**

**Theory:**

1. Explain the difference between TNRN, TSRN, TNRS, and TSRS functions with examples.
2. What is function nesting? Give an example.

**Practical:**

1. WAP to calculate the factorial of a number using TSRS.
2. WAP to reverse an array using a function.
3. WAP to find the largest element in an array using a function.
4. WAP to calculate the average marks of a student using nested functions.
5. WAP to check whether a number is palindrome using a function.
