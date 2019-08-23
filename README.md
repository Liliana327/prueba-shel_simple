# Simple_Shell.

[![N|Solid](https://camo.githubusercontent.com/04a8a9a456b8ecafad2eb4f2cff6803cd0194496/687474703a2f2f7777772e686f6c626572746f6e7363686f6f6c2e636f6d2f686f6c626572746f6e2d6c6f676f2e706e67)](https://www.holbertonschool.com/co)

Here you will find the function that makes similar proccesses of a command interpreter. This repository stores the code of a Simple Shell.

[![N|Solid](https://miro.medium.com/max/1016/1*4nh4ntvCLJjMUDOo1kDtIg.png)]()

## Files
---
| File | Description |
| ---- | ------- |
| _printf.c | first inlet of arguments evaluation  |
| _case_c | function that evaluates which format its going to be used |
| _cases_num.c , _cases_lis.c | Auxiliar functions for integers and string formats |
| conversion.c | Function that allows conversion from unsigned int to bin, oct, dec and hex base|
| holberton.h | header file that contains prototypes functions |
| _putchar.c  | function that improves output from a system call to wirte data out of buffer |

## Compilation 
First compile all project with a main program that allows you to invoke principal function _printf.c

```sh 
$gcc -Wall -Wextra -Werror -pedantic  *.c holberton.h -o <nameofexecutablefile>
```
Besides that execute it for seein the output at shell

```sh 
$./"nameofexecutable"
```
## Example

Dillinger uses a number of open source projects to work properly:

* [AngularJS] - HTML enhanced for web apps!
* [Ace Editor] - awesome web-based text editor


And of course Dillinger itself is open source with a [public repository][dill]
 on GitHub.

### Installation

Dillinger requires [Node.js](https://nodejs.org/) v4+ to run.

Install the dependencies and devDependencies and start the server.

```sh
$ cd dillinger
$ npm install -d
$ node app
```

For production environments...

```sh
$ npm install --production
$ NODE_ENV=production node app
```

### Plugins

Dillinger is currently extended with the following plugins. Instructions on how to use them in your own application are linked below.

| Plugin | README |
| ------ | ------ |
| Dropbox | [plugins/dropbox/README.md][PlDb] |
| GitHub | [plugins/github/README.md][PlGh] |
| Google Drive | [plugins/googledrive/README.md][PlGd] |
| OneDrive | [plugins/onedrive/README.md][PlOd] |
| Medium | [plugins/medium/README.md][PlMe] |
| Google Analytics | [plugins/googleanalytics/README.md][PlGa] |


### Development

Want to contribute? Great!

Dillinger uses Gulp + Webpack for fast developing.
Make a change in your file and instantanously see your updates!

Open your favorite Terminal and run these commands.

First Tab:
```sh
$ node app
```

Second Tab:
```sh
$ gulp watch
```

(optional) Third:
```sh
$ karma test
```
#### Building for source
For production release:
```sh
$ gulp build --prod
```
Generating pre-built zip archives for distribution:
```sh
$ gulp build dist --prod
```
### Docker
Dillinger is very easy to install and deploy in a Docker container.

By default, the Docker will expose port 8080, so change this within the Dockerfile if necessary. When ready, simply use the Dockerfile to build the image.

```sh
cd dillinger
docker build -t joemccann/dillinger:${package.json.version} .
```
This will create the dillinger image and pull in the necessary dependencies. Be sure to swap out `${package.json.version}` with the actual version of Dillinger.

Once done, run the Docker image and map the port to whatever you wish on your host. In this example, we simply map port 8000 of the host to port 8080 of the Docker (or whatever port was exposed in the Dockerfile):

```sh
docker run -d -p 8000:8080 --restart="always" <youruser>/dillinger:${package.json.version}
```

