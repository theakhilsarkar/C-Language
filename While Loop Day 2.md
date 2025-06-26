## 🔁 **Loop Practice in C – Documentation**

---

### ✅ **1. Print Odd Numbers from 1 to n**

**Logic:**

* Start from 1
* Check if number is **odd** using `if (i % 2 == 1)`
* Print if it is odd

**Code:**

```c
int n;
printf("Enter n : ");
scanf("%d", &n);

int i = 1;
while (i <= n)
{
    if (i % 2 == 1)
    {
        printf("%d ", i);
    }
    i++;
}
```

---

### ✅ **2. Find Leap Years from 2000 to 3000**

**Logic:**

* Leap years repeat every 4 years
* Start from 2000 and keep adding 4 till 3000

**Code:**

```c
int start = 2000, end = 3000;

while (start <= end)
{
    printf("%d ", start);
    start += 4;
}
```

---

### ✅ **3. Print Multiplication Table (without loop)**

**Logic:**

* Use the variable `n`
* Manually print `n * 1`, `n * 2`, ..., `n * 10`

**Code:**

```c
int n = 5;
printf("%d * 1 = %d\n", n, n * 1);
printf("%d * 2 = %d\n", n, n * 2);
// ...
printf("%d * 10 = %d\n", n, n * 10);
```

> ⚠️ **Drawback**: Not reusable. Not scalable.

---

### ✅ **4. Print Multiplication Table (using loop)**

**Logic:**

* Start from `i = 1` and go till `i <= 10`
* Multiply `n * i` in each step

**Code:**

```c
int n = 81;
int i = 1;
while (i <= 10)
{
    printf("%d * %d = %d\n", n, i, n * i);
    i++;
}
```

---

### ✅ **5. Find Sum from 1 to n**

**Logic:**

* Start from 1
* Keep adding each number to `sum`

**Code:**

```c
int n = 10;
int i = 1, sum = 0;
while (i <= n)
{
    sum = sum + i;  // OR sum += i;
    i++;
}
printf("Sum is %d", sum);
```

**Output:**

```
Sum is 55
```

---

## 🧠 Summary of Learnings:

| Concept              | Use                             |
| -------------------- | ------------------------------- |
| Odd numbers          | `if (num % 2 == 1)`             |
| Leap year printing   | Start from 2000, increment by 4 |
| Manual vs Loop table | Loops make code dynamic         |
| Sum calculation      | Use a `sum` variable + loop     |
