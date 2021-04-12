fn main() {
    for i in 1..101 {
        let mut output: String = "".into();

        if i % 3 == 0 {
            output = format!("{}{}", output, "Fizz");
        }

        if i % 5 == 0 {
            output = format!("{}{}", output, "Buzz");
        }

        if output == "" {
            output = i.to_string();
        }
        
        println!("{}", output);
    }
}
