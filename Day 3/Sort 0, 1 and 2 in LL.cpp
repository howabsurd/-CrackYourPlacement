Node* segregate(Node *head) {
        
        // Add code here
        if(head==nullptr || head->next==nullptr) return head;
        Node * temp0head = nullptr;
        Node * temp1head = nullptr;
        Node * temp2head = nullptr;
        Node * temp0 = nullptr;
        Node * temp1 = nullptr;
        Node * temp2 = nullptr;
        Node * it = head;
        while(it){
            if(it->data==0){
                if(temp0head==nullptr) {temp0head =it; temp0 =it;}
                else {
                    temp0->next = it;
                    temp0 =it;
                }
            }
            if(it->data==1){
                if(temp1head==nullptr) {temp1head =it; temp1 =it;}
                else {
                    temp1->next = it;
                     temp1 =it;
                }
            }
            if(it->data==2){
                if(temp2head==nullptr) {temp2head =it; temp2 =it;}
                else {
                    temp2->next = it;
                    temp2 = it;
                }
            }
            
            it = it->next;
        }
          if (temp0) temp0->next = nullptr;
    if (temp1) temp1->next = nullptr;
    if (temp2) temp2->next = nullptr;
        if(temp0head && temp1head && temp2head){
            temp0->next = temp1head;
        temp1->next = temp2head;
        return temp0head;
        }
        
        if(!temp0head && temp1head && temp2head){
            temp1->next = temp2head;
            return temp1head;
        }
        if(temp0head && !temp1head && temp2head){
            temp0->next = temp2head;
            return temp0head;
        }
        if(temp0head && temp1head && !temp2head){
            temp0->next = temp1head;
            return temp0head;
        }
        if(temp0head && !temp1head && !temp2head){
            return temp0head;
        }
        if(!temp0head && !temp1head && temp2head){
            return temp2head;
        }
        if(!temp0head && temp1head && !temp2head){
            return temp1head;
        }
        
    }