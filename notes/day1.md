# day 1

Today I decided to learn C. I'm not completely sure why. Maybe it's the draw of the linux kernel, or embedded systems. I'm honestly not sure, but I woke up with a passion to learn C.

This project will eventually be a sum of my C learning journey, and hopefully useful to other people. 


## Installing the tools

I use Windows, and so does a lot of other people. Windows, for some unknown reason, does not include a c compiler or any other C-related tools (Yes, I see you Visual Studio.)

I've opted to use w64devkit (credit where credit is due, this project is very cool), which is a environment that allows for C development on Windows. I'm not 100 percent sure how it works, but running `code .` opens VS code on windows, while having Linux CLI tools. Very interesting. 

## My first program

I've decided the best way for me to learn C is by implementing it from the ground up. I keep hearing about "glibc" and "stdlib.h", but what actually are these things?

These are libraries. They are basically user-created code that makes it so you don't have to create a kernel every time you want to do something slightly advanced. For some reason, I've decided to NOT use these, and create my own from standalone C to learn how they work, and hopefully learn how C works. 

I've just finished writing my very first "library", a very simple piece of code that I can include later that includes a single function. It calculates the absolute value of a number. Yep, that's it. I know, very impressive. Anyway, I've proud of it. It is my first step in learning the chaos that is C.

## About this journal

I am writing this mainly so I can look back on it later. If you find this useful, please send me an email at oliver@vaultless.dev so I can improve this or at least hear your feedback. 

## Some stuff I learned from writing `abs`

`return (n < 0) ? -n : n;` is personally a very interesting piece of code to me. I am currently learning Java through a CS class, and have never seen anything like this before. Looking it up, this is an amazing time saving technique that I will pay my respects to. Instead of writing a full if-else statement, C simplifies it to **3 CHARACTERS**. That's insane.

Basically how it works is that `?` is the condition. If whatever's to the left of it evaluates to true (which is what the parenthesis do, check the condition), then the code on the left of the `:` is executed. If it is false, then the code on the right is executed. I think from a language writng perspective, this is a very interesting way to do it.

