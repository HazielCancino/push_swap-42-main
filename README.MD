# Push Swap

## Project Overview

The goal is to sort a stack of integers in ascending order using the minimum number of operations possible. The program takes integers as command line arguments and outputs the sequence of operations needed to sort them.

## Operations Available

- **sa** - swap first element of stack A
- **sb** - swap first element of stack B  
- **ss** - swap first element of both stacks
- **pa** - push first element from B to A
- **pb** - push first element from A to B
- **ra** - rotate stack A (shift all elements up)
- **rb** - rotate stack B (shift all elements up)
- **rr** - rotate both stacks
- **rra** - reverse rotate stack A (shift all elements down)
- **rrb** - reverse rotate stack B (shift all elements down)
- **rrr** - reverse rotate both stacks

## Usage

### Basic Usage
```bash
./push_swap [number1] [number2] [number3] ...
```

### Example
```bash
./push_swap 3 1 4 2 5
```

### Testing with Checker
```bash
echo "3 1 4 2 5" | ./push_swap | ./checker
```

## Files Structure

- `src/` - Main source code files
- `src_bonus/` - Bonus features and additional implementations  
- `libft/` - Library functions used throughout the project

## Features

### Core Functionality
- Sort integers using only stack operations
- Optimize for minimum number of moves
- Handle edge cases (empty stacks, single elements, etc.)

### Bonus Features
- Additional sorting algorithms
- Performance optimizations
- Extended test cases and validation

## Implementation Details

The project requires implementing:
1. Stack data structure management
2. Sorting algorithms with minimal operations
3. Command line argument parsing
4. Error handling for invalid inputs
5. Efficient memory management

## Learning Objectives

This project teaches:
- Algorithm design and optimization
- Stack data structure implementation
- Problem-solving under constraints
- Memory management techniques
- Performance analysis and optimization

## Getting Started

1. Clone the repository
2. Compile with `make`
3. Run with `./push_swap [numbers]`
4. Test with `./checker`

## Requirements

- C compiler (GCC recommended)
- Make utility
- Standard C library functions