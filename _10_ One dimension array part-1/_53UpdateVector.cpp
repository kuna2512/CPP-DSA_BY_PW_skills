/*
output : 30 11
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> vec; // you need not mention the size;
    // insertin / input do not use [] .
    vec.push_back(3); // |3|
    vec[1]=11; // |3|11|
    // if you want ot update / access
    vec[0]=30; // |30|11|
    cout<<vec[0]<<" ";
    cout<<vec[1]<<" ";

}
/*
@RequestMapping(value="/users")
public List<User> getAllUsers(){
    User user1 = new User(
        "u1",
        "kunal",
        "manish",
        new Location("11","Patna"),
        "kunal454678@gmail.com");
    
    User user2 = new User(
         "u1",
        "ajay",
        "niraj",
        new Location("12","Hajiper"),
        "kunal458@gmail.com");
    
    return Arrays.asList(user1, user2);
}

// post
@RequestMapping(value="/posts")
public List<Post> getAllPosts(){
    Post post1 = new Post(
        "u1",
        "kunal",
        "manish",
        new Location("11","Patna"),
        "kunal454678@gmail.com");
    
    Poat post2 = new Post(
         "u2",
        "ajay",
        "niraj",
        new Location("12","Hajiper"),
        "kunal458@gmail.com");
    
    return Arrays.asList(post1, post2);
}

// location
@RequestMapping(value"/locations")
public List<Location> getAllLocations(){
    Location location1 = new Location(
        "u1",
        "kunal",
        "manish",
        new Location("11","Patna"),
        "kunal454678@gmail.com");
    
    Location location2 = new Location(
         "u2",
        "ajay",
        "niraj",
        new Location("12","Hajiper"),
        "kunal458@gmail.com");
    
    return Arrays.asList(location1, location2);
}

*/