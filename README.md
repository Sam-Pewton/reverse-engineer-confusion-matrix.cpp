# reverse-engineer-confusion-matrix.cpp
Reverse Engineer confusion matrices from a variety of generated metrics.

Allows you to determine if a specific set of metrics is an achievable result from a given dataset of `CLASS_A` + `CLASS_B`. The `accuracy` of the result you are trying to determine is the minimum metric that is required to run this program. Other metrics available are `sensitivity`, `specificity`, `F1 score`, and `precision`.

Note that this only works for binary classification.

<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li>
        <a href="#usage">Usage</a>
        <ul>
            <li><a href="#python">Python</a></li>
        </ul>
    </li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
  </ol>
</details>

## About the Project

This repository houses a project that will extract all possible confusion matrices that correspond to particular output metrics for a given dataset size.

The metrics that are available to use are:
* Accuracy (Mandatory)
* Sensitivity
* Specificity
* F1 Score
* Precision

Any confusion matrix that meets the specified requirements is saved and outputted to `./data/output.csv`. Please note that this file is overwritten on each run, if you would like to save the results generated, please copy and rename the file you wish to keep.

The fastest version of the program is the C++ version.

At present, this project will only work for binary classification.

The confusion matrix layout is as follows:
    
``` 
             Predicted
               Class
              0      1
           -------------
          |      |      |
       0  |  TP  |  FN  |
          |      |      |
True       -------------
Class     |      |      |
       1  |  FP  |  TN  |
          |      |      |
           -------------
 
```

## Getting Started

How to set up and run the project.

### Prerequisites

#### Python
* [Python 3.*](https://www.python.org/downloads/)
* Text Editor/IDE

#### C++
* g++ compiler (or any alternative)

<p align="right">(<a href="#top">back to top</a>)</p>

### Installation

```sh
git clone https://github.com/Sam-Pewton/reverse_engineer_confusion_matrix
```

<p align="right">(<a href="#top">back to top</a>)</p>

## Usage

### C++

Terminal:
1. Open `./main.cpp` in a text editor of your choice
2. Modify lines 12:21 with your required parameters. If you do not wish to use an optional parameters, <b>set it to -1</b>.
3. Open the terminal to the location of the file.
4. Compile the program with `g++ -o ./Main main.cpp`
5. Execute the program with `./Main` in the terminal window. If any matches are made, the output is exported to `./data/output.csv`

<p align="right">(<a href="#top">back to top</a>)</p>

### Contributing
If you have a suggestion that would enhance this project, please fork the repo and create a pull request from your feature branch.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/your_new_feature`)
3. Commit your Changes (`git commit -m 'what you did and why'`)
4. Push to the Branch (`git push origin feature/your_new_feature`)
5. Open a Pull Request

### License
Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>
