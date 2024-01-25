use std::io;

fn main() {
    // Infinite loop
    /*
    loop {
        println!("Hello, world!");
    }
    */
    println!("\nfunction: return_from_loop");
    return_from_loop();
    println!("\nfunction: loop_label");
    loop_label();
    println!("\nfunction: while_loop");
    while_loop();
    println!("\nfunction: loopin_through_collection");
    looping_through_collection();
    println!("\nfunction: for_loop");
    for_loop();
    println!("\nfunction: for_loop_range");
    for_loop_range();
    println!("\nfunction: fahrenhit_to_celsius");
    fahrenhit_to_celsius();
    println!("\nfunction: fibonacci");
    fibonacci();
}

fn return_from_loop() {
    let mut counter = 0;

    let result = loop {
        println!("Counter = {counter}");
        counter += 1;
        if counter == 10 {
            break counter * 2;
        }
    };

    println!("The result is {result}");
}

fn loop_label() {
    let mut count = 0;
    'counting_up: loop {
        println!("count = {count}");

        let mut remaining = 10;
        loop {
            println!("remaining = {remaining}");
            if remaining == 9 {
                break;
            }
            if count == 2 {
                break 'counting_up;
            }
            remaining -= 1;
        }
        count += 1;
    }
    println!("End count = {count}");
}

fn while_loop() {
    let mut number = 3;
    while number != 0 {
        println!("{number}!");
        number -= 1;
    }
    println!("LIFTOFF!!!");
}

fn looping_through_collection() {
    let a = [10, 20, 30, 40, 50];
    let mut index = 0;
    while index < 5 {
        println!("The value is {}", a[index]);
        index += 1;
    }
}

fn for_loop() {
    let a = [10, 20, 30, 40, 50];
    for element in a {
        println!("The value is {element}");
    }
}

fn for_loop_range() {
    for number in (1..4).rev() {
        println!("{number}!");
    }
    println!("LIFTOFF!!!");
}

fn fahrenhit_to_celsius() {
    // Take input
    println!("Please input fahrenhit:");
    let mut f = String::new();
    io::stdin().read_line(&mut f).expect("Failed to read line.");
    let f: u32 = match f.trim().parse() {
        Ok(num) => num,
        Err(error) => panic!("Error: {:?}",error),
    };
    // Convert
    let c: u32 = ((f - 32) * 5) / 9;
    // Output
    println!("Celsius: {c}");
}

fn fibonacci() {
    println!("Please input a number:");
    let mut number = String::new();
    io::stdin().read_line(&mut number).expect("Failed to read line.");
    let mut number: i32 = match number.trim().parse() {
        Ok(num) => num,
        Err(error) => panic!("Error: {:?}",error),
    };
    println!("Fibonacci:");
    let mut a: i32 = 0;
    let mut b: i32 = 1;
    while number != 0 {
        println!("{a}");
        b = a + b;
        a = b - a;
        number -= 1;
    }
}
