<a name="readme-top"></a>
## Tik-Tac-Toe | Introduction

Tic Tac Toe, a classic two-player game, is implemented in C++. 
Players take turns marking a 3x3 grid with 'X' or 'O' to achieve
a winning horizontal, vertical, or diagonal line. The first 
player to complete a line wins, and the game ends in a draw 
if the grid is filled without a winner.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Tik-Tac-Toe | Tools & Technology

* <img src="https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white" />
* <img src="https://img.shields.io/badge/C++3-1572B6?style=for-the-badge&logo=c++3&logoColor=white" />
* <img src="https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white" />
* <img src="https://img.shields.io/badge/JavaScript-323330?style=for-the-badge&logo=javascript&logoColor=F7DF1E"/>
* <img src="https://img.shields.io/badge/Node.js-43853D?style=for-the-badge&logo=node.js&logoColor=white"/>
* <img src="https://img.shields.io/badge/MySQL-00000F?style=for-the-badge&logo=mysql&logoColor=white"/>
* <img src="https://img.shields.io/badge/sequelize-323330?style=for-the-badge&logo=sequelize&logoColor=blue"/>
* <img src="https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white" />

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Cenflix | Prerequisites

These are the softwares you need to install before getting started.
- NodeJS
- NPM
- MySQL

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Cenflix | Installation
  
1. Clone This Repository

   ```sh
   https://github.com/Dawood-Usman/Cenflix.git

2. Install NPM Packages
   ```sh
   npm install 

3. Enter Your DataBase Credentials in `config/sequelize.js`
   ```js
   const sequelize = new Sequelize(
    'DataBase_Name',
    'UserName',
    'Password',
    {
        host: 'HostName',
        dialect: 'mysql'
    });
    
4. Enter Your Email Credentials in `config/transporter.js`
   ```js
    let transporter = nodemailer.createTransport({
    host: "smtp.gmail.email",
    service: "gmail",
    auth: {
      user: "Your_Email",
      pass: "App_Password",
    }
    });
    

5. Get Started With The Command
   ```sh
   node index.js 

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Cenflix | Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch `git checkout -b feature/AmazingFeature`
3. Commit your Changes `git commit -m 'Add some AmazingFeature'`
4. Push to the Branch `git push origin feature/AmazingFeature`
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Cenflix | SnapShots

## `User-Module`

### Landing Page
![image](https://user-images.githubusercontent.com/110775919/205733439-a64f7658-7fc7-445c-909f-78b004ad6648.png)
### Who's There?
![image](https://user-images.githubusercontent.com/110775919/205733591-962a5916-a086-49cc-b01d-8ea7c72003d1.png)
### User/Login
![image](https://user-images.githubusercontent.com/110775919/205734085-3511b49b-2961-40c3-918d-4576a6c6fd9d.png)
### User/Signup
![image](https://user-images.githubusercontent.com/110775919/205734102-33a5887e-955b-4c20-9408-473db483567c.png)
### User/EmailVerification
![image](https://user-images.githubusercontent.com/110775919/205734188-4fbf5f46-e906-405b-ba14-dc6eed93b6f4.png)
### User/HomePage
![image](https://user-images.githubusercontent.com/110775919/205734367-0e6170f9-8d15-4562-a403-0d08d8c2175d.png)
![image](https://user-images.githubusercontent.com/110775919/205734515-a8c1815b-bf1a-45d7-ae98-ee75d6d3ee1c.png)
### User/BookMovie
![image](https://user-images.githubusercontent.com/110775919/205734672-5db95823-7ce4-43f4-8386-952d2d6a6f79.png)
![image](https://user-images.githubusercontent.com/110775919/205734867-11f5a1a6-51da-4f72-9e75-4a73c7e1d066.png)
### User/PrintTicket
![image](https://user-images.githubusercontent.com/110775919/205735281-480f1b30-ab5f-40b7-aa65-fe672258a5cc.png)
### User/MovieRatings
![image](https://user-images.githubusercontent.com/110775919/205735972-7510d601-f644-4604-b2ca-963140858d3b.png)
### User/MovieReviews
![image](https://user-images.githubusercontent.com/110775919/205736546-6cde11b9-6105-4a24-826d-8ff00bcdd358.png)
### User/AboutUs
![image](https://user-images.githubusercontent.com/110775919/205736772-29e3f6e7-f9c2-4b9b-808b-3e411f6e345e.png)
### User/ContactUs
![image](https://user-images.githubusercontent.com/110775919/205736888-35487ea1-6c95-44a7-a1d9-ebcc35ff4ff9.png)


## `Admin-Module`

### Admin/Signin
![image](https://user-images.githubusercontent.com/110775919/205737033-5e8cf5bd-e2f1-4568-b077-b23fd56c7784.png)
### Admin/DashBoard
![image](https://user-images.githubusercontent.com/110775919/205737863-fb7bc805-470f-437c-8622-e3e71f188585.png)
### Admin/RunningMovie
![image](https://user-images.githubusercontent.com/110775919/205737956-d50dc275-65ca-4241-bafa-65f977d86acf.png)
### Admin/AddMovie
![image](https://user-images.githubusercontent.com/110775919/205738136-38cbba86-0f64-42b6-b25b-c4abe8169373.png)
### Admin/PendingBookings
![image](https://user-images.githubusercontent.com/110775919/205738286-9d8a04d6-dfa4-4391-8b66-370a209333c3.png)
### Admin/RunningBookings
![image](https://user-images.githubusercontent.com/110775919/205738348-3d0e2ca3-a32a-44ba-b6f8-813ac704a7a8.png)
### Admin/FeaturedBookings
![image](https://user-images.githubusercontent.com/110775919/205738388-fcf4438c-116a-4441-a918-8ecd03be338a.png)
### Admin/ViewUsers
![image](https://user-images.githubusercontent.com/110775919/205738442-5c5e3754-54a9-444a-af4e-fe745c1b6bf1.png)
### Admin/UploadSlider
![image](https://user-images.githubusercontent.com/110775919/205738522-627b2961-d4c7-4846-927b-36630fd545c2.png)
### Admin/GenerateReport
![image](https://user-images.githubusercontent.com/110775919/205738582-71d4f6e7-9cc2-4480-af8a-263c0e609a06.png)
### Admin/ViewFeedBack
![image](https://user-images.githubusercontent.com/110775919/205738670-f232153f-e8ed-402d-9cef-f4afc7229475.png)
### Admin/MovieHistory
![image](https://user-images.githubusercontent.com/110775919/205738738-d2a9d602-78a6-4083-a18a-a7755521a2a2.png)
### Admin/PaymentDetails
![image](https://user-images.githubusercontent.com/110775919/205738800-0095db69-0590-429b-8151-334a2a8420c3.png)


## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---
<p align="center"> © 2022 Dawood Usman, All Rights Reserved. </p>
<p align="center">
https://github.com/Dawood-Usman
</p>
