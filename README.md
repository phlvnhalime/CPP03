# 📦 CPP03 – Inheritance

Welcome to my repository for **CPP03**, the fourth module of the C++ curriculum at **42 School**.  
This project introduces **Inheritance**, one of the fundamental pillars of **Object-Oriented Programming**, using the **C++98 standard**.

---

## 🔍 Overview

This module covers essential inheritance concepts in C++:
- **Class Inheritance** and the "is-a" relationship
- **Protected access specifier** for inherited members
- **Constructor/Destructor chaining** in inheritance hierarchies
- **Method overriding** and specialized behavior
- **Code reusability** through inheritance
- **Polymorphic behavior** through inherited interfaces

The goal is to understand how to create class hierarchies and leverage inheritance for code organization and specialization.

---

## 🛠️ Compilation Rules

- **Compiler:** `c++`
- **Flags:** `-Wall -Wextra -Werror -std=c++98`
- ❌ No external libraries  
- ❌ No C++11 (or later) features  
- ❌ STL usage is **forbidden** until Module 08
- ❌ Forbidden functions: `*printf()`, `*alloc()`, `free()`
- ✅ **Orthodox Canonical Form** required for all classes

---

## 📁 Project Structure

```plaintext
CPP03/
├── ex00/
├── ex01/
└── ex02/
```

Each folder builds upon the previous one, creating an inheritance hierarchy of robot classes with specialized behaviors.

---

## 🏛️ Inheritance Fundamentals

### **Basic Inheritance Syntax**
```cpp
class Base {
protected:               // Accessible to derived classes
    int protectedMember;
public:
    Base();
    virtual ~Base();      // Important for proper cleanup
};

class Derived : public Base {  // Public inheritance
public:
    Derived();
    ~Derived();
};
```

### **Constructor/Destructor Chaining**
- **Construction:** Base → Derived (bottom-up)
- **Destruction:** Derived → Base (reverse order)

---

## 📘 Exercises Summary

### 🤖 ex00 – Aaaaand... OPEN!

**Goal:**  
Create the base `ClapTrap` class with basic combat mechanics and proper logging.

**ClapTrap Attributes:**
- `std::string name` - Robot's name
- `unsigned int hit_points (10)` - Health points
- `unsigned int energy_points (10)` - Energy for actions
- `unsigned int attack_damage (0)` - Damage dealt

**Member Functions:**
```cpp
void attack(const std::string& target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);
```

**Core Mechanics:**
- **Attack:** Costs 1 energy, deals attack_damage to target
- **Repair:** Costs 1 energy, restores hit points
- **No action possible** with 0 hit points or energy

**What I Learned:**
- **Basic class design** with game-like mechanics
- **Resource management** (hit points and energy)
- **Input validation** and boundary checking
- **Detailed logging** for all actions and state changes
- **Orthodox Canonical Form** implementation

**Example Output:**
```
ClapTrap Warrior attacks Goblin, causing 0 points of damage!
ClapTrap Warrior repairs itself, restoring 5 hit points!
```

### ⚔️ ex01 – Serena, my love!

**Goal:**  
Create `ScavTrap` class inheriting from `ClapTrap` with enhanced capabilities and different stats.

**ScavTrap Specialization:**
- **Inherits from:** `ClapTrap`
- **Hit points:** 100 (vs ClapTrap's 10)
- **Energy points:** 50 (vs ClapTrap's 10)
- **Attack damage:** 20 (vs ClapTrap's 0)

**Special Ability:**
```cpp
void guardGate();  // Enters Gate keeper mode
```

**Key Inheritance Features:**
- **Constructor chaining:** ClapTrap constructor called first
- **Different messages:** ScavTrap has unique attack messages
- **Method overriding:** Custom attack() behavior
- **Specialized functionality:** guardGate() unique to ScavTrap

**What I Learned:**
- **Basic inheritance** syntax and implementation
- **Constructor/destructor chaining** and proper order
- **Protected members** for inherited access
- **Method overriding** to customize behavior
- **Specialization** through inheritance

**Constructor Chain Output:**
```
ClapTrap constructor called
ScavTrap constructor called
ScavTrap destructor called
ClapTrap destructor called
```

### 🎯 ex02 – Repetitive work

**Goal:**  
Create `FragTrap` class, another `ClapTrap` descendant with different specialization.

**FragTrap Specialization:**
- **Inherits from:** `ClapTrap`
- **Hit points:** 100 (same as ScavTrap)
- **Energy points:** 100 (higher than ScavTrap's 50)
- **Attack damage:** 30 (higher than ScavTrap's 20)

**Special Ability:**
```cpp
void highFivesGuys(void);  // Requests positive high-fives
```

**Parallel Inheritance Design:**
```
    ClapTrap
    /        \
ScavTrap   FragTrap
```

**What I Learned:**
- **Parallel inheritance** from the same base class
- **Different specializations** of the same concept
- **Independent evolution** of derived classes
- **Constructor/destructor chaining** with multiple derived classes
- **Code reuse** through shared base class functionality

**Class Comparison:**
| Class | Hit Points | Energy | Attack Damage | Special Ability |
|-------|------------|--------|---------------|----------------|
| ClapTrap | 10 | 10 | 0 | None |
| ScavTrap | 100 | 50 | 20 | guardGate() |
| FragTrap | 100 | 100 | 30 | highFivesGuys() |

---


## 🚨 Common Inheritance Pitfalls Avoided

### **Virtual Destructors**
Always use virtual destructors in base classes for proper cleanup:
```cpp
class ClapTrap {
public:
    virtual ~ClapTrap();  // Ensures proper destruction
};
```

### **Constructor Chaining**
Always call base constructor explicitly:
```cpp
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    // Initialize derived-specific members
}
```

### **Access Level Management**
Use protected for members that derived classes need access to.

---

## 🎮 Game Design Through OOP

This module demonstrates how **inheritance models real-world relationships**:

**Base Concept:** All robots share common attributes (health, energy, damage)

**Specializations:**
- **ScavTrap:** Guardian role with gate-keeping abilities
- **FragTrap:** Social fighter with high-energy combat style

**Extensibility:** Easy to add new robot types (Mage, Healer, etc.) by inheriting from ClapTrap.

---

## 📣 Final Notes

This module was essential for understanding **inheritance as a fundamental OOP concept**. It demonstrates how to:

- **Model "is-a" relationships** through inheritance
- **Share common functionality** while allowing specialization  
- **Manage constructor/destructor chains** properly
- **Override methods** for customized behavior
- **Design extensible class hierarchies**

**Key Takeaways:**
- **Inheritance enables code reuse** and logical organization
- **Constructor/destructor chaining** is automatic but predictable
- **Protected access** bridges private and public for inheritance
- **Method overriding** allows customization while maintaining interface
- **Proper design** makes adding new derived classes straightforward

💬 *"Because you can never have enough ClapTraps!"* - Inheritance makes creating variations efficient and maintainable!

The ClapTrap family demonstrates how **inheritance creates flexible, extensible designs** while maintaining **code clarity and reusability**. Perfect foundation for more advanced OOP concepts! 🚀

---

**Author:** Halime Pehlivan.  
**School:** 42 Heilbronn
