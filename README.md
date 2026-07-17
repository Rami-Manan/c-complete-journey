# C Complete Journey

A structured collection of C programs written while learning C from the ground up — part of my B.Tech Computer Science coursework at Gandhinagar Institute of Technology, Gandhinagar University.

## Why this repo exists

Most "learning C" repos are a dumping ground of random files in whatever order they were written. This one isn't. Every program is numbered and zero-padded (`000_`, `001_`, `002_`...) so the file list in GitHub sorts in the actual order the concepts were learned — from basics up to more complex programs. If you're following along or reviewing my progress, the number tells you the sequence.

## Structure

Each file is a self-contained `.c` program covering one concept or exercise. Naming convention:

```
NNN_Description.c
```

- `NNN` — three-digit zero-padded index (ensures correct lexicographic sort on GitHub)
- `Description` — short, underscore-separated summary of what the program does

## Topics covered so far

| Range | Topics |
|-------|--------|
| 000–002 | Fundamentals — keywords, Hello World, basic I/O |
| 003–006 | Arithmetic operations — sum, subtraction, multiplication, division |
| 007–008 | Input handling (`scanf`) and a simple calculator |
| 009+ | Geometry-based problems (e.g. area of a triangle) and beyond |

*(This table will grow as more programs are added — update it alongside new commits rather than letting it drift out of sync.)*

## Running the programs

Each file compiles independently with any standard C compiler:

```bash
gcc 000_Keyword.c -o output
./output
```

## Status

🚧 Actively updated as I progress through the C curriculum. Numbering is retroactively maintained — if you see a gap or a duplicate index, it's a known cleanup item and will be fixed via a renumbering pass, not left as-is.

## About me

B.Tech CSE student, aspiring data scientist, building this repo as part of a broader portfolio on GitHub.
