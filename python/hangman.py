'''
Hangman Game

A user has 10 attempts to guess a randomized word to win. They must guess single letters
or full words as valid inputs.
'''
import random

attempts = 10 # user has 10 attempts to guess correct word
guessed_letters = [] # list of every guessed letter or word by user
word = None # randomized word that user must guess
guess = None # can be a char or str

'''
this function starts the hangman game, determines if the user's guess is a single
letter or a full word, checks for invalid input, displays amount of attempts, and
spaces of unknown letters.
'''
def main():
    global word 
    word = word_list(); # picks random word
    
    # opening statement + ask user for their first guess
    print("welcome to hangman! you have 10 trys to guess the word!")
    
    # attempts must be greater than 0 for program to continue
    while attempts > 0:
        guess = input("enter a letter character or word: ").lower() # convert user input to lowercase

        if len(guess) == 1 and guess.isalpha(): # single letter guess
            check_guess(guess)
        elif len(guess) == len(word) and guess.isalpha(): # full word guess
             if check_word_guess(guess): # correct full word guess
                break
        else: # input is not a single letter or full word guess
            print("invalid input. must enter a single letter or a full word guess.")
            continue

        # after every guess, the amount of attempts left, location of correct guesses, and spaces of unknown letters will be displayed
        print("attempts left:", attempts)
        print(display_word(word, guessed_letters))

        # user correctly guesses the word
        if all(letter in guessed_letters for letter in word):
            print("congratulations! you've guessed the correct word,", word)
            break
    # when user has no more attempts left
    if attempts == 0:
            print("oh no! you've ran out of attempts, the word was", word)

'''
this function holds a list of words and picks a random one to be guessed by the user.
'''
def word_list():
    word_list = ["apple", "dog", "skateboard", "computer", "candle", "mushroom", "wallet", "elephant", "giraffe", "rhinoceros", 
    "hippopotamus", "kangaroo", "crocodile", "penguin", "octopus", "jellyfish", "lobster",
    "strawberry", "pineapple", "watermelon", "avocado", "broccoli", "asparagus", "cauliflower", "spinach", "mushroom", "eggplant",
    "helicopter", "airplane", "submarine", "spaceship", "motorcycle", "tractor", "ambulance", "zeppelin", "hovercraft", "bulldozer",
    "mermaid", "unicorn", "dragon", "centaur", "sphinx", "minotaur", "werewolf", "vampire", "zombie", "ghost",
    "volcano", "earthquake", "tsunami", "hurricane", "tornado", "avalanche", "blizzard", "meteor", "comet", "lightning",
    "knight", "castle", "princess", "wizard", "magician", "sorcerer", "warrior", "samurai", "ninja", "pirate",
    "ancient", "medieval", "renaissance", "industrial", "modern", "futuristic", "prehistoric", "historic", "space", "cyberpunk",
    "universe", "galaxy", "constellation", "planetarium", "asteroid", "nebula", "quasar", "supernova", "black hole", "wormhole",
    "guitar", "piano", "violin", "trumpet", "drum", "accordion", "harmonica", "banjo", "ukulele", "saxophone",
    "computer", "internet", "software", "hardware", "database", "algorithm", "programming", "developer", "hacker", "encryption",
    "chocolate", "popcorn", "ice cream", "pizza", "burger", "sushi", "sandwich", "spaghetti", "pancake", "cookie",
    "football", "basketball", "tennis", "soccer", "baseball", "volleyball", "rugby", "hockey", "golf", "swimming",
    "lion", "tiger", "leopard", "cheetah", "wolf", "fox", "bear", "panther", "jaguar", "lynx",
    "sunflower", "daisy", "rose", "tulip", "lily", "orchid", "daffodil", "carnation", "chrysanthemum", "hydrangea",
    "rainbow", "sunrise", "sunset", "moonlight", "starlight", "fireworks", "thunderstorm", "rainstorm", "snowstorm", "tornado",
    "jupiter", "saturn", "mars", "venus", "mercury", "neptune", "uranus", "pluto", "asteroid", "comet",
    "banana", "apple", "orange", "grape", "kiwi", "pear", "peach", "plum", "watermelon", "melon"]
    return random.choice(word_list)

'''
this function checks if the user's single letter guess is apart of the word and adds
the guess to the guessed_letters list.
'''
def check_guess(guess):
    global attempts, guessed_letters
    if guess in guessed_letters:
        print("you already guessed this letter")
    else: # add guess to guessed_letters list
        guessed_letters.append(guess)
    if guess in word:
        print("good guess!")
    else:
        print("oops, wrong guess")
        attempts -= 1   

'''
this function checks to see if the user's full word guess is the word and adds the
guess to the guessed_letters list.
'''
def check_word_guess(guess):
    global attempts
    if guess == word:
        print("congratulations! you've guessed the correct word,", word)
        return True
    else:
        print("good try, but wrong guess")
        guessed_letters.append(guess)
        attempts -= 1
        return False
    
'''
this function displays corect single letter guesses and spaces of unknown letters.
'''
def display_word(word, guessed_letters):
    display = ""
    for letter in word:
        if letter in guessed_letters:
            display += letter + " "
        else:
            display += "_ "
    return display.strip()

# goes at the bottom of file bc functions called in main are defined after main function
if __name__ == "__main__":
    main()