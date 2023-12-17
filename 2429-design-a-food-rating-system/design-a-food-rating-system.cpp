#include <set>
#include <string>
using namespace std;

struct Info {
    string name;
    string cuisine;
    int rating{};

    Info() = default;
    Info(string name, string cuisine, int rating) : name{name}, cuisine{cuisine}, rating{rating}{}

    bool operator<(const Info& first) const {
        if (rating == first.rating) {
            return name < first.name;
        }
        return rating > first.rating;
    }
};

class FoodRatings {
    
    unordered_map<string, Info> foodNameToInfo;
    unordered_map<string, set<Info>> cuisineNameToSortedInfo;

public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (size_t i = 0; i < foods.size(); ++i) {
            foodNameToInfo.emplace(foods[i], Info(foods[i], cuisines[i], ratings[i]));
            cuisineNameToSortedInfo[cuisines[i]].emplace(foods[i], cuisines[i], ratings[i]);
        }
    }

    void changeRating(const string& food, int newRating) {
        Info& toUpdate = foodNameToInfo[food];
        cuisineNameToSortedInfo[toUpdate.cuisine].erase(toUpdate);
        toUpdate.rating = newRating;
        cuisineNameToSortedInfo[toUpdate.cuisine].insert(toUpdate);
    }

    string highestRated(const string& cuisine) const {
        return cuisineNameToSortedInfo.at(cuisine).begin()->name;
    }
};