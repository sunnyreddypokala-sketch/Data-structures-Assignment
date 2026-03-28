# 🚀 Data Structures Assignment – Stack & Queue (C)

## 📖 Overview

This repository contains C programs demonstrating the practical use of **Stack** and **Queue** data structures.
Each program solves a real-world problem using fundamental operations like push, pop, enqueue, and dequeue.

---

## 👨‍🎓 Student Information

* **Name:** P.Sunvith Kumar Reddy.
* **Course:** Introduction to Data Structure

---

## 📂 Programs List

### 🔁 1. String Reversal using Stack

Reverses a string by storing characters in a stack and retrieving them in reverse order.

**Execution:**

Compile and Run:
gcc Q1_Reverse_String.c
./a.out

**Output:**

```
Enter string: sunny
Reversed string: ynnus
```

---

### ⚖️ 2. Balanced Parentheses Checker

Validates whether an expression has properly matched parentheses using stack logic.

**Execution:**

```
gcc Q2_Balanced_Parentheses.c
./a.out
```

**Output:**

```
Input: ((A+B))
Output: Balanced Expression

Input: (A+B*(C-D)
Output: Not Balanced

```

---

### 📈 3. Next Greater Element Finder

Finds the next greater element for each value in an array using stack processing.

**Execution:**

```
gcc Q3_Next_Greater_Element.c
./a.out
```

**Output:**

```
Enter number of elements: 5
Enter elements: 4 5 2 10 8
output:
4 -> 5
5 -> 10
2 -> 10
10 -> -1
8 -> -1

Enter number of elemnts: 5
Enter elements: 3 7 1 7 8 4
Output:
3 -> 7
7 -> 8
1 -> 7
7 -> 8
8 -> -1
4 -> -1
```

---

### 🖨️ 4. Printer Queue Simulation

Simulates document printing using queue operations (FIFO principle).

**Execution:**

```
gcc Q4_Printer_Queue.c
./a.out
```

**Output:**

```
1.Add 2.Print 3.Display 4.Exit
Enter document number: 1
Document 1 added

1.Add 2.Print 3.Display 4.Exit
Enter document number: 2
Document 2 added

1.Add 2.Print 3.Display 4.Exit
Pending documents: 1 2

1.Add 2.Print 3.Display 4.Exit
Printing document 1

1.Add 2.Print 3.Display 4.Exit
Pending documents: 2
```

---

### 🔄 5. Circular Queue Implementation

Implements a circular queue using arrays with menu-driven operations.

**Execution:**

```
gcc Q5_Circular_Queue.c
./a.out
```

**Output:**

```
1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter value: 1000

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter value: 2000

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter value: 3000

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter value: 4000

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Queue elements: 1000 2000 3000 4000

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Front element: 1000

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Deleted: 1000

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Queue elements: 2000 3000 4000
```

---

## 🧠 Key Concepts Covered

* Stack (LIFO Principle)
* Queue (FIFO Principle)
* Circular Queue Handling
* Expression Validation
* Efficient Element Processing

---

## 🛠️ Tools & Environment

* Language: **C**
* Compiler: GCC
* OS: Windows / Linux

---

## 📁 Project Structure

```
Data-Structure-Assignment/
├── Q1_Reverse_String.c
├── Q2_Balanced_Parentheses.c
├── Q3_Next_Greater_Element.c
├── Q4_Printer_Queue.c
├── Q5_Circular_Queue.c
└── README.md
```

---

---
Made by P. Sunvith Kumar Reddy
---
