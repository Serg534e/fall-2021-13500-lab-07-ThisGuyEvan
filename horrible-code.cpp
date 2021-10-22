            #include <iostream>


                     std::string testCase2(std::string random, int x){
      std::string roti = "indian food.";
            int cnt = 0;

               while (x < random.length()){
   if (roti[cnt] != '-'){
roti[cnt] = '-';   
               }
      cnt++;
   }
               return roti;
         }
