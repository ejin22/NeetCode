//things i need to be worried about 

//i should be bothered by the zero in the starting
//would fail for very large list, basic what is in your head would fail 
class Solution {
public:
    ListNode* add(ListNode* l1, ListNode* l2,int carry) {

        //base condition for recursion
        //check if both the lists are empty and no carry is left

    if(l1 ==nullptr && l2 == nullptr && carry==0){
        return nullptr;
    }

    //create variables to store the digit values from each list
    int v1=0;
    int v2=0;


    //take value form l1 if it exits 
    //handles lists of unequal lenghts safely 
    if(l1 !=nullptr){
        v1= l1->val;
    }

    if(l2 !=nullptr){
        v2= l2->val;
    }

    //add both values and the carry
    int sum= v1+v2+carry;


    //find new carry and digit for this node
    int newCarry= sum/10;  //carry if sum>=10 
    int nodeValue=sum%10;  //current digiti to store in the node

    ListNode* nextNode = add(
        (l1 != nullptr ? l1->next : nullptr),
        (l2!= nullptr ? l2->next : nullptr),
        newCarry

    );

    return new ListNode(nodeValue, nextNode);
    }
    ListNode* addTwoNumbers(ListNode*l1,ListNode*l2){
        return add(l1,l2,0);
        
    }
};