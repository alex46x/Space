# ☕ Java Mastery Roadmap

### Learn Java from Zero to Advanced with Examples

A **complete, structured, beginner-friendly Java README.md**.
This single file can teach **Java from scratch to advanced level** with **clear explanations and runnable code examples**.

---

## 📌 Who Is This For?

* Absolute beginners
* C / C++ learners switching to Java
* University students
* Self-taught programmers

---

## 🧭 Complete Java Learning Path

1. Java Introduction
2. Java Basics
3. Control Flow Statements
4. Arrays & Strings
5. Object-Oriented Programming (OOP)
6. Advanced OOP Concepts
7. Exception Handling
8. File Handling
9. Collections Framework
10. Multithreading
11. Java 8+ Features
12. JDBC & Database Connectivity
13. Mini & Major Projects
14. Interview Preparation

---





## 1️⃣ Java Introduction

### 🔹 What is Java?

Java is a **high-level, object-oriented, platform-independent** programming language.
It follows the principle **Write Once, Run Anywhere (WORA)**.

### 🔹 How Java Works

```
.java → Compiler → .class → JVM → Output
```

---

## 2️⃣ Java Basics

### 🔹 First Java Program

```java
class Main {
    public static void main(String[] args) {
        System.out.println("Hello Java!");
    }
}
```

### 🔹 Variables & Data Types

```java
int age = 21;
double height = 5.5;
char grade = 'A';
boolean isStudent = true;
```

### 🔹 Type Casting

```java
int a = 10;
double b = a;   // implicit
int c = (int) b; // explicit
```

---

## 3️⃣ Control Flow Statements

### 🔹 If-Else

```java
int number = 10;
if(number % 2 == 0) {
    System.out.println("Even");
} else {
    System.out.println("Odd");
}
```

### 🔹 Loops

```java
for(int i = 1; i <= 5; i++) {
    System.out.println(i);
}
```

---

## 4️⃣ Arrays & Strings

### 🔹 Array Example

```java
int[] arr = {1, 2, 3, 4};
for(int x : arr) {
    System.out.println(x);
}
```

### 🔹 String Operations

```java
String name = "MRX";
System.out.println(name.length());
System.out.println(name.toLowerCase());
```

---

## 5️⃣ Object-Oriented Programming (OOP)

### 🔹 Class & Object

```java
class Student {
    String name;
    int age;

    void show() {
        System.out.println(name + " " + age);
    }
}

class Main {
    public static void main(String[] args) {
        Student s = new Student();
        s.name = "Adiar";
        s.age = 21;
        s.show();
    }
}
```

### 🔹 Inheritance

```java
class Animal {
    void eat() {
        System.out.println("Eating");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Barking");
    }
}
```

### 🔹 Polymorphism

```java
Animal a = new Dog();
a.eat();
```

---

## 6️⃣ Advanced OOP Concepts

### 🔹 Interface

```java
interface A {
    void show();
}

class B implements A {
    public void show() {
        System.out.println("Interface Method");
    }
}
```

### 🔹 Abstract Class

```java
abstract class Shape {
    abstract void draw();
}

class Circle extends Shape {
    void draw() {
        System.out.println("Drawing Circle");
    }
}
```

---

## 7️⃣ Exception Handling

```java
try {
    int x = 10 / 0;
} catch(Exception e) {
    System.out.println("Exception Occurred");
} finally {
    System.out.println("Done");
}
```

---

## 8️⃣ File Handling

```java
import java.io.*;

class Main {
    public static void main(String[] args) throws Exception {
        FileWriter fw = new FileWriter("data.txt");
        fw.write("Hello File");
        fw.close();
    }
}
```

---

## 9️⃣ Collections Framework

```java
import java.util.*;

class Main {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(20);

        for(int x : list) {
            System.out.println(x);
        }
    }
}
```

---

## 🔟 Multithreading

```java
class MyThread extends Thread {
    public void run() {
        System.out.println("Thread Running");
    }
}

class Main {
    public static void main(String[] args) {
        new MyThread().start();
    }
}
```

