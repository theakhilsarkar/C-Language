

# 📘 C Language Notes – Decision Making Statements (if, if-else, nested if, else-if ladder) 🧠🔀

---

## ✅ 1. What are Decision Making Statements?

Decision-making statements help the program **decide what to do** based on certain conditions. These are also known as **conditional statements**.

> 📌 **Real Life Example**:
> “If it is raining, I will take an umbrella.”
> → You take an umbrella **only if** it is raining.

---

## 🧱 2. Types of Conditional Statements in C

| Statement        | Description                                               |
| ---------------- | --------------------------------------------------------- |
| `if`             | Executes code only if condition is true                   |
| `if...else`      | Executes one block if condition is true, another if false |
| `nested if`      | `if` inside another `if` to handle multiple levels        |
| `else-if ladder` | Handles multiple conditions step by step                  |

---

### 🔹 2.1 `if` Statement

🧠 Executes a block only when a **condition is true**.

```c
if (condition) {
    // code to run if true
}
```

🔸 **Example:**

```c
if (age >= 18) {
    printf("You can vote!");
}
```

---

### 🔹 2.2 `if...else` Statement

🧠 Executes one block if true, another if false.

```c
if (condition) {
    // if true
} else {
    // if false
}
```

🔸 **Example:**

```c
if (marks >= 35) {
    printf("Pass");
} else {
    printf("Fail");
}
```

---

### 🔹 2.3 `Nested if`

🧠 `if` inside another `if`, useful for **range checks** or **deep conditions**.

```c
if (condition1) {
    if (condition2) {
        // true for both
    }
}
```

🔸 **Example:**

```c
if (age >= 18) {
    if (age <= 100) {
        printf("Valid age to vote");
    }
}
```

---

### 🔹 2.4 `else-if ladder`

🧠 Checks multiple conditions in sequence.

```c
if (condition1) {
    // if true
} else if (condition2) {
    // if condition2 is true
} else {
    // if all false
}
```

🔸 **Example:**

```c
if (num > 0) {
    printf("Positive");
} else if (num < 0) {
    printf("Negative");
} else {
    printf("Zero");
}
```

---

## 🔬 Practical Programs

---

### ✅ **Program 1: Find Maximum Among 3 Numbers (Nested if)**

```c
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is max");
        }
        else
        {
            printf("c is max");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is max");
        }
        else
        {
            printf("c is max");
        }
    }

    getch();
}
```

---

### ✅ **Program 2: Check Even or Odd Using if...else**

```c
#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Number is even!");
    }
    else
    {
        printf("Number is odd!");
    }

    getch();
}
```

---

### ✅ **Program 3: Voting Eligibility with Nested if & Validation**

```c
#include <stdio.h>
#include <conio.h>

void main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        if (age > 100)
        {
            printf("You can't add age more than 100!");
        }
        else
        {
            printf("You are eligible to vote!");
        }
    }
    else
    {
        if (age <= 0)
        {
            if (age == 0)
            {
                printf("0 age is not allowed!");
            }
            else
            {
                printf("Negative age is not allowed!");
            }
        }
        else
        {
            printf("You are not eligible to vote!");
        }
    }

    getch();
}
```

---

## 🧪 Real-Life Analogy Table

| Operator    | Example                                | Real-Life Meaning             |
| ----------- | -------------------------------------- | ----------------------------- |
| `if`        | If it’s Sunday → Go to picnic          | One condition = One decision  |
| `if-else`   | If rain → Use umbrella, else go freely | Two-way road                  |
| `nested if` | If pass, then check grade              | Conditions within conditions  |
| `else-if`   | Check which among 3 doors open         | Stepwise checks until success |

---

## 📘 5 Practice Questions for Students

1. Write a program to check whether a given number is **positive, negative, or zero**.
2. Write a program to **check divisibility by 5 and 11** using `if-else`.
3. Write a program to **check whether a year is leap year or not**.
4. Write a program to find the **maximum among 4 numbers** using `else-if ladder`.
5. Write a program to **classify marks into grades** using nested if:

   * `>90` → A
   * `70–90` → B
   * `50–69` → C
   * `<50` → Fail
