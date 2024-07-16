class LRUCache {

public:

    class Node {
    public:
        int key;
        int val;
        Node *prev; 
        Node *next;
        Node(int _key, int _val){
            key = _key;
            val = _val;
            prev = nullptr;
            next = nullptr;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    
    int cap;

    unordered_map<int, Node*> umap;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void addNode(Node* newNode){
        Node* curr = head;
        Node* temp = head->next;
        newNode->next = temp;
        newNode->prev = curr;
        curr->next = newNode;
        temp->prev = newNode;
    }

    void deleteNode(Node* delNode){
       Node* delPrev = delNode->prev;
       Node* delNext = delNode->next;

       delPrev->next = delNext;
       delNext->prev = delPrev;
    }

    int get(int key) {
        if(umap.find(key) != umap.end()){
            Node* responseNode = umap[key];
            int res = responseNode->val;
            umap.erase(key);
            deleteNode(responseNode);
            addNode(responseNode);
            umap[key] = head->next;
            return res;
        }else{
            return -1;
        }
    }
    
    void put(int key, int value) {
        if(umap.find(key) != umap.end()){
            Node* existingNode = umap[key];
            umap.erase(key);
            deleteNode(existingNode);
        }
        if(umap.size() == cap){
            umap.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key, value));
        umap[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */