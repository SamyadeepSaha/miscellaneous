enum Coin {
    Penny,
    Nickel,
    Dime,
    Quarter,
}

fn value_in_cents(coin: Coin) -> u8 {
    match coin {
        Coin::Penny => 1,
        Coin::Nickel => 5,
        Coin::Dime => 10,
        Coin::Quarter => 25,
    }
}

fn plus_one(x: Option<i32>) -> Option<i32> {
    match x {
        None => None,
        Some(i) => Some(i + 1),
    }
}

fn main() {
    println!("Coin sorter: {}", value_in_cents(Coin::Penny));

    let five = Some(5);
    dbg!(five);
    let six = plus_one(five);
    dbg!(six);
    let none = plus_one(None);
    dbg!(none);

    let config_max = Some(3u8);
    match config_max {
        Some(max) => println!("The maximum is configured to be {max}"),
        _ => (),
    }
    if let Some(max) = config_max {
        println!("The maximum is configured to be {max}");
    }
}
