#include <iostream>
#include <string>

// sample code for a doubly-linked list of numbers,


// each node within the list has its stored data value
//    and pointers to the next/prev nodes
//    (prev meaning closer to the front of the list,
//     next meaning closer to the back of the list)
struct node {
   double dataval;
   node* next;
   node* prev;
};


// the overall list keeps track of the first/front node in the list
//     and last/back node in the list
struct dllist {
   node *front, *back;
};


// initialize a list as empty
void initialize(dllist &L);


// create/insert a new node at the front of the list, using the given data value
void insertFront(double newval, dllist &L);


// create/insert a new node in the list using the given data value,
//    maintaining sorted order (assuming the list is already sorted)
//    with values increasing from front to back
void insertSorted(double newval, dllist &L);


// remove first instance of a specific datavalue (if found)
void remove(double val, dllist &L);


// print the contents of the list
void print(dllist L);


// count how often a data value appears in the list
int count(double val, dllist &L);


// delete all the nodes in the list and set front/back to null
void deallocate(dllist &L);



int main()
{
     // create and initialize a list
     dllist myData;
     initialize(myData);

     // insert the first few values using the sorted insert, then display
     std::cout << "sorted insert of 1.5, 9.5, 0.1, should give 0.1, 1.5, 9.5" << std::endl;
     insertSorted(1.5, myData);
     insertSorted(0.1, myData);
     insertSorted(9.5, myData);
     print(myData);

     // now just insert a few at the front then display
     std::cout << "insert at front of 7.9 then 200 then 1.5, should give ";
     std::cout << "1.5, 200, 7.9, then the old 0.1, 1.5, 9.5" << std::endl;
     insertFront(7.9,  myData);
     insertFront(200, myData);
     insertFront(1.5, myData);
     print(myData);

     // try a couple of counts
     std::cout << "Found 1.5 " << count(1.5, myData) << " time(s)" << std::endl;
     std::cout << "Found 12 " << count(12, myData) << " time(s)" << std::endl;
     std::cout << "Found 200 " << count(200, myData) << " time(s)" << std::endl;

     // try a couple of removes then display
     std::cout << "Try to remove 7.9 and 123" << std::endl;
     remove(7.9, myData);
     remove(123, myData);
     print(myData);

     // clean up memory
     deallocate(myData);
}



// initialize a list as empty
void initialize(dllist &L)
{
   // in an empty list we want both front and back to be null, there are no nodes
   L.front = NULL;
   L.back = NULL;
}



// create/insert a new node at the front of the list, using the given data value
void insertFront(double newval, dllist &L)
{
    // create the new node, then set its fields (if the allocation succeeded)
    node *n = new node;
    if (n != NULL) {
       n->dataval = newval;    // set its data value
       n->prev = NULL;         // inserting at front, so no node "before" the new one
       n->next = L.front;      // old front of list will be "after" the new one
       if (L.front != NULL) {
          L.front->prev = n;   // updates the prev field for the old front of list
       }
       L.front = n;            // now we have the new node at the front of the list
    }
}



// print the contents of the list
void print(dllist L)
{
    // will use a variable to keep track of which node we're printing right now,
    // starting from the front and working to the back
    node* current = L.front;
    std::cout << "The list values are:" << std::endl;
    while (current != NULL) {
       // print the node's data then move on to the next node
       std::cout << "   " << current->dataval << std::endl;
       current = current->next;
    }
    std::cout << "end of list" << std::endl;
}



// count how often a data value appears in the list
int count(double val, dllist &L)
{
   int tally = 0; // count of how many times we see val in L

   // we'll search forward from the front of the list to the back
   node *current = L.front;
   while (current != NULL) {
      // check if we've found a match, update total if so
      if (current->dataval == val) {
         tally++;
      }
      current = current->next;  // move on to next node
   }
   return tally;
}



// delete all the nodes in the list and set front/back to null
void deallocate(dllist &L)
{
   // delete nodes one at a time, from front to back
   node *current = L.front;
   while (current != NULL) {
      node *victim = current;  // remember the node we're about to delete
      current = current->next; // advance our pointer to the next node
      delete victim;           // deallocate the victim node
   }
   // update front/back to null since the list now has no nodes
   L.front = NULL;
   L.back = NULL;
}



// remove first instance of a specific datavalue (if found)
void remove(double val, dllist &L)
{
   // search until we find a matching node or reach the end
   node* current = L.front;
   while (current != NULL) {
      if (current->dataval == val) {
         break; // found a match, leave the loop
      } else {
         current = current->next;
      }
   }
   if (current == NULL) {
      std::cout << "No match found for " << val << std::endl;
      return;  // no match found
   }
   // we have a matching node, find the nodes before/after it
   node *before = current->prev;
   node *after = current->next;

   // update current's neighbours' pointers
   if (before != NULL) {
      // the node before current will have a new next node
      before->next = after;
   } else {
      // current used to be the front node, so we'll have a new front
      L.front = after;
   }

   if (after != NULL) {
      // the node after current will have a new previous node
      after->prev = before;
   } else {
      // current used to be the back node, so we'll have a new back
      L.back = before;
   }

   // deallocate the node's memory
   delete current;
   std::cout << "Removed " << val << std::endl;
}



// create/insert a new node in the list using the given data value,
//    maintaining sorted order (assuming the list is already sorted)
//    with values increasing from front to back
void insertSorted(double newval, dllist &L)
{
   // try to create and initialize the new node
   node *n = new node;
   if (n == NULL) {
      std::cerr << "Error: unable to allocate, insert of " << newval << " failed" << std::endl;
      return;
   }
   n->dataval = newval;
   n->next = NULL;
   n->prev = NULL;

   // handle special cases:
   //  1. list was empty, n will be the only node
   //  2. n belongs at the front
   //  3. n belongs at the back

   // special case 1: if list used to be empty, n will be the only node
   if (L.front == NULL) {
      L.front = n;
      L.back = n;
      return;
   }

   // special case 2: n belongs at the front
   if (newval <= L.front->dataval) {
      n->next = L.front;
      L.front->prev = n;
      L.front = n;
      return;
   }

   // special case 3: n belongs at the front
   if (newval >= L.back->dataval) {
      n->prev = L.back;
      L.back->next = n;
      L.back = n;
      return;
   }

   // general case, n will belong between two other nodes
   // find the nodes that belong before/after n
   node *before = L.front;
   while (before->dataval < newval) {
      before = before->next;
   }
   node *after = before->next;
   n->prev = before;
   n->next = after;
   before->next = n;
   after->prev = n;
}
