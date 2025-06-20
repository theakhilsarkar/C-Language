

# 📘 C Language Notes – Swapping Two Variables Using Third Variable

---

## 📖 Definition

**Swapping** means **interchanging** the values of two variables.
In C, we can swap values using:

* A **third (temporary)** variable ✅

---

## 💡 Real-Life Analogy

| Action                                                      | Real-Life Example                                          |
| ----------------------------------------------------------- | ---------------------------------------------------------- |
| Swapping `a` and `b` using `c`                              | Temporarily storing an object somewhere to rearrange items |
| Example: Swapping two glasses of water using an empty glass |                                                            |

---

## 🧪 Practical Program – Swapping Using a Third Variable

```c
#include <stdio.h>

void main()
{
    // Swapping - Interchanging values of two variables using a third variable

    printf("\n\n"); // Just for spacing in output

    int a, b, c; // Declare three variables

    // Input values
    printf("Enter a : ");
    scanf("%d", &a);  // Example: a = 10
    printf("Enter b : ");
    scanf("%d", &b);  // Example: b = 20

    // Swapping logic
    c = a;   // Store value of a in c → c = 10
    a = b;   // Now a becomes b → a = 20
    b = c;   // Now b becomes original a → b = 10

    // Output after swapping
    printf("After Swapping:\na = %d, b = %d\n", a, b);
}
```

---

## 🔍 Example Input/Output

### 🔢 Input:

```
Enter a : 10  
Enter b : 20
```

### 🖨️ Output:

```
After Swapping:  
a = 20, b = 10
```

---

## 📊 Memory Visualization

| Step    | a  | b  | c  |
| ------- | -- | -- | -- |
| Initial | 10 | 20 | -  |
| `c = a` | 10 | 20 | 10 |
| `a = b` | 20 | 20 | 10 |
| `b = c` | 20 | 10 | 10 |

