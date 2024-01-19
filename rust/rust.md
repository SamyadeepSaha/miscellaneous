# Rust Programming

## Data Types

- Scalar Types
    - Integer
    - Floating Point
    - Boolean
    - Character
- Compound Types
    - Tuples
    - Array

### Integer Types

| Length | Signed | Unsigned |
|--------|--------|----------|
| 8bit   | i8     | u8       |
| 16bit  | i16    | u16      |
| 32bit  | i32    | u32      |
| 64bit  | i64    | u64      |
| 128bit | i128   | u128     |
| arch   | isize  | usize    |

### Character Types

Character types is four bytes in size and represents unicode scalar
value, which means it can represents a lot than just ASCII. Accented
letters, Chinese, Japanese and Korean, character emojis and zero-width
spaces are all valid char values in Rust.
