fn main() {
    single_condition();
    multi_conditions();
    if_in_let();
}

fn single_condition() {
    let number = 3;
    //let number = 7;
    if number < 5 {
        println!("Condition was true");
    } else {
        println!("Condition was false");
    }
    if number != 0 {
        println!("Number was something other than zero");
    }
}

fn multi_conditions() {
    let number = 6;
    
    if number % 4 == 0 {
        println!("Number is divisible by 4");
    } else if number % 3 == 0 {
        println!("Number is divisible by 3");
    } else if number % 2 == 0 {
        println!("Number is divisible by 2");
    } else {
        println!("Number is not divisible by 4, 3 or 2");
    }
}

fn if_in_let() {
    let condition = true;
    let number = if condition { 5 } else { 6 };
    println!("The value of number is {number}");
}
