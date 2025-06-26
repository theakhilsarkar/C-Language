
## ✅ **Code Summary: Pointer Function & String Comparison**

### 🔹 1. **Header Files**

```c
#include <stdio.h>    // for input/output functions
#include <string.h>   // for string handling functions like strcmp
#include <float.h>    // for float limits (though unused here)
```

---

### 🔹 2. **Pointer Function – Call by Reference**

```c
void increment(int *count)
{
    *count = *count + 1;
    printf("count = %d\n", *count);
}
```

📌 `*count` means you’re **changing the actual value** at the memory address.

🔁 Example usage:

```c
int count = 17;
increment(&count);  // pass address
```

* Output:

  ```
  count = 18
  count = 18
  ```

> ✅ This is **call by reference** (original variable is updated).

---

### 🔹 3. **String Comparison**

```c
char name[] = "vishal2232";
char copy[] = "vishal2232";
int x = strcmp(name, copy); // compare character by character
```

📌 `strcmp` returns:

* `0` → Strings are equal
* `< 0` → First string is less (alphabetically)
* `> 0` → First string is greater

So in this case:

```c
printf("%d", x);  // Output: 0
```

---

### 🧠 Concept Recap

| Concept              | Meaning/Use                 |
| -------------------- | --------------------------- |
| `*ptr`               | Value at the address        |
| `&var`               | Address of the variable     |
| `increment(&count)`  | Call by reference           |
| `strcmp(str1, str2)` | Compare 2 strings           |
| `"vishal2232"`       | Null-terminated string in C |

---

### ✍️ Optional: Modify and Test

Try changing:

```c
char copy[] = "vishal22";
```

Then:

```c
printf("%d", x);  // will give non-zero result
```


## ✅ **1. `strlen()` – String Length**

Returns the number of characters in a string (excluding `\0`).

```c
char name[] = "vishal";
printf("Length: %lu\n", strlen(name)); // Output: 6
```

---

## ✅ **2. `strcpy()` – Copy One String to Another**

Copies contents from `src` to `dest`.

```c
char src[] = "Hello";
char dest[20];
strcpy(dest, src);
printf("Copied: %s\n", dest); // Output: Hello
```

---

## ✅ **3. `strncpy()` – Copy with Limit**

Safer than `strcpy`, avoids overflow.

```c
char src[] = "world";
char dest[10];
strncpy(dest, src, 3);  // Only 3 characters
dest[3] = '\0';         // Add null terminator manually
printf("%s\n", dest);   // Output: wor
```

---

## ✅ **4. `strcat()` – Concatenate Strings**

Appends `src` to `dest`.

```c
char dest[20] = "Hello ";
char src[] = "World";
strcat(dest, src);
printf("%s\n", dest);  // Output: Hello World
```

---

## ✅ **5. `strncat()` – Concatenate with Limit**

Appends at most `n` characters.

```c
char dest[20] = "Hi ";
char src[] = "there!";
strncat(dest, src, 3);
printf("%s\n", dest);  // Output: Hi the
```

---

## ✅ **6. `strcmp()` – Compare Strings**

```c
strcmp("apple", "apple");  // Returns 0 (equal)
strcmp("a", "b");          // Returns negative
strcmp("z", "a");          // Returns positive
```

---

## ✅ **7. `strncmp()` – Compare First N Characters**

```c
strncmp("banana", "band", 3);  // Returns 0 (first 3 are same)
```

---

## ✅ **8. `strchr()` – Find First Occurrence of Character**

```c
char *result = strchr("hello", 'e');
if (result) {
    printf("Found at position: %ld\n", result - "hello"); // Output: 1
}
```

---

## ✅ **9. `strrchr()` – Find Last Occurrence of Character**

```c
char *result = strrchr("hello", 'l');
printf("%ld\n", result - "hello"); // Output: 3
```

---

## ✅ **10. `strstr()` – Find Substring**

```c
char *result = strstr("programming", "gram");
printf("%s\n", result); // Output: gramming
```

---

## ✅ **11. `strrev()` – Reverse String (Not in standard C, Turbo C supports it)**

```c
char str[] = "hello";
strrev(str);
printf("%s", str); // Output: olleh
```

> 🔁 Not available in GCC/standard compilers.

---

## ✅ **12. `strlwr()` and `strupr()` (Turbo C only)**

```c
char str[] = "HeLLo";
strlwr(str); // Output: hello
strupr(str); // Output: HELLO
```

---

## 📌 **Note:**

`strrev()`, `strlwr()`, `strupr()` are available in **Turbo C** but **not part of standard C**. In GCC, you'll need to write custom functions.
