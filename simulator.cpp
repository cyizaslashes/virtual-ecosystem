#include <iostream>
#include <vector>
#include <cstdlib> // for random number generation
#include <ctime>   // for seeding random number generator

class Animal {
public:
    Animal(std::string species, int initialPopulation, double reproductionRate)
        : species(species), population(initialPopulation), reproductionRate(reproductionRate) {}

    void eat(Animal& other) {
        // Simulate animal eating another animal
        // Update populations accordingly
    }

    void reproduce() {
        // Simulate animal reproduction
        // Update population based on reproduction rate
    }

private:
    std::string species;
    int population;
    double reproductionRate;
};

class Plant {
public:
    Plant(std::string species, int initialPopulation, double growthRate)
        : species(species), population(initialPopulation), growthRate(growthRate) {}

    void grow() {
        // Simulate plant growth
        // Update population based on growth rate
    }

    void produceSeeds() {
        // Simulate plant producing seeds
        // New plants can grow from seeds
    }

private:
    std::string species;
    int population;
    double growthRate;
};

class Ecosystem {
public:
    Ecosystem() {}

    void addAnimal(Animal animal) {
        animals.push_back(animal);
    }

    void addPlant(Plant plant) {
        plants.push_back(plant);
    }

    void simulateDay() {
        // Simulate interactions, growth, reproduction, etc. for the entire ecosystem
    }

private:
    std::vector<Animal> animals;
    std::vector<Plant> plants;
};

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    Ecosystem ecosystem;

    // Add animals and plants to the ecosystem

    for (int day = 1; day <= 30; ++day) {
        std::cout << "Day " << day << ":\n";
        ecosystem.simulateDay();
        // Print population changes and statistics
    }

    return 0;
}