---

## 1️⃣1️⃣ Java 8+ Features

### 🔹 Lambda Expression

```java
interface Test {
    void show();
}

class Main {
    public static void main(String[] args) {
        Test t = () -> System.out.println("Lambda Works");
        t.show();
    }
}
```

---

## 1️⃣2️⃣ JDBC Example

```java
import java.sql.*;

class Main {
    public static void main(String[] args) throws Exception {
        Connection con = DriverManager.getConnection(
            "jdbc:mysql://localhost:3306/db",
            "root",
            "password"
        );
        System.out.println("Database Connected");
    }
}
```

---

## 1️⃣3️⃣ Practice Projects

### 🟢 Beginner

* Calculator
* Number Guessing Game

### 🟡 Intermediate

* Student Management System
* Banking System

### 🔴 Advanced

* Chat Application
* Java + Database App

---

## 1️⃣4️⃣ Interview Preparation

* OOP Concepts
* Collections
* Exception Handling
* Multithreading
* Java 8 Features

---

## 🧰 Tools Required

* JDK 17+
* IntelliJ IDEA / VS Code
* Git & GitHub

---

## 🎯 Final Goal

After finishing this roadmap, you will be able to:

* Write clean Java code
* Build real-world projects
* Crack Java interviews

---

## 👤 Author


# 📘 Java Introduction – Deep Notes & Practice

This file contains **detailed theory + practice questions** for Java beginners.
Follow this before writing code.

---

## 🔹 What is Java?

Java is a **high-level, object-oriented, platform-independent** programming language developed by Sun Microsystems (now Oracle).

### Key Points

* Easy to learn
* Secure
* Robust
* Object-Oriented
* Platform Independent

---

## 🔹 Why Java is Platform Independent?

Java code is not directly compiled to machine code.

### Java Execution Flow

```
.java → javac → .class → JVM → Output
```

* `.class` file runs on any OS
* JVM converts bytecode to machine code

---

## 🔹 JDK vs JRE vs JVM

| Component | Description                                |
| --------- | ------------------------------------------ |
| JDK       | Java Development Kit (Compiler + Tools)    |
| JRE       | Java Runtime Environment (Libraries + JVM) |
| JVM       | Java Virtual Machine (Executes bytecode)   |

---

## 🔹 Java Features Explained

* **Object-Oriented** → Code is written using classes & objects
* **Secure** → No pointer, strong memory management
* **Robust** → Exception handling & garbage collection
* **Multithreaded** → Supports concurrent execution

---

## 🔹 First Java Program Explained

```java
class HelloJava {
    public static void main(String[] args) {
        System.out.println("Hello Java");
    }
}
```

### Line-by-Line Explanation

* `class HelloJava` → Class name
* `main()` → Program entry point
* `System.out.println()` → Prints output

---

## ⚠️ Common Beginner Mistakes

* Class name & file name mismatch
* Missing semicolon `;`
* Writing code outside class
* Case sensitivity issues

---

## 🧪 Practice Questions

### 🟢 Basic

1. What is Java?
2. Why Java is platform independent?
3. Difference between JDK and JRE?

### 🟡 Medium

4. Explain Java execution process
5. What is JVM and its role?

### 🔴 Challenge

6. Write Java features from memory

---

## ✍️ Practice Task

* Install JDK
* Write & run HelloJava program
* Change output text
* Rename class & observe errors

---

## ✅ Next Topic

➡️ **02_Basics (Variables, Data Types, Input/Output)**

---

# 📘 02_Java_Basics – Deep Notes (Part 1)

⚠️ **Rule Followed**: This section continues **after Java Introduction**.
Code examples are given, but **topic is NOT finished here**.
Next continuation will start exactly from where this stops.

---

## 🔹 What Are Variables?

A variable is a **container** used to store data in memory.

### Syntax

```java
dataType variableName = value;
```

### Example

```java
int age = 21;
String name = "MRX";
```

---

## 🔹 Data Types in Java

