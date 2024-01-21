fn main() {
    println!("Hello, world!");

    another_function();
    function_argument(5);
    print_labeled_measurement(5,'h');

    // Example of return value
    let x = four();
    println!("The value of x is {x}");
    let y = plus_one(6);
    println!("The value of y is {y}");
}

fn another_function() {
    println!("Another function.");
}

fn function_argument(x: i32) {
    println!("The value of x is {x}");
}

fn print_labeled_measurement(value: i32, unit_label: char) {
    println!("The measurement is {value}{unit_label}");
}

fn four() -> i32 {
    4
}

fn plus_one(y: i32) -> i32 {
    y + 1
}
