# CS-2001: Data Structures Lab - Lab 03

Repository containing solutions for Lab 03 focusing on elementary and non-elementary sorting algorithms implemented in C++.

---

## 📌 Tasks Overview

### Task 1: Standard Bubble Sort Analysis
An online store receives product prices in random order: `[45, 12, 78, 34, 23, 90]`[cite: 1]. Using the standard **Bubble Sort** algorithm[cite: 1]:
- [x] Track the number of passes required to completely sort the array[cite: 1].
- [x] Count total comparisons performed[cite: 1].
- [x] Count total swaps executed[cite: 1].
- [x] Display array state after each pass[cite: 1].

### Task 2: Modified vs. Standard Bubble Sort
A university stores nearly sorted attendance percentages: `[55, 61, 67, 72, 78, 81, 80, 85]`[cite: 1]. Using **Modified Bubble Sort** vs. **Standard Bubble Sort**[cite: 1]:
- [x] Determine the pass at which the array becomes sorted[cite: 1].
- [x] Track total comparisons before early termination[cite: 1].
- [x] Count total swaps performed[cite: 1].
- [x] Compare against standard Bubble Sort passes and comparisons on the same dataset[cite: 1].

### Task 3: Warehouse Quantities using Comb Sort
A warehouse tracks product quantities: `[10, 20, 30, 40, 5, 50, 60, 70]`[cite: 1]. Implement **Comb Sort** (shrink factor 1.3)[cite: 1, 4]:
- [x] Sort quantities in ascending order[cite: 1].
- [x] Output the `gap` used in every major iteration[cite: 1].
- [x] Display intermediate array states per iteration[cite: 1].

### Task 4: Server Load Balancing using Shell Sort
A cloud server receives load values: `[90, 20, 80, 30, 70, 40, 60, 50, 10]`[cite: 1]. Implement **Shell Sort**[cite: 1]:
- [x] Initialize `gap = n / 2` and halve iteratively until `gap = 1`[cite: 1].
- [x] Display complete array state after processing each gap[cite: 1].
- [x] Track local comparisons and shifts per gap iteration[cite: 1].
- [x] Output overall total comparisons and total shifts[cite: 1].

### Task 5: Student Performance Analyzer using Insertion Sort
Develop a student performance analyzer using **Insertion Sort** in descending order[cite: 1]:
- [x] **Input Validation:**
  - Student count $n$ must be $5 \le n \le 15$[cite: 1].
  - Marks must be $0 \le \text{mark} \le 100$[cite: 1].
- [x] **Sorting & Tracking:**
  - Sort marks in descending order[cite: 1].
  - Track total comparisons and shifts[cite: 1].
- [x] **Analytics:**
  - Display Highest, Lowest, and Average Marks[cite: 1].
  - Flag presence of high achievers ($\ge 90$)[cite: 1].

---

## 📁 Repository Structure

```text
.
├── task1.cpp   # Standard Bubble Sort Analysis
├── task2.cpp   # Modified vs. Standard Bubble Sort Comparison
├── task3.cpp   # Comb Sort Implementation
├── task4.cpp   # Shell Sort Implementation with Per-Gap Metrics
└── task5.cpp   # Student Performance Analyzer (Insertion Sort)
