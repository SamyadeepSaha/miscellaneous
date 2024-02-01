fn main() {
    // Example with string
    let mut s = String::from("Hello");
    // push_str() appends a literal to a String
    s.push_str(", world!");
    println!("Inside main function {s}");
    takes_ownership(s);
    // following instruction cause an error
    // because ownership of s transfered to 
    // takes_ownership function
    // println!("Inside main function {s}");

    // Example with integer
    let x = 5;
    println!("Inside main function {x}");
    makes_copy(x);
    println!("Inside main function {x}");

    // Returning ownership of parameters
    let s1 = String::from("hello");
    let (s2, len) = calculate_length(s1);
    println!("The length of '{s2}' is {len}.");
    // Same thing but with reference
    let len1 = calculate_length_reference(&s2);
    println!("The length of '{s2}' is {len1}.");

    let mut s3 = String::from("hello");
    println!("s3: {s3}");
    change(&mut s3);
    println!("s3: {s3}");
    
    /*
     * We cannot make two mutable reference of
     * same variable. So, following code is invalid

    let r1 = &mut s;
    let r2 = &mut s;

    println!("{r1}, {r2}");

    */
    
    /* Here are some more example of multiple reference.

    // We can make mutable reference inside nested block,
    // and then one outside nested block
    {
        let r1 = &mut s;
    } // r1 goes out of scope here
    let r2 = &mut s;

    let r1 = &s; // no problem
    let r2 = &s; // no problem
    let r3 = &mut s; // BIG PROBLEM

     */

    let s4 = String::from("Hello World");
    let length = first_word(&s4);
    println!("First word size of '{s4}' is {length}");
    let _hello = first_word_slice(&s4);
    // Note: variables with name started with an
    // underscore can be left unused otherwise
    // cause a warning at compile time.
}

fn takes_ownership(some_string: String) {
    println!("{some_string}");
}

fn makes_copy(some_integer: i32) {
    println!("{some_integer}");
}

// Returning ownership of parameters
fn calculate_length(s: String) -> (String, usize) {
    let length = s.len();
    (s, length)
}

// Same thing but with reference
fn calculate_length_reference(s: &String) -> usize {
    s.len()
}

fn change(some_string: &mut String) {
    some_string.push_str(", world");
}

fn first_word(s: &String) -> usize {
    let bytes = s.as_bytes();
    for(i, &item) in bytes.iter().enumerate() {
        if item == b' ' {
            return i;
        }
    }
    s.len()
}

fn first_word_slice(s: &String) -> &str {
    let bytes = s.as_bytes();
    for(i, &item) in bytes.iter().enumerate() {
        if item == b' ' {
            return &s[0..i];
        }
    }
    &s[..]
}
