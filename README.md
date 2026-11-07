# c-from-scratch
Learning by doing!

A zero-dependency implementation of core C standard library string and memory manipulation primitives, built from scratch without relying on hosted system headers (`<string.h>`, `<stddef.h>`, etc.).

This repository houses both source code and technical engineering journals documenting low-level pointer arithmetic, memory safety, and C type-system mechanics.

## Repository Structure

* `lib/math/` - Mathematical primitives (`abs`, `dist`, etc.)
* `lib/mem/` - Memory management implementations (`memcpy`, `memmove`, `memset`, `memcmp`)[cite: 1]
* `lib/string/` - String manipulation implementations (`strlen`, `strchr`, `strcmp`, `strcpy`, `strcat`)
* `notes/` - Engineering journals and development logs

## Implemented Memory & String Primitives

### Memory Operations (`lib/mem/mem.h`)[cite: 1]
* `memcpy` - High-speed front-to-back byte copy for non-overlapping regions[cite: 1].
* `memmove` - Overlap-safe memory copy using directional pointer checks (`d < s` vs backward copy loops) to prevent data corruption[cite: 1].
* `memset` - Broadcasts a cast `unsigned char` value across a raw memory block[cite: 1].
* `memcmp` - Lexicographical byte-by-byte comparison returning signed deltas[cite: 1].

## Engineering Notes & Takeaways

* **Generic Pointer Arithmetic:** `void *` pointers cannot be dereferenced or incremented directly. All raw memory traversal is cast to `unsigned char *` (or `const unsigned char *`) to ensure precise 1-byte step increments.
* **Unsigned Underflow Avoidance:** Reverse traversal loops (such as backward copying in `memmove`) decrement from `n` using `i - 1` indexing to prevent infinite loops on unsigned `size_t` counters.
* **Const-Correctness:** Read-only input buffers are strictly qualified with `const` to enforce safety at compile time.