Java has **two main types** of data types.

### 1️⃣ Primitive Data Types

| Type    | Size    | Example                |
| ------- | ------- | ---------------------- |
| int     | 4 bytes | `int a = 10;`          |
| double  | 8 bytes | `double x = 5.5;`      |
| char    | 2 bytes | `char g = 'A';`        |
| boolean | 1 bit   | `boolean isOk = true;` |

---

### 2️⃣ Non-Primitive Data Types

* String
* Array
* Class
* Interface

Example:

```java
String city = "Khulna";
```

---

## 🔹 Naming Rules (Very Important)

✅ Must start with letter, `_` or `$`
❌ Cannot start with number
❌ Cannot use Java keywords

Example:

```java
int rollNumber;   // valid
int 1number;      // invalid
```

---

## 🔹 Type Casting (Concept Only)

Type casting means converting one data type into another.

Types:

* Implicit (Automatic)
* Explicit (Manual)

Example:

```java
int a = 10;
double b = a;   // implicit
```

⚠️ **Explicit casting will be continued later**

---

## ⚠️ Common Beginner Mistakes

* Forgetting data type
* Using wrong variable name
* Confusing `char` with `String`

---

## 🧪 Practice Questions (Do Not Skip)

1. What is a variable?
2. Write 3 valid variable names
3. Difference between primitive & non-primitive data types

---

## ⏸ STOP POINT

Next continuation will start from:
➡️ **Explicit Type Casting + Operators**

⚠️ Do NOT jump ahead.

---
# 📘 02_Java_Basics – Deep Notes (Part 2)

⚠️ **Continuation Rule Followed**
This part starts **exactly from the previous STOP POINT**.
Topic is **still NOT finished** here.

---

## 🔹 Explicit Type Casting (Manual Casting)

When converting a **larger data type to a smaller data type**, manual casting is required.

### Syntax

```java
smallerType variable = (smallerType) largerValue;
```

### Example

```java
double price = 99.99;
int newPrice = (int) price;
System.out.println(newPrice); // Output: 99
```

⚠️ Data loss may occur during explicit casting.

---

## 🔹 Operators in Java

Operators are symbols used to perform operations on variables and values.

---

### 1️⃣ Arithmetic Operators

| Operator | Meaning        |
| -------- | -------------- |
| +        | Addition       |
| -        | Subtraction    |
| *        | Multiplication |
| /        | Division       |
| %        | Modulus        |

### Example

```java
int a = 10;
int b = 3;

System.out.println(a + b);
System.out.println(a - b);
System.out.println(a * b);
System.out.println(a / b);
System.out.println(a % b);
```

---

### 2️⃣ Relational (Comparison) Operators

| Operator | Meaning               |
| -------- | --------------------- |
| ==       | Equal to              |
| !=       | Not equal             |
| >        | Greater than          |
| <        | Less than             |
| >=       | Greater than or equal |
| <=       | Less than or equal    |

### Example

```java
int x = 5;
int y = 10;

System.out.println(x > y);
System.out.println(x == y);
```

---

### 3️⃣ Logical Operators

| Operator | Meaning     |   |            |
| -------- | ----------- | - | ---------- |
| &&       | Logical AND |   |            |
|          |             |   | Logical OR |
| !        | Logical NOT |   |            |

### Example

```java
int age = 20;
boolean hasID = true;

System.out.println(age >= 18 && hasID);
```

---

## ⚠️ Common Beginner Mistakes

* Using `=` instead of `==`
* Integer division confusion (`5/2 = 2`)
* Forgetting type casting

---

## 🧪 Practice Questions

1. What is explicit type casting?
2. Difference between `=` and `==`
3. Predict output: `10 / 3`

---
# 📘 02_Java_Basics – Deep Notes (Part 3)

⚠️ Continuation mode ON
This part starts exactly from the previous STOP POINT.
Topic is still NOT finished here.

---

## 🔹 Unary Operators

Unary operators work with **a single operand**.

