    public class IndianFlagExample {  
        public static void main(String[] args) {  
              
            int height =  26;  
            int width = 40;  
            int temp = 3;  
              
            for(int m = 1; m<= height; m++) {  
                for(int n = 1; n <= width; n++){  
                      
                    if(m <= 4) {  
                        if(m == 1 || m == 4) {  
                            if(n >= 15 && n<= 35) {  
                                System.out.print("-");  
                            } else {  
                                System.out.print(" ");  
                            }  
                        } else {  
                            if(m ==2 || m ==3) {  
                                if(n == 15 || n == 35) {  
                                    System.out.print("|");  
                                } else {  
                                    System.out.print(" ");  
                                }  
                            }  
                        }  
                    }  
                    if(m > 4 && m <= 8) {  
                        if(m <= 7) {  
                            if(n == 15 || n == 35) {  
                                System.out.print("|");  
                            } else {  
                                if(n >= 22 && n<= 28) {  
                                    System.out.print("*");  
                                } else {  
                                    System.out.print(" ");  
                                }  
                            }  
                        } else {  
                            if(n >= 15 && n<= 35) {  
                                System.out.print("-");  
                            } else {  
                                System.out.print(" ");  
                            }  
                        }  
                    }  
                    if(m > 8 && m <= 11) {  
                        if(m <= 10) {  
                            if(n == 15 || n == 35) {  
                                System.out.print("|");  
                            } else {  
                                System.out.print(" ");  
                            }  
                        } else {  
                            if(n >= 15 && n <= 35) {  
                                System.out.print("-");  
                            } else {  
                                System.out.print(" ");  
                            }  
                        }  
                    }  
                    if( m >= 12 && m <= 19) {  
                        if(n == 15) {  
                            System.out.print("|");  
                        } else {  
                            System.out.print(" ");  
                        }  
                    }  
                    if( m >= 20) {  
                        if(m % 2 == 0) {  
                            if(n >= 15 - temp && n <= 15 + temp) {  
                                System.out.print("-");  
                            } else {  
                                System.out.print(" ");  
                            }  
                        } else {  
                            if(n == 15 - temp || n == 15 + temp) {  
                                System.out.print("|");  
                            } else {  
                                System.out.print(" ");  
                            }  
                        }  
                    }  
                }  
                if(m >= 20) {  
                    if(m % 2 != 0) {  
                        temp++;  
                    }  
                }  
                System.out.print("\n");       
            }  
        }  
    }  
