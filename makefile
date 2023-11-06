name: Kamo-BranchTesting

on:
  push:
    branches:
      - Kamo_Kitchen

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
    - name: Checkout code
      uses: actions/checkout@v2

    - name: Install build dependencies
      run: sudo apt-get install -y g++ make

    - name: Clean project
      run: make clean
      
    - name: Build project
      run: make

    - name: Run tests
      run: make run

    - name: create executable
      if: ${{ success() }}
      run: make all
      
    - name: Clean up if tests passed
      if: ${{ success() }}
      run: make clean
