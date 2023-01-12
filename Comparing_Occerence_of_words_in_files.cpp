#include<iostream >
#include<fstream>
#include<string.h>
#include<cstring>

#include <bits/stdc++.h>
using namespace std;
struct node         //node here means a block that contain object and pointer to node 
{
string vocab;
node *next;
};

class linked_list  //linked list contain implementation of link list method 
{
private:
    node *head,*tail; //head is pointer to node which points to first node 
                     //tails is a pointer to node which indicates end of linked list

    public:
    linked_list()    // is constructer that initialize head and tail to null because
                     //at beginning we do not have any node in linked list
    {
        head = NULL;
        tail = NULL;
    }
 
    bool search( string  x)  // searching method will return true or false values in 
                             // case element is present in linnked list it will return true 
                             // else it will return flase value
{  
    node* current ;
	current=gethead(); // current contain head very start of linked list from that position
	           // we will start treversing the linked list 
    while (current != NULL)  //if the pointer points to null it will means its the end of linked list 
                             //else the loop will be continued to work  
     {  
        /*if (current->obj.name== x)  //comparing the user typed value with linked list vlaue 
        
            return true;
			  // return true if element found 
        current = current->next;  //getting next address and keep checking and comparig value on that addreess 
    }  */
    return false;  //if value not found return false
}  
}

    void add_node(string word) // add_node will add one node in linked list
    {
        node *tmp = new node; // will create pointer to a node
        tmp->vocab = word; // will assign the value of obj 
        tmp->next = NULL; // last node will point to null

        if(head == NULL)  // if head is null means we added the node make that node head and tail
        {
            head = tmp; // if there is only one node it means it is both head and tail
            tail = tmp;
        }
        else
        {
            tail->next = tmp; 
            tail = tail->next;// points to another node
        }
    }
    node* gethead()  // will return head that we used in search method 
    {
    	return head;
	}
     void display()  // will display all the values in linked list
    {
        node *tmp; // tmp contain the vlaue of head 
        tmp = head;
        while (tmp != NULL ) // we are insuring value of tmp should not be empty 
        {
           cout<<tmp->vocab;
            tmp = tmp->next;
            cout<<endl;
        }
    } 
         int get_length_of_list()  // will display all the values in linked list
    { int a=0;
        node *tmp; // tmp contain the vlaue of head 
        tmp = head;
        while (tmp != NULL) // we are insuring value of tmp should not be empty 
        {
            a++;
        }
}

	int search_word( string  x)  // searching method will return true or false values in 
                           // case element is present in linnked list it will return true 
                             // else it will return flase value
{  int c=0;
    node* current ;
	current=gethead(); // current contain head very start of linked list from that position
	           // we will start treversing the linked list 
    while (current != NULL)  //if the pointer points to null it will means its the end of linked list 
                             //else the loop will be continued to work  
     {  
        if (current->vocab== x)  //comparing the user typed value with linked list vlaue 
        {
		
            c++;
        }
			  // return true if element found 
        current = current->next;
		  //getting next address and keep checking and comparig value on that addreess 
    }  
    return c;  //if value not found return false
}  


void camparing_words(linked_list obj1)
{   int k=0;
    string word;
	 node *tmp; // tmp contain the vlaue of head 
        tmp = head;
        while (tmp != NULL ) // we are insuring value of tmp should not be empty 
        {
           word=tmp->vocab;
            tmp = tmp->next;
           k=obj1.search_word(word);
           if(k>=1)
           {
		   
        
            cout<<" "<<"Word  "<< word<<" appeared  "<<k<<"  times"<<endl;
		}	}
            cout<<endl;
        }
};
int main()
{
ifstream data;
string myText;
linked_list obj1,obj2;
char *c;
data.open("data.txt");
ifstream keyword;
keyword.open("keyword.txt");
while(getline(data,myText))
{ 
string  word;
stringstream ss(myText);
while (ss >> word) {
obj1.add_node(word);
    }
}

data.close();
string myText2;

while(getline(keyword,myText2))
{ 
string  word;
stringstream ss(myText2);
while (ss >> word) {
//cout << word << endl;
obj2.add_node(word);
    }
}
keyword.close();
//obj2.display();
//keyword.close();
obj2.camparing_words(obj1);
}

