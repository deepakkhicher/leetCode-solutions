class Solution {
                public:
                    int addDigits(int num) {
                        // optimal
                        if(num == 0 ){
                            return 0;
                        }
                        if(num%9==0){
                            return 9;
                        }
                        
                        return num%9;
                        // brute force below --
                        // while(num>9){
                        //     int result =0;
                        //     while(num > 0){
                                
                        //         result += num%10;
                        //         num /=10;
                        //         }
                        //     num = result;
                        //     }
                
                        // return num;
                        
                    }
                };