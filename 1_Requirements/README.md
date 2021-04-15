# Requirements
## Introduction
 * This is a text based version of Hangman Game written in C.
 * The program chooses a random word from the given word list in program using rand() function . It will  prompt the user to guess a character.
 * If right the word will be displayed with the guessed character revealed.
 * If wrong the program will tell you how many guesses you have left and print the current state of the stick man which will progress with each wrong guess.
 * The user is allowed 10 wrong guesses before the game ends.


## SWOT ANALYSIS
## STRENGTH
 * Works in all kinds of Operating System since it's a command line based game 
 * It is easy to play.
 * The set of rules is quite flexible

 ## WEAKNESS
  * It's in command line.
  
## THREAT 
* Randome Number Gernerator could make use of same words again and again.

# 4W&#39;s and 1&#39;H

## Who:
 * Working all day can be  monotonous therefore anybody can play this game for recreation.
 * Can also prove beneficial for improving English Vocabulary.

## What:
 * This is a game which reads a random word from the wordlist, and asks the user the guess it correctly so that the User win the game otherwise the User looses after a specific number of trials.

## When:
* It's a great game for recreation especially while you fee; your work routine is getting monotonous.

## Where:
* It can run on any PC and Operating System.

## How:
* Users can Play this game by running its exe or by running the makefile and the a CLI screen opens with the prompt.
* Also the Instructions are clearly mentioned 


# Detail requirements
## High Level Requirements:

| ID | Description | Status|
| ---- | ---- | ---- |
| HLR01| Using Word list | Implementated |
| HLR02 | Taking the input | Implemented |
| HLR03 | After every wrong input show the Hangman Hanging | Implemented |


##  Low level Requirements:| ID | Description | Status|
| ID | Description | Status|
| ---- | ---- | ---- |
| LLR01| If the word has already guessed tell the user that its already guessed | Implemented |
