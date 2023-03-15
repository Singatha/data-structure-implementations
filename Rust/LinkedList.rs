struct Node {
    data: i32,
    link: Node
}

let mut head: Node;

fn add(data: i32){
    if head == Node{} {
        head = Node{data, Node{}};
    } else {
        let mut temp: Node = Node{data, head};
        head = temp; 
    }
}

fn delete_node(data: i32){
    let mut temp: Node = head;
    let mut prev_node: Node = head;
    while temp != Node{} {
        if temp.data == data {
            prev_node = temp.link;
        }
        prev_node = temp;
        temp = temp.link;
    }
}

fn find_node(data: i32) -> bool {
    let mut temp: Node = head;
    let mut flag: bool = false;
    while temp != Node{} {
        if temp.data == data {
            flag = true;
        }
        temp = temp.link;
    }
    return flag;
}

fn size() -> i32 {
    let mut temp: Node = head;
    let mut counter = 0;
    while temp != Node{} {
        counter += 1;
        temp = temp.link;
    }
    counter += 1;
    return counter;
}

fn print_list(){
    let mut temp: Node = head;
    while temp != Node{} {
        println!(temp.data);
        temp = temp.link;
    }
    println!(temp.data);
}

fn main(){
    add_node(1);
	add_node(3);
	add_node(5);
	add_node(7);
	add_node(9);

	print_list();
	println!(size());
	println!(find_node(5));
	println!(delete_node(5));
	println!(find_node(5));

	print_list();
}
