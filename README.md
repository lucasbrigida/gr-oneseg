# gr-oneseg : Partial ISDB-Tb receiver implemented on a Software Defined Radio platform

This work is about the implementation of the digital terrestrial television receiver under the ISDB-Tb (Integrated Services Digital Broadcasting-Terrestial Build-in) standard for the mobile service in the device based in Radio Defined by Software USRP (Universal Software Radio Peripheral).

The implemented reception system allows recovering the digital signal in narrow band to observe in real time the different channels and at the same time determine its quality through objective measures. A mathematical algorithm was implemented for the perfect synchronization in time and frequency of the signal of OFDM (Orthogonal Frequency Division Multiplexing), reducing the harmful effects of channel and increasing receiver efficiency.Also this work is  based on the project carried out by the University of Uruguay gr-isdbt, obtaining results in Ecuador and optimizing the algorithm for the requirements of the SDR equipment. 

This proyect was implemented in a system formed by a personal computer, the USRP 2920 connected through of a USB adapter to GigaBit Ethernet.

Software Specifications:  
---GNU Radio 3.7.10.1  
---gr-modtool  
---UBUNTU 1604  
---UHD_003.010.002  
 
**Installation instructions**

Once GNU RADIO and the UHD driver are installed, the application must be installed. The necessary software information is available at https://kb.ettus.com/Building_and_Installing_the_USRP_Open-Source_Toolchain_(UHD_and_GNU_Radio)_on_Linux.

git clone https://github.com/Jordyggg/gr-oneseg.git  
    cd gr-oneseg  
    mkdir build  
    cd build  
    cmake ../  
    make && sudo make install  
    sudo ldconfig  

For another Operative Systems and different location for the installation of GNU Radio  in needed the following instructions:

git clone https://github.com/Jordyggg/gr-oneseg.git  
    cd gr-oneseg  
    mkdir build  
    cd build  
    cmake -DCMAKE_INSTALL_PREFIX=<your_GNURadio_install_dir> ../  
    make   
    sudo make install  
    sudo ldconfig  

For system ubuntu 32 bits must change the make compilation with.  
 
cmake -DCMAKE_C_FLAGS='-msse -msse2 -msse3' -DCMAKE_CXX_FLAGS='-msse -msse2 -msse3' ../
	
**Problems**

*P*:  "AttributeError: 'module' object has no attribute viterbi_decoder 

*S*: This problem may be generated by several factors. Miss putting "sudo ldconfig". Do you have PYTHONPATH set? (It should include at least /usr/local/lib/python2.7/dist-packages). Another possibility is that you don't have swig installed (in this case, you must uninstall gr-oneseg, delete CMakeCache.txt in the build directory, and re-install; that is, after installing swig). Sometimes the origin problem is the libraries from gr-oneseg/lib/CMakeLists.txt here you must add the library name in the list or include directories. 
