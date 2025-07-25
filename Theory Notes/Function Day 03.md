
# ✅ **Lecture 03: Recursion in C**


## ✅ **What is Recursion?**

* **Definition:**
  Recursion is a programming technique where a function calls itself directly or indirectly.

* **Key Points:**

  * Every recursive function must have:

    1. **Base Condition** → Stops the recursion (to avoid infinite calls).
    2. **Recursive Call** → The function calls itself.

---

### ✅ **General Syntax:**

```c
return_type function_name(parameters)
{
    if (base_condition)
        return value;
    else
        function_name(arguments); // Recursive call
}
```

---

## ✅ **Example 1: Basic Recursion**

```c
#include <stdio.h>

void print(int a) // a = 3
{
    printf("Hello....\n");
    a++;
    if (a <= 5)
    {
        print(a); // Recursive call
    }
}

int main()
{
    print(1);
    return 0;
}
```

**Output:**

```
Hello....
Hello....
Hello....
Hello....
Hello....
```

---

## ✅ **Example 2: Print 1 to N using Recursion**

```c
void print1toN(int i, int n)
{
    printf("%d ", i);
    if (i < n)
    {
        print1toN(i + 1, n);
    }
}

int main()
{
    print1toN(1, 10);
    return 0;
}
```

**Output:**

```
1 2 3 4 5 6 7 8 9 10
```

---

## ✅ **More Recursive Problems**

1. **Print N to 1 (Reverse Order):**

```c
void printReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        printReverse(n - 1);
    }
}
```

2. **Sum of 1 to N:**

```c
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
```

3. **Factorial of N:**

```c
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
```

---

## ✅ **Important Notes**

* Recursion uses **stack memory** for each function call.
* Too many recursive calls can cause **stack overflow**.
* Base condition is mandatory to stop recursion.

---

## ✅ **Real-Life Analogy**

* **Example:** Russian Dolls

  * Open a doll → inside is another doll → open it again → until the smallest doll.

---

## ✅ **Practice Questions**

**Theory:**

1. Explain recursion with an example.
2. What happens if there is no base condition in recursion?

**Practical:**

1. WAP to calculate power of a number using recursion.
2. WAP to calculate GCD (Greatest Common Divisor) using recursion.
3. WAP to find Fibonacci series using recursion.
4. WAP to check if a string is palindrome using recursion.
5. WAP to find sum of digits of a number using recursion.
