# ☕ Java Full Roadmap – From Beginner to Advanced

A complete, well-structured **Java learning README.md** with explanations and **code examples**.
Anyone can learn Java step by step by following this single file.

---

## 📌 Who Is This For?

* Absolute beginners
* C / C++ learners switching to Java
* University students
* Self‑taught developers

---

## 🧭 Java Learning Roadmap

1. Java Introduction
2. Java Basics
3. Control Statements
4. Arrays & Strings
5. Object-Oriented Programming (OOP)
6. Advanced OOP
7. Exception Handling
8. File Handling
9. Collections Framework
10. Multithreading
11. Java 8+ Features
12. JDBC & Database
13. Practice Projects

---

## 1️⃣ Java Introduction

### 🔹 What is Java?

Java is a **high-level, object-oriented, platform-independent** programming language.

### 🔹 Why Java?

* Platform Independent (Write Once, Run Anywhere)
* Secure & Robust
* Large Community
* Used in Android, Web, Enterprise apps

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

---

## 3️⃣ Control Statements

### 🔹 If-Else Example

```java
int number = 10;

if(number > 0) {
    System.out.println("Positive number");
} else {
    System.out.println("Negative number");
}
```

### 🔹 Loop Example

```java
for(int i = 1; i <= 5; i++) {
    System.out.println(i);
}
```

---

## 4️⃣ Arrays & Strings

### 🔹 Array Example

```java
int[] numbers = {1, 2, 3, 4, 5};

for(int n : numbers) {
    System.out.println(n);
}
```

### 🔹 String Example

```java
String name = "MRX";
System.out.println(name.length());
System.out.println(name.toUpperCase());
```

---

## 5️⃣ Object-Oriented Programming (OOP)

### 🔹 Class & Object

```java
class Student {
    String name;
    int age;

    void display() {
        System.out.println(name + " " + age);
    }
}

class Main {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Adiar";
        s1.age = 21;
        s1.display();
    }
}
```

### 🔹 Inheritance Example

```java
class Animal {
    void eat() {
        System.out.println("Eating...");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Barking...");
    }
}
```

---

## 6️⃣ Exception Handling

```java
try {
    int a = 10 / 0;
} catch(Exception e) {
    System.out.println("Error Occurred");
}
```

---

## 7️⃣ File Handling

```java
import java.io.File;

class Main {
    public static void main(String[] args) {
        File file = new File("data.txt");
        System.out.println(file.exists());
    }
}
```

---

## 8️⃣ Collections Framework

```java
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("Java");
        list.add("Python");

        for(String s : list) {
            System.out.println(s);
        }
    }
}
```

---

## 9️⃣ Multithreading

```java
class MyThread extends Thread {
    public void run() {
        System.out.println("Thread Running");
    }
}

class Main {
    public static void main(String[] args) {
        MyThread t = new MyThread();
        t.start();
    }
}
```

---

## 🔟 Java 8+ Features (Lambda)

```java
interface A {
    void show();
}

class Main {
    public static void main(String[] args) {
        A obj = () -> System.out.println("Lambda Expression");
        obj.show();
    }
}
```

---

## 1️⃣1️⃣ JDBC Example

```java
import java.sql.*;

class Main {
    public static void main(String[] args) throws Exception {
        Connection con = DriverManager.getConnection(
            "jdbc:mysql://localhost:3306/test",
            "root",
            "password"
        );
        System.out.println("Connected");
    }
}
```

---

## 1️⃣2️⃣ Practice Projects

* Calculator
* Student Management System
* Banking System
* File Based Login System

---

## 🎯 Final Goal

After completing this roadmap, you will:

* Understand Java deeply
* Build real-world applications
* Be job & interview ready

---

## 👤 Author

**MRX (Adiar)**
GitHub: [https://github.com/alex46x](https://github.com/alex46x)

⭐ Star this repo if it helped you!