| Operator | Meaning     |
| -------- | ----------- |
| +        | Unary plus  |
| -        | Unary minus |
| ++       | Increment   |
| --       | Decrement   |
| !        | Logical NOT |

---

## 🔹 Increment & Decrement Operators

There are **two types**:

* Pre-increment / Pre-decrement
* Post-increment / Post-decrement

---

### 1️⃣ Pre-Increment (++a)

First increments the value, then uses it.

```java
int a = 5;
System.out.println(++a); // 6
System.out.println(a);   // 6
```

---

### 2️⃣ Post-Increment (a++)

First uses the value, then increments it.

```java
int b = 5;
System.out.println(b++); // 5
System.out.println(b);   // 6
```

---

### 3️⃣ Pre-Decrement (--a)

```java
int x = 10;
System.out.println(--x); // 9
```

---

### 4️⃣ Post-Decrement (a--)

```java
int y = 10;
System.out.println(y--); // 10
System.out.println(y);   // 9
```

---

## 🔹 Logical NOT (!) Operator

Reverses boolean value.

```java
boolean isJavaFun = true;
System.out.println(!isJavaFun); // false
```

---

## ⚠️ Common Beginner Confusions

* Mixing pre & post increment
* Expecting `a++` to increment before use
* Writing multiple increments in one line

---

## 🧪 Practice Questions

1. Difference between `++a` and `a++`?
2. Predict output:

   ```java
   int a = 3;
   System.out.println(a++ + ++a);
   ```
3. What does `!false` return?

---


# 📘 02_Java_Basics – Deep Notes (Part 4)

⚠️ Continuation mode ON
This part starts exactly from the previous STOP POINT.
Topic is still NOT finished here.

---

## 🔹 User Input in Java (Scanner Class)

So far, programs used **hard-coded values**.
To make programs **interactive**, Java uses the `Scanner` class.

---

## 🔹 What is Scanner?

`Scanner` is a class from the `java.util` package used to take input from the user.

### Import Statement

```java
import java.util.Scanner;
```

---

## 🔹 Creating a Scanner Object

```java
Scanner sc = new Scanner(System.in);
```

* `System.in` → standard input (keyboard)
* `sc` → Scanner object name

---

## 🔹 Taking Different Types of Input

### 1️⃣ Integer Input

```java
Scanner sc = new Scanner(System.in);
int age = sc.nextInt();
System.out.println(age);
```

---

### 2️⃣ Double Input

```java
double price = sc.nextDouble();
System.out.println(price);
```

---

### 3️⃣ Single Word String Input

```java
String name = sc.next();
System.out.println(name);
```

---

### 4️⃣ Full Line String Input

```java
sc.nextLine(); // clear buffer
String address = sc.nextLine();
System.out.println(address);
```

---

## ⚠️ Important Scanner Issue (Very Common)

### Problem

After using `nextInt()` or `nextDouble()`, `nextLine()` may be skipped.

### Reason

* `nextInt()` leaves a newline (`\n`) in the buffer

### Solution

```java
sc.nextLine(); // clear buffer
```

---

## 🔹 Complete Example

```java
import java.util.Scanner;

class InputDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter age: ");
        int age = sc.nextInt();

        sc.nextLine(); // clear buffer

        System.out.print("Enter name: ");
        String name = sc.nextLine();

        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}
```

---

## ⚠️ Common Beginner Mistakes

* Forgetting to import Scanner
* Using `next()` instead of `nextLine()`
* Ignoring buffer issue

---

## 🧪 Practice Questions

1. Difference between `next()` and `nextLine()`?
2. Why does `nextLine()` get skipped?
3. Write a program to input name, age, and salary

---

## ⏸ STOP POINT

Next continuation will start from:
➡️ **Control Flow Statements (if, else)**

⚠️ Practice Scanner properly before moving on.


# 📘 03_Control_Flow – Deep Notes (Part 1)

⚠️ Continuation mode ON
This section starts exactly from the previous STOP POINT.
Topic will continue in next parts.

---

