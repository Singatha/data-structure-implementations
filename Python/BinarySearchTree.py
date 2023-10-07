class Node:
    def __init__(self, data, left_node=None, right_node=None):
        self.data = data
        self.left = left_node
        self.right = right_node
    
    def set_link(self, node):
        self.link = node

    def get_link(self):
        return self.link

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def insert(self, data):
        if self.root == None:
            root = Node(data)
        else:
            return insert_node(data, root)

    def insert_node(self, data, node):
        if node == None:
            node = Node(data)
        elif data < node.data:
            return insert_node(data, node.left)
        else:
            return insert_node(data, node.right)

    def delete(self, data):
        pass

    def delete_node(self, data):
        pass

    def search(self, data):
        if self.root == None:
            print("Binary Search Tree Empty !")
            return False
        else:
            return search_node(data, root)
  
    def search_node(self, data, node):
        if data == node.data:
            return True
        elif data < node.data:
            return search_node(data, node.left)
        else:
            return search_node(data, node.right)

    def size(self):
        if self.root == None:
            return 0
        else:
            return size_node(self.root.left) + size_node(self.root.right) + 1
    
    def size_node(self, node):
        if node == Node:
            return 0
        else:
            return size_node(self.root.left) + size_node(self.root.right) + 1


def main():
    binary_search_tree = BinarySearchTree()


if __name__ == "__main__":
    main()
