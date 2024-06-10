## Data Logger
This function is made for helping in the debugging process
The function creates or opens a .txt file and stores data on it. 
This helps in saving the results of experimental functions rather than having to copy and paste them from the console each time

### It has 4 functions
- ```begin(OutFile, NewFile)```
  - ```OutFile``` is the name of the text file the data will be stored in
  - ```NewFile``` is a boolean which states whether to create a new file or append to an old one
    - ```true``` will create a new file and overwrite the previous if it exists
    - ```false``` will append to the file if it exists, if it doesn't then it will create a new file
- ```add(LogText)``` stores the data in ```LogText``` to the log file
- ```addDate()``` stores the current date and time in to the log file
- ```end()``` closes the log file
