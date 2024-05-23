Node* removeDuplicates(Node *head)
          {
            if(head != NULL) {
                vector<int> values;
                values.push_back(head->data);
                
                Node* cur = head;
                while(cur->next != NULL) {
                    bool deleted = false;
                    
                    for(int i : values) {
                        if(cur->next->data == i) {
                            cur->next = cur->next->next;
                            deleted = true;
                            break;
                        }
                        else {
                            continue;
                        }
                    }
                    
                    if(!deleted) {
                        values.push_back(cur->next->data);
                        cur = cur->next;
                    }
                }
            }
            
            return head;
          }
