#include <bits/stdc++.h>
using namespace std;

int Quiz()
{
    int score = 0;
    char option;
    cout<<"Please select an option a, b, c or d: "<<endl;
    cout<<endl;
    cout<<"Q1. Which data structure is based on Last-In-First-Out (LIFO) principle?"<<endl;
    cout<<"a) Tree   b) Linked List   c) Stack   d) Queue"<<endl;
    cin>>option;
    if(option=='c' || option=='C')
        score++;
    //else if( !(option=='a' || option=='A' || option=='b' || option=='B' || option=='d' || option=='D') )

    cout<<"Q2. Which of the following is a linear data structure?"<<endl;
    cout<<"a) Array   b) Tree   c) Graph   d) Binary Tree"<<endl;
    cin>>option;
    if(option=='a' || option=='A')
        score++;

    cout<<"Q3. When pop() operation is called on an empty queue, what is that operation called?"<<endl;
    cout<<"a) Overflow   b) Underflow   c) Syntax error   d) Garbage value"<<endl;
    cin>>option;
    if(option=='b' || option=='B')
        score++;

    cout<<"Q4. What is the time complexity of binary search algorithm?"<<endl;
    cout<<"a) O(n)   b) O(log2(n))   c) O(1)   d) O(n*log2(n))"<<endl;
    cin>>option;
    if(option=='b' || option=='B')
        score++;

    cout<<"Q5. Worst case time complexity to access an element in a BST can be?"<<endl;
    cout<<"a) O(n)   b) O(n*log(n))   c) O(1)   d) O(log(n))"<<endl;
    cin>>option;
    if(option=='a' || option=='A')
        score++;

    cout<<"Q6. Kruskal Algorithm for finding the Minimum Spanning Tree of a graph is a kind of a?"<<endl;
    cout<<"a) DP problem   b) Greedy problem   c) Both a) and b)   d) None of the above"<<endl;
    cin>>option;
    if(option=='b' || option=='B')
        score++;  

    cout<<"Q7. What is the maximum number of children a node can have in an n-ary tree?"<<endl;
    cout<<"a) 2   b) 0   c) 1  d) n"<<endl;
    cin>>option;
    if(option=='d' || option=='D')
        score++;  

    cout<<"Q8. What is the time complexity to insert an element to the front of a LinkedList (head pointer given)?"<<endl;
    cout<<"a) O(n)   b) O(n*log(n))   c) O(1)   d) O(log(n))"<<endl;
    cin>>option;
    if(option=='c' || option=='C')
        score++; 

    cout<<"Q9. What is the result of the expression 5&3?"<<endl;
    cout<<"a) 2   b) 1   c) 5  d) 7"<<endl;
    cin>>option;
    if(option=='b' || option=='B')
        score++;

    cout<<"Q10. Maps in C++ are implemented using which of the following data structures?"<<endl;
    cout<<"a) Red-Black tree   b) AVL tree   c) Binary Search tree  d) Hash Table"<<endl;
    cin>>option;
    if(option=='a' || option=='A')
        score++;

    return score;
}

int playQuiz()
{
    int score = 0;
    char c;
    cin>>c;
    while(! (c=='s' || c=='S') )
    {
        cout<<"Kindly press the 's' key to begin!"<<endl;
        cin>>c;
    }
    if(c=='s' || c=='S')
        return Quiz();
    
    return 0;
}

int main()
{
    cout<<"---------------Welcome to the Quiz Game---------------"<<endl;
    cout<<"------------Please follow the instructions------------"<<endl;
    cout<<endl;

    char choice;
    cout<<"Do you want to play? y/n"<<endl;
    cin>>choice;
    while(choice=='y' || choice=='Y')
    {
        cout<<"1. Quiz contains total 10 questions"<<endl;
        cout<<"2. You will gain 1 mark for each correct answer"<<endl;
        cout<<"3. There will be no negative marking"<<endl;
        cout<<"4. Press 's' key to start the quiz!"<<endl;
        cout<<endl;

        int res = playQuiz();
        if(res >= 7)
            cout<<"Hurray! You scored "<<res<<" points!"<<endl;
        else
            cout<<"Oh no! You only scored "<<res<<" points!"<<endl;
        cout<<"Want to play again? y/n"<<endl;
        cin>>choice;
    }
    return 0;
}