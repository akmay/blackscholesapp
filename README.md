#Black Scholes Calculation App

The Black-Scholes model is a model that predicts prices for call and put options. It is based on a few factors such as stock price (S), volatility (V), strike price (X), time, and interest rate. The model is ideal for vanilla options pricing (standardized option without any extra features). What it lacks is: changing interest rate, stocks that pay dividends, transaction costs, and changes in volatility, market disruptions, etc.

The Black-Scholes model assumes that stock returns have a normal (Gaussian) distribution. In reality, stock returns don’t follow normal distribution - they have somewhat fatter tails that the Black-Scholes trying to suppress by using volatilities.

Black-Scholes Formula:
C(S)=S* N(d_1 )-N(d_2)*X*e^(-rt)
P(S)=-S*(1-N(d_1 ))+(〖1-N(d〗_2))*X*e^(-rt)

The idea behind the formula derivation is simple. For example, for call, the essence is in a difference between a call and a stock (C(S)-X)+ being invested into riskless assets such as money market, bonds, etc.  In above formula, S* N(d_1 ) represents the present value of the asset at maturity, given that C(S) will be more than X at maturity. N(d_2) on the other side represents a probability that option will be exercised (there is no reason to exercise call if C(S)<=X).
Fun Fact: Less than a year after Scholes won a Nobel Prize, his hedge fund suffered substantial (>$4 bln) losses and had to be bailed out by Federal Reserve. 
The main source of information for me was the Windows Form Tutorial found on holowczak.com. I loosely based the code of my application on the code of the calculator in the tutorial. It helped me to understand where and how to add functions. The next obstacle was math. First, I had to include <cmath> library to use such functions as log, sqrt, etc. Then, when d1 and d2 were calculated, I needed to find 2 cdfs for them. This was a problem since many solutions on the web are too cumbersome in my opinion. After a bit of googling, I found a perfect solution in my situation – to use build-in erfc (http://stackoverflow.com/questions/2328258/cumulative-normal-distribution-function-in-c-c). I changed a code a bit, but the base remains the same. I also saw that a moderator on Quantnet created a separate class for calculations in his program. I wanted to do something similar, but unfortunately had to abort since did not know how to implement it properly. So, naturally, I went back to calling the functions from Form1.cpp I created to Form1.h. It went on smoothly, and the program started to output the correct results in correct places. I added some format instructions (“#0.000”), and that was it. Until I started testing it. It turns out, that it lacked a mechanism preventing a user from inputting something gibberish. Turned out I had to find something that will output an error message. I could also do loops, but I thought that maybe there is a more elegant solution. And there happens to be try{…}..catch(Exception ^){…} which saved my program from constant erroring. This tutorial helped me a lot: http://www.functionx.com/vccli/general/exceptions.htm. Also, I implemented several while loops e.g. to check that interest rate is correctly entered, timestamps are correct, etc.

##	Test Case : Completed Calculation
![ScreenShot](https://github.com/akmay/blackscholesapp/blob/master/BS-completed%20with%20double%20time.jpg)

##	Test Case : Completed Calculation with Double Volatility (C(S) and P(S) rise!)
![ScreenShot](https://github.com/akmay/blackscholesapp/blob/master/BS-completed%20with%20double%20volatility.jpg)

##	Test Case : Completed Calculation with Double the Time
![ScreenShot](https://github.com/akmay/blackscholesapp/blob/master/BS-completed%20with%20double%20time.jpg)
