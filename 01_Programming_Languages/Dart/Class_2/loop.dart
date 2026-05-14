//for 

void main(List<String> args) {
  for(int i = 0; i < 5; i++){
    print("This is iteration number $i");
  }

  bool ishungry = true;
  int count = 0;
  while(ishungry){
    print("I am hungry");
    count++;
    if(count >= 5){
      ishungry = false;
    }
  }


  //Do while loop
  int j = 0;
  do{
    print("This is iteration number $j");
    j++;
  }while(j < 5);
  
}