This project is a simple object-oriented simulation where the player takes the role of a dragon trainer. The main objective is to manage, care for, and train dragons while simulating basic interactions such as feeding, training, and battling. The idea stems from the popularity of creature-care games and stories, and this version focuses on building an organized object-oriented structure that models such a fantasy world in a manageable and extensible way.

The problem this project addresses is how to represent relationships between objects in a game-like system using object-oriented programming. Rather than dealing with abstract examples, this project provides a concrete and engaging setting in which core programming principles such as encapsulation, composition, and inheritance can be applied. Each dragon has attributes such as hunger, happiness, and strength, and each trainer can manage multiple dragons. Dragons can be trained to grow stronger and can be fed to keep them happy and energized.

Below is the class diagram that describes the main structure of the system, including relationships between classes and the basic behavior of each one:
![Proyecto_cpp_2 (2)](https://github.com/user-attachments/assets/60cfbc91-9124-4355-bcd2-12a7de07d368)



The Trainer class represents the user or character in charge of raising dragons. This class contains the name of the trainer and a list of dragons they have adopted. It is responsible for performing actions such as adopting a dragon, feeding a specific dragon with a chosen food, and training them to increase their stats.

The Dragon class models the dragons themselves. Each dragon has a name, a type, and attributes such as hunger, happiness, and strength. The dragon can be trained, fed, and used in battle against another dragon. These actions affect their internal stats, which evolve over time based on user interaction.

Food is represented by an abstract class called Food, which defines nutritional and taste values. Two types of food inherit from this class: Meat and Fruit. Each one offers a different effect when used, which simulates more complex feeding behavior. This structure allows the program to use polymorphism to treat all food similarly, while still allowing specific behavior based on food type.

The Battle class simulates a confrontation between two dragons. It uses the dragons’ current stats to determine a winner. Although it does not store state, it encapsulates the logic necessary to resolve a battle between two creatures, keeping that behavior separate from the Trainer or Dragon classes.

This structure helps demonstrate object-oriented relationships in a way that is fun and understandable. It makes use of class inheritance for the food system, composition between the trainer and dragons, and basic interactions that help reinforce method design and class responsibility.