## 🔹 What is Control Flow?

Control flow determines **how the program executes statements** based on conditions.
It helps the program **make decisions**.

---

## 🔹 if Statement

The `if` statement executes code **only if the condition is true**.

### Syntax

```java
if(condition) {
    // code
}
```

### Example

```java
int age = 20;

if(age >= 18) {
    System.out.println("Eligible to vote");
}
```

---

## 🔹 if-else Statement

Used when there are **two possible outcomes**.

### Syntax

```java
if(condition) {
    // true block
} else {
    // false block
}
```

### Example

```java
int number = 7;

if(number % 2 == 0) {
    System.out.println("Even number");
} else {
    System.out.println("Odd number");
}
```

---

## 🔹 Nested if

An `if` inside another `if`.

### Example

```java
int marks = 85;

if(marks >= 40) {
    if(marks >= 80) {
        System.out.println("Grade A");
    }
}
```

---

## 🔹 if-else-if Ladder

Used when **multiple conditions** need to be checked.

### Syntax

```java
if(condition1) {

} else if(condition2) {

} else {

}
```

### Example

```java
int marks = 72;

if(marks >= 80) {
    System.out.println("A Grade");
} else if(marks >= 60) {
    System.out.println("B Grade");
} else if(marks >= 40) {
    System.out.println("C Grade");
} else {
    System.out.println("Fail");
}
```

---

## ⚠️ Common Beginner Mistakes

* Using `=` instead of `==`
* Missing braces `{}`
* Wrong condition order in ladder

---

## 🧪 Practice Questions

1. Difference between `if` and `if-else`?
2. Write a program to check positive or negative number
3. Predict output for nested if

---

## ⏸ STOP POINT

Next continuation will start from:
➡️ **switch Statement**

⚠️ Practice if-else properly before moving on.


# 📘 03_Control_Flow – Deep Notes (Part 2)

⚠️ Continuation mode ON
This part starts exactly from the previous STOP POINT.
Topic will continue further.

---

## 🔹 switch Statement

The `switch` statement is used when we need to compare **one variable against multiple fixed values**.
It is often cleaner than long `if-else-if` ladders.

---

## 🔹 Syntax

```java
switch(expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
```

---

## 🔹 How switch Works

* `expression` is evaluated once
* Matching `case` block is executed
* `break` stops execution
* `default` runs if no case matches

---

## 🔹 Example: Day of the Week

```java
int day = 3;

switch(day) {
    case 1:
        System.out.println("Monday");
        break;
    case 2:
        System.out.println("Tuesday");
        break;
    case 3:
        System.out.println("Wednesday");
        break;
    default:
        System.out.println("Invalid Day");
}
```

---

## 🔹 switch with char

```java
char grade = 'A';

switch(grade) {
    case 'A':
        System.out.println("Excellent");
        break;
    case 'B':
        System.out.println("Good");
        break;
    default:
        System.out.println("Average");
}
```

---

## 🔹 switch with String

```java
String role = "admin";

switch(role) {
    case "admin":
        System.out.println("Full Access");
        break;
    case "user":
        System.out.println("Limited Access");
        break;
    default:
        System.out.println("Guest Access");
}
```

---

## ⚠️ Important Notes

* `break` is mandatory (otherwise fall-through happens)
* `switch` does NOT work with ranges
* Expression type: `int`, `char`, `String`, `enum`

---

## 🔹 Fall-Through Example (No break)

```java
int x = 1;

switch(x) {
    case 1:
        System.out.println("One");
    case 2:
        System.out.println("Two");
}
```

Output:

```
One
Two
```

---

## ⚠️ Common Beginner Mistakes

* Forgetting `break`
* Using float/double in switch
* Expecting range check

---

## 🧪 Practice Questions

1. Difference between `if-else` and `switch`?
2. What happens if `break` is missing?
3. Write a menu-based program using switch

---

## ⏸ STOP POINT

Next continuation will start from:
➡️ **Loops (for loop)**

⚠️ Practice switch carefully before moving on.


