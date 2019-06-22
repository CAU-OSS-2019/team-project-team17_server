# GameHaeDuo Server Repo
All our server related code is in here. There are 4 servers and all of them are used in our GameHaeDuo program.


## About GameHaeDuo's Server
* Python Crawling Server 
* Log-in Server 
* Sign-up Server
* Duo-Matching Server

### Support Websites
* [op.gg](https://www.op.gg/)  
* [leagueofgraphs](https://www.leagueofgraphs.com/ko/champions/counters)  


## Getting Started with GameHaeDuo's Server
* Python Server crawls the data for each user in our program everytime a user logs-in. And put that data in database.
* Log-in Server is used to check if the user who logs in is valid or not. This server is connected to the db with sockets. If user who logs-in matches with the database server returns true.
* Sign-up Server is only used when user signs-up. The user nickname is verified with our OCR program. If the user nickname is verified the user is allowed to sign-up. Signing up requires id, password, and their lol nickname. These information is saved in our database.
* Matching Server receives user nicknames, tier, desired position, duo desired position information. When enough people are in our server matching queue, our match-finding algorithm is used to match two people together. Once matched, the server sends a message to each user about their duo information and asks if they want accept.


## Installation
Write Something...
 

## Contribution
If you want to contribute to our project, please read [CONTRIBUTING.md](https://github.com/CAU-OSS-2019/team-project-team17_server/blob/master/CONTRIBUTING.md) before contributing.

### Issue
When you have issue, please register your issue [here](https://github.com/CAU-OSS-2019/team-project-team17_server/issues)

### Pull Request
We are developing in 'develop' branch and functions are divided into topic branches.
1. Fork to your account and modify your changes.
2. Please [pull request](https://github.com/CAU-OSS-2019/team-project-team17_server/pulls) to corresponding branch.


## License
Apache 2.0


## Other Repositories of GameHaeDuo
### Client
https://github.com/CAU-OSS-2019/team-project-team17_client

### Verification Program
https://github.com/CAU-OSS-2019/team-project-team17_verification_program
