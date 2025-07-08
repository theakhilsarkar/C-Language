

### ✅ **1. Right-Aligned Star Triangle (Pyramid)**

#### Pattern:

```
          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *
```

#### Code:

```c
for (i = 1; i <= 6; i++) {
    for (k = i; k <= 5; k++) {
        printf("  ");  // printing spaces
    }
    for (j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n");
}
```

#### Explanation:

* Outer loop `i` → rows from 1 to 6.
* First inner loop `k` → prints spaces to push stars to the right.
* Second inner loop `j` → prints stars based on row number.

---

### ✅ **2. Reverse Triangle with Numbers**

#### Pattern:

```
1 2 3 4 5
1 2 3 4
1 2 3
1 2
```

#### Code:

```c
for (i = 5; i >= 2; i--) {
    for (j = 1; j <= i; j++) {
        printf("%d ", j);
    }
    printf("\n");
}
```

#### Explanation:

* Outer loop from `5 to 2`.
* Inner loop prints numbers from 1 to `i`.

---

### ✅ **3. Number Triangle Increasing**

#### Pattern:

```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

#### Code:

```c
for (i = 1; i <= 5; i++) {
    for (j = 1; j <= i; j++) {
        printf("%d ", j);
    }
    printf("\n");
}
```

---

### ✅ **4. Mirrored Number Pattern with Spaces**

#### Pattern:

```
1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1
```

#### Code:

```c
for (i = 5; i >= 1; i--) {
    for (j = 1; j <= i; j++) {
        printf("%d ", j);     // Left side increasing numbers
    }
    for (l = i; l < 5; l++) {
        printf("    ");       // Spaces in middle
    }
    for (k = i; k >= 1; k--) {
        printf("%d ", k);     // Right side decreasing numbers
    }
    printf("\n");
}
```

#### Explanation:

* Combines increasing + spaces + decreasing numbers.
* Smart use of spacing to create mirror effect.

---

### ✅ **Empty Loop Placeholder (for future use)**

```c
// for()
// {
//     for()
//     {
//
//     }
// }
```

> This is just a placeholder to remind students how nested loops are structured.

