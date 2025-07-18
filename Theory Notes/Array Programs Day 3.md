
# ✅ Lecture 3: Arrays in C

---

## **📌 What is an Array?**

An **array** is a collection of elements of the **same data type**, stored at **contiguous memory locations**.
It allows us to **store multiple values in a single variable** instead of declaring separate variables for each value.

---

### ✅ **Why use Arrays?**

✔ Efficient way to store multiple values of the same type
✔ Access elements using **index**
✔ Easier for **loops and operations** like addition, reverse, sorting, searching

---

## **📌 Syntax**

```c
data_type array_name[size];
```

Example:

```c
int a[5]; // Declares an array of size 5
```

---

## **✅ Key Points**

* Array **index starts from 0**
* Size must be a **positive integer**
* Elements must be of the **same type**

---

## **✅ Real-Life Example**

Imagine 5 students' marks:
Without array:

```c
int mark1, mark2, mark3, mark4, mark5;
```

With array:

```c
int marks[5];
```

👉 Easier to manage using **loops**.

---

## **✅ Practical Code**

```c
#include <stdio.h>

void main()
{
    int n, i;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];

    // Input array elements
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nArray in Reverse Order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}
```

---

## **✅ Output Example**

```
Enter size of array : 5
Enter a[0]: 1
Enter a[1]: 2
Enter a[2]: 3
Enter a[3]: 4
Enter a[4]: 5

Array in Reverse Order:
5 4 3 2 1
```

---

## **✅ Important Array Operations**

### 1. **Input and Display Array**

```c
for (i = 0; i < n; i++)
{
    printf("%d ", a[i]);
}
```

### 2. **Find Even Numbers**

```c
for (i = 0; i < n; i++)
{
    if (a[i] % 2 == 0)
    {
        printf("%d ", a[i]);
    }
}
```

### 3. **Print Numbers > 100 and < 200**

```c
for (i = 0; i < n; i++)
{
    if (a[i] > 100 && a[i] < 200)
    {
        printf("%d ", a[i]);
    }
}
```

### 4. **Add Two Arrays**

```c
for (i = 0; i < n; i++)
{
    sum[i] = a[i] + b[i];
}
```

### 5. **Print Array in Reverse Order**

```c
for (i = n - 1; i >= 0; i--)
{
    printf("%d ", a[i]);
}
```

---

## **✅ Theory Examples**

✔ Array of 5 integers:
`int marks[5] = {10, 20, 30, 40, 50};`

✔ Access third element:
`marks[2]; // Output: 30`

✔ Modify element:
`marks[1] = 25;`

---

## **✅ Practical Examples**

1. WAP to input 10 numbers and display them.
2. WAP to count total **even and odd numbers** in an array.
3. WAP to find the **maximum and minimum** element in an array.
4. WAP to calculate the **sum and average** of array elements.
5. WAP to **search** an element in an array.

---

## **✅ Practice Questions**

**Theory:**

1. Define an array. Why do we need arrays?
2. What is the difference between array and normal variables?
3. Explain how memory is allocated for an array.

**Practical:**

1. WAP to reverse an array without using another array.
2. WAP to sort an array in ascending order.
3. WAP to merge two arrays into one.
