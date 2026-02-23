_Bool decimalToRoman(short number, char *result){

    int i = 0;
   *(result + i) = '\0';

    if(number >= 4000 || number <= 0){
        
        return 0;
        

    }else {
       
       

         while (number > 0) {

         if (number >= romanMap[i].arab) {
                strcat(result, romanMap[i].roman);
                number -= romanMap[i].arab;
            } else {
                i++;
            }
        }
        return 1;



        
    }

}