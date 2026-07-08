**Numerical Analysis Root Approximation Methods (C++)**

This project implements three classical numerical methods in C++ to approximate:

The **cube root of -3** by solving **x³ + 3 = 0**

The **fourth root of 3** by solving **x⁴ − 3 = 0**

The algorithms compute the roots within a tolerance of **10⁻³** as required in the Numerical Analysis Programming Project.



**Implemented Methods:**

Bisection Method

Newton's Method

Fixed-Point Iteration



**Each method displays:**

Iteration number

Current approximation

Approximation error

Final computed root




**Features:**

Pure C++ implementation using the Standard Library

Step-by-step iteration output

Configurable tolerance and maximum number of iterations

Separate implementations for cube root and fourth root problems

Clean and easy-to-understand code for learning numerical methods




**Equations Solved**

**Cube Root of -3**

Equation: x³ + 3 = 0

Expected solution: ∛(-3) ≈ -1.44225

**Fourth Root of 3**

Equation: x⁴ − 3 = 0

Expected solution: ⁴√3 ≈ 1.31607


**Project Structure:**



bisection_cube()      // Bisection method for cube root

newton_cube()         // Newton's method for cube root

fixed_cube()          // Fixed-point iteration for cube root

bisection_fourth()    // Bisection method for fourth root

newton_fourth()       // Newton's method for fourth root

fixed_fourth()        // Fixed-point iteration for fourth root

main()                // Runs all methods and displays the results




**Technologies Used:**

C++

Standard Libraries:

iostream

iomanip

cmath




**Output**

<img width="581" height="836" alt="NAp1" src="https://github.com/user-attachments/assets/ec6b7fff-1bd7-4755-ba5a-cc5cc2087b28" />

<img width="528" height="420" alt="NAp2" src="https://github.com/user-attachments/assets/fde49755-5a31-4384-85ad-159aa618af31" />

