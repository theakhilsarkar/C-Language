
# ✅ **Lecture 01: Functions in C**



## **📌 What is a Function?**

A **function** is a **block of reusable code** that performs a specific task.
It helps in:

* **Modularity** (divide large programs into smaller parts)
* **Reusability** (write once, use multiple times)
* **Readability & Maintenance**

---

## **✅ Types of Functions**

1. **Predefined Functions**

   * Provided by C standard library
   * Example: `printf()`, `scanf()`, `sqrt()`

2. **User-Defined Functions**

   * Created by the programmer
   * Example: `sum()`, `table()`

---

## **✅ Function Syntax**

```c
return_type function_name(parameter_list)
{
    // function body
}
```

**Components:**

* `return_type`: Type of value the function returns (e.g., `int`, `float`, `void`)
* `function_name`: Name of the function
* `parameter_list`: Values passed to the function

---

## **✅ Types of User-Defined Functions**

1. **Without Parameters & Without Return**
2. **With Parameters & Without Return**
3. **With Parameters & With Return**
4. **Without Parameters & With Return**

---

## **✅ Example: Simple Function**

```c
#include <stdio.h>

// Function without parameters and without return
void newl()
{
    printf("\n");
}

int main()
{
    printf("Hello");
    newl();
    printf("World");
    return 0;
}
```

---

## **✅ Example: Function with Parameter**

```c
#include <stdio.h>

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

int main()
{
    table(5); // Prints multiplication table of 5
    return 0;
}
```

---

## **✅ Output**

```
5 * 1 = 5
5 * 2 = 10
...
5 * 10 = 50
```

---

## **✅ Key Points**

* Function **must be declared before calling** or use **function prototype**.
* Return type:

  * `void` → No value returned
  * `int`, `float`, etc. → Returns value

---

## **✅ Real-Life Example**

* **ATM Machine**:

  * `deposit()`, `withdraw()`, `checkBalance()` → Each is a function performing a specific task.
* **Calculator App**:

  * `add()`, `subtract()`, `multiply()`, `divide()`

---

## **✅ Practice Problems**

**Theory:**

1. What is a function in C? Why do we need functions?
2. Explain function declaration and definition.
3. Differentiate between predefined and user-defined functions.

**Practical:**

1. WAP to find the cube of a number using a function.
2. WAP to print numbers from 1 to N using a function.
3. WAP to perform all arithmetic operations using separate functions.
4. WAP to find factorial of a number using a function.
5. WAP to check whether a number is prime using a function.

---

## ✅ **Summary**

* Functions reduce redundancy.
* Functions can accept **parameters** and **return values**.
* **Function prototype** helps in organizing large programs.
