This project has been created as part of the 42 curriculum by cabboud.

# Data Archivist: Python File Operations

### Goal

Learn **Python file handling** progressively through 4 exercises.

### Exercises

* **Ex0 — Read:** `sys.argv` → `open()` → `read()` → `close()` → handle errors.
* **Ex1 — Write:** Read file → append `#` to each line → display → optionally save to new file.
* **Ex2 — Streams:**

  * `stdin` → input
  * `stdout` → normal output
  * `stderr` → errors
  * `flush()` → force buffered output immediately
* **Ex3 — Secure:** Use `with open()` → automatic closing → reusable `secure_archive()` → returns `(success, result)`.

### Core Concepts

* `open()` returns a **file object**, not file contents.
* `read()` / `write()` perform I/O.
* `close()` releases resources and flushes data.
* **Exceptions** handle missing files, permissions, invalid paths, etc.
* **Tuple:** `(True, data)` or `(False, error)`.
* **Context manager:** `with open(...)` guarantees cleanup, even after errors.
* `stdin` = input | `stdout` = output | `stderr` = errors.
* `flush()` forces buffered output to appear immediately.

### `open()` vs `with`

* Manual: `open()` → use → `close()`
* Safe: `with open()` → automatic `close()`
* **Ex0–2:** no `with`
* **Ex3:** must use `with`

### Requirements

* Python 3.10+
* `flake8` compliant
* `mypy` type hints
* Only authorized imports/functions
* Handle file errors without crashing

### Testing

```bash
python3 ex0/ft_ancient_text.py ancient_fragment.txt
python3 ex1/ft_archive_creation.py ancient_fragment.txt
python3 ex2/ft_stream_management.py ancient_fragment.txt
python3 ex3/ft_vault_security.py

flake8 .
mypy .
```

**In one sentence:**
**The project teaches file I/O → error handling → standard streams → buffering → context managers, while progressively building a safe file-archive system.**

### References
https://docs.python.org/3/tutorial/inputoutput.html
https://docs.python.org/3/library/functions.html#open
https://docs.python.org/3/library/sys.html
https://docs.python.org/3/library/io.html
https://docs.python.org/3/reference/compound_stmts.html#with

