

## 📘 C Language – Pointers, Memory & Strings

---

### 🔹 **1. What is a Pointer?**

A **pointer** is a variable that stores the **memory address** of another variable.

```c
int a = 18;
int *ad = &a;  // pointer to int
int **ad2 = &ad; // pointer to pointer
int ***ad3 = &ad2; // triple pointer
```

🔍 **Memory Access Examples:**

```c
printf("%d\n", a);     // value of a
printf("%d\n", &a);    // address of a
printf("%d\n", ad);    // address of a (same as &a)
printf("%d\n", **ad2); // value of a using double pointer
```

---

### 🔹 **2. Memory Units**

| Unit       | Value  |
| ---------- | ------ |
| 1 bit      | 0 or 1 |
| 8 bits     | 1 byte |
| 1024 bytes | 1 KB   |
| 1024 KB    | 1 MB   |
| 1024 MB    | 1 GB   |
| 1024 GB    | 1 TB   |

---

### 🔹 **3. Memory Size of Data Types**

| Data Type | Memory (Bytes) |
| --------- | -------------- |
| `int`     | 4 bytes        |
| `float`   | 4 bytes        |
| `double`  | 8 bytes        |
| `char`    | 1 byte         |

> 🔧 Large arrays use more memory:
> `double arr[100000000];` → this will try to reserve **800MB** (100 million × 8 bytes)

---

### 🔹 **4. Contiguous Memory Example (Array)**

```c
char x[3] = {1, 2, 3};

printf("%d\n", &x[0]);
printf("%d\n", &x[1]);
printf("%d\n", &x[2]);
```

Output will show **consecutive memory locations** for each element.

---

### 🔹 **5. String in C**

```c
char name[6] = "vishal";
```

🧠 `"vishal"` is **not a string literal** in this case — no `\0` null character is included (because size is only 6).

🖨️ To print the string:

```c
printf("%s", name); // Output: vishal
```

OR character-by-character:

```c
for (int i = 0; i < 6; i++)
{
    printf("%c", name[i]);
}
```

---

### 🔹 **6. Real-Life Use of C**

* OS Development (Windows, Linux)
* Hardware-level programming
* Device Drivers
* Embedded Systems

---

### 🧠 Summary Table

| Topic         | Key Point                                  |
| ------------- | ------------------------------------------ |
| Pointer       | Stores memory address                      |
| \&a           | Address of variable `a`                    |
| \*ptr         | Access value from address                  |
| Memory units  | Bit → Byte → KB → MB → GB                  |
| String        | Character array                            |
| Array storage | Stored in continuous memory                |
| Usage         | Hardware, embedded systems, OS development |

