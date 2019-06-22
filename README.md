# GameHaeDuo Server
This repository contains codes related to server. 4 servers are used in our GameHaeDuo program.  
Server runs in a Linux environment.


## About GameHaeDuo's Server
1. **Python Crawling Server**  
  It crawls the data for each user in our program everytime a user logs in. And put that data into database.  
2. **Log-in Server**  
  This is used to check if the user who logs in is valid or not. It is connected to the db with sockets. If user who logs-in matches with the database server returns true.  
3. **Sign-up Server**  
  This server is only used when the user do sign up. User's nickname is verified with our OCR program. If the user's nickname is verified the user is allowed to sign-up. Sign up requires id, password, and their lol nickname. These information is saved in our database.  
4. **Duo-Matching Server**  
  Matching Server receives user's nicknames, tier, desired position, duo desired position information. When there are enough people in our server matching queue, our match-finding algorithm is used to match two people together. Once matched, the server sends a message to each user about their duo information and asks if they want accept.    
  
### Support Websites
* [op.gg](https://www.op.gg/)  
* [leagueofgraphs](https://www.leagueofgraphs.com/ko/champions/counters)  


## Installation
Server runs in a **Linux** environment. Therefore, we recommend using it on Linux.


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
