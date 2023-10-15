# Custom `printf` Implementation Project - README

**Project Title:** Custom `printf` Function Implementation

**Project Team:** Julien Barbier (Co-founder & CEO), Nnanna Atu, Nokulunga Cele

**Project Dates:** Oct 13, 2023 - Oct 18, 2023

**Project Objectives:** 

Develop a custom `printf` function in C, adhering to specific requirements and handling various conversion specifiers.

**Key Concepts:**

- Group Projects
- Pair Programming
- Flowcharts
- Technical Writing
- Printf Function Specifications

**Project Requirements:**

- Code in C using approved editors (vi, vim, emacs).
- Ubuntu 20.04 LTS compatibility using `gcc` with specific options.
- Code file endings with new lines.
- A mandatory `README.md` at the root of the project.
- Code must follow the Betty style, verified with `betty-style.pl` and `betty-doc.pl`.
- Prohibited use of global variables.
- Limit of 5 functions per file.
- Prototypes in a `main.h` header file with include guards.
- No `_putchar` function provided.
- Project hosted on GitHub with a single repository.

**Compilation:**

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

**Tasks:**

1. **Task 0:** Implement basic `printf` for `%c`, `%s`, and `%%`.
2. **Task 1:** Expand to handle `%d` and `%i`.
3. **Task 2:** Introduce `%b` for binary conversion.
4. **Task 3:** Extend to handle `%u`, `%o`, `%x`, and `%X`.
5. **Task 4:** Optimize with a local 1024-char buffer for fewer write calls.
6. **Task 5:** Implement custom `%S` to print strings, handling non-printable characters.
7. **Task 6:** Add support for `%p`.
8. **Task 7:** Handle flag characters `+`, space, and `#`.
9. **Task 8:** Implement `l` and `h` length modifiers.
10. **Task 9:** Handle field width.
11. **Task 10:** Add precision.
12. **Task 11:** Implement the `0` flag character.
13. **Task 12:** Introduce the `-` flag character.
14. **Task 13:** Implement custom `%r` for reversed string.
15. **Task 14:** Introduce custom `%R` for ROT13-encoded string.
16. **Task 15:** Ensure all options work together seamlessly.

**Guidelines:**

- Collaborate effectively within the team.
- Develop and maintain a comprehensive test suite.
- Uphold originality and coding standards.
- Leverage version control (Git) for GitHub repository management.

