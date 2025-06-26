## 🔁 **Loops in C – Complete Documentation**

---

### 📘 **What is a Loop?**

A **loop** is used when we want to **execute a block of code multiple times**.
Instead of writing the same code again and again, we use loops to repeat tasks **efficiently**.

---

### 🎯 **Why Use Loops?**

✅ Reuse code
✅ Save time
✅ Make output faster
✅ Reduce errors

---

### 🧱 **Parts of a Loop:**

Just like using Google Maps:

* **Start point** → Initialization
* **End point** → Condition
* **Speed/step** → Increment or Decrement

---

### 🌀 **Types of Loops**

| Type              | Control Type     | Used When                                                 |
| ----------------- | ---------------- | --------------------------------------------------------- |
| `while` loop      | Entry-controlled | Repeat block if condition is true (check first, then run) |
| `for` loop        | Entry-controlled | Most commonly used when you know how many times to run    |
| `do...while` loop | Exit-controlled  | Runs at least once (runs first, then checks)              |

---

### 🔁 **1. while Loop**

**Syntax**:

```c
initialization;
while (condition) {
    // code to repeat
    update;
}
```

#### ✅ Example: Print 1 to n using `while` loop

```c
int n, i;
printf("Enter n: ");
scanf("%d", &n);

i = 1;
while (i <= n) {
    printf("%d ", i);
    i++;
}
```

**Output (if n = 5)**:

```
1 2 3 4 5
```

---

### 🔁 **2. Reverse Loop: Print n to 1**

```c
int n = 5;
int i = n;
while (i >= 1) {
    printf("%d ", i);
    i--;
}
```

**Output**:

```
5 4 3 2 1
```

---

### 🔁 **3. Even Numbers from 10 to 2**

```c
int i = 10;
while (i >= 2) {
    if (i % 2 == 0) {
        printf("%d ", i);
    }
    i--;
}
```

**Output**:

```
10 8 6 4 2
```

---

### 🔁 **4. Print multiples of 4 till 3000**

```c
int i = 0;
while (i <= 3000) {
    printf("%d ", i);
    i += 4; // or i = i + 4;
}
```

---

### 🧠 **Loop Mistakes to Avoid**

| Mistake                   | Problem it causes                 |
| ------------------------- | --------------------------------- |
| Not updating `i`          | Infinite loop                     |
| Wrong condition (e.g. <>) | Loop may never run or run forever |
| Incorrect initialization  | Skips expected outputs            |

---

### 📝 **Summary Table**

| Loop Type    | Syntax                             | Checks Condition First? | Runs At Least Once? |
| ------------ | ---------------------------------- | ----------------------- | ------------------- |
| `while`      | `while(condition) { }`             | ✅ Yes                   | ❌ No                |
| `do...while` | `do { } while(condition);`         | ❌ No                    | ✅ Yes               |
| `for`        | `for(init; condition; update) { }` | ✅ Yes                   | ❌ No                |

