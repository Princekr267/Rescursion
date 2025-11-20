<div align="center">

# 🔄 Recursion in C++
### *The Art of Self-Reference*

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License](https://img.shields.io/badge/license-MIT-green?style=for-the-badge)
![Status](https://img.shields.io/badge/status-active-success?style=for-the-badge)

> *"To understand recursion, you must first understand recursion."* - Ancient Programming Proverb

</div>

---

Welcome to the fascinating world of recursion! This repository contains a collection of recursive algorithms that'll make you think differently about problem-solving. 

## 🎯 What's Inside?

This isn't just another code dump. It's a journey from simple recursive functions to powerful divide-and-conquer algorithms that'll blow your mind!

### 🌱 **Fundamentals** (`recusion.cpp`)
Start your journey with the classics:
- **Factorial** - The "Hello World" of recursion
- **Fibonacci** - Watch the recursion tree explode! 🌳
- **Array Checker** - Is it sorted? Let recursion decide!
- **Sum Calculator** - Adding numbers the recursive way

### 🔍 **Search & Find** (`occurance.cpp`, `rotatedSearch.cpp`)
Level up with smarter searches:
- Find the **first** and **last** occurrence of elements
- **Optimized Power Function** - Calculate x^n in logarithmic time ⚡
- **Rotated Array Search** - Binary search meets twisted arrays

### ⚔️ **Divide & Conquer Masters** (`mergeSort.cpp`, `quickSort.cpp`)
The heavyweight champions of sorting:
- **Merge Sort** - Divide, conquer, and merge like a boss
- **Quick Sort** - Fast, furious, and in-place

### 🧩 **Brain Teasers** (`problems.cpp`)
Real-world recursive problems that'll challenge you:
- **Tiling Problem** - How many ways to tile a 2×n board?
- **Remove Duplicates** - Clean strings recursively
- **Friends Pairing** - Combinatorics meets recursion
- **Binary Strings** - Generate valid patterns without consecutive 1s

## 🎓 The Recursion Trinity

Every recursive function has three essential parts:

<table>
<tr>
<td align="center">🛑</td>
<td align="center">🔁</td>
<td align="center">✨</td>
</tr>
<tr>
<td align="center"><b>BASE CASE</b><br/>Where the magic stops</td>
<td align="center"><b>RECURSIVE CALL</b><br/>Where the magic happens</td>
<td align="center"><b>TRUST</b><br/>Believe in the process</td>
</tr>
</table>

## 📊 Performance at a Glance

| Algorithm | Speed | Space | When to Use |
|-----------|-------|-------|-------------|
| Factorial | O(n) | O(n) | Learning recursion |
| Fibonacci (naive) | O(2^n) 💀 | O(n) | When you hate efficiency |
| Power (optimized) | O(log n) ⚡ | O(log n) | When you're smart |
| Merge Sort | O(n log n) 🎯 | O(n) | Guaranteed performance |
| Quick Sort | O(n log n) 🎲 | O(log n) | In-place sorting |

## 🚀 Quick Start

```bash
# Pick any file and compile
g++ -o magic mergeSort.cpp

# Run and watch the magic happen
./magic
```

## 💡 Pro Tips

### ✅ DO:
- Always **define your base case first**
- Make the problem **smaller** with each call
- Draw the recursion tree on paper 📝
- Test with edge cases (0, 1, 2)

### ❌ DON'T:
- Forget the base case (enjoy your stack overflow! 💥)
- Make your problem bigger with each call
- Use recursion for everything (sometimes loops are better)
- Give up when it gets confusing (that's the fun part!)

## 🎨 Why Recursion is Beautiful

Recursion turns complex problems into elegant solutions. It's like having a team of mini-yous solving smaller versions of your problem. When they all report back, boom! 💥 Problem solved.

Think about it:
- **Sorting?** Split in half, sort each half, merge. Done.
- **Searching?** Check middle, search the right half. Easy.
- **Tree traversal?** Process root, recurse on children. Perfect.

## ⚠️ Common Gotchas

**The Missing Return Statement Bug** 🐛
Some functions in `rotatedSearch.cpp` are missing `return` statements before recursive calls. This is like making a phone call and hanging up before getting the answer!

**The Stack Overflow Special** 💀
Deep recursion = lots of function calls = stack goes bye-bye. If your recursion goes 10,000 levels deep, consider using iteration or memoization instead.

## 🔥 What Makes This Repo Special?

<div align="center">

| 💎 Real Code | 🎯 Variety | 📈 Learning Curve | ⭐ Classics |
|-------------|-----------|------------------|-----------|
| Actual working C++ | Baby steps to advanced | Easy → Hard progression | Interview favorites |

</div>

## 🎯 Perfect For:

- 🎓 Students learning recursion
- 💼 Developers preparing for interviews
- 🧠 Anyone who loves elegant solutions
- 🔍 Code enthusiasts exploring divide-and-conquer

## 🌟 Next Steps

1. **Clone** this repo
2. **Compile** and run each file
3. **Modify** the code - break it, fix it, improve it
4. **Visualize** the recursion with print statements
5. **Share** your learnings!

## 📚 Want More?

Once you've mastered these, dive into:
- Dynamic Programming (Recursion + Memoization)
- Backtracking (N-Queens, Sudoku)
- Tree/Graph Traversals (DFS, BFS)
- Divide & Conquer Strategies

---

<div align="center">

### 💭 *"Every expert was once a beginner who refused to give up!"* 💭

<br>

[![Made with Love](https://img.shields.io/badge/Made%20with-❤️-ff69b4?style=for-the-badge)](https://github.com)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=for-the-badge)](http://makeapullrequest.com)

<br>

**Found a bug? Have a cool recursive solution?** 

*Pull requests are always welcome!*

<br>

### ⭐ **Star this repo if recursion makes you happy!** ⭐

<br>

<sub>Built with 🔥 by developers, for developers</sub>

</div>
