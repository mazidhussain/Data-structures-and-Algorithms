class Trie {
public:
    struct Node{
        Node* children[26];
        bool isexist;
        Node(){
            for(int i=0;i<26;i++){
                this->children[i]=NULL;
            }
            this->isexist=false;
        }
    };
    Node * root;
    Trie(){
        root=new Node();
    }
    
    void insert(string word) {
        Node* p=root;
        for(int i=0;i<word.length();i++){
            int idx=word[i]-'a';
            if(p->children[idx]!=NULL){
                p=p->children[idx];
            }
            else{
                p->children[idx]= new Node();
                p=p->children[idx];
            }
            if(i==word.length()-1){
                p->isexist=true;
            }
        }
    }
    
    bool search(string word) {
        Node* p=root;
        for(int i=0;i<word.length();i++){
            int idx=word[i]-'a';
            if(p->children[idx]!=NULL){
                p=p->children[idx];
            }
            else{
                return false;
            }
        }
        return p->isexist;
    }
    
    bool startsWith(string word) {
        Node* p=root;
        for(int i=0;i<word.length();i++){
            int idx=word[i]-'a';
            if(p->children[idx]!=NULL){
                p=p->children[idx];
            }
            else{
                return false;
            }
        }
        return true;
    }
};
