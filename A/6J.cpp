// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#define ONLINE_JUDGE 1
/*
                                                             ▒▒▒
                                                             ▒▓  ▒▒▒
                                                              ▒▒  ▒▓▒▒▒▒
                                                               ▓▒   ▒▒▓▒▒▒▒▒
                                                                ▓▒▒   ▒▒▓▓▒▒ ▒
                                                                ▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒ ▒▒
                                                                 ▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒
                                                                 ▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒
                                                                 ▒▓ ▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▒▒▒▒
                                                                 ▒▓▒▒▒  ▓▒▓▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒
                                                                 ▓▓▒ ▒    ▒▓▓▒▓▓▒▓▓▓▓▓▓▓▓▓▒▒▓▓
                                                               ▒▒▓█▓▒▒▒     ▒▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓▒▒▓▒
        ▓▓▓▓▓▒▒                                              ▒▒▒▒▒  ▒▒▓        ▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▒▓▒
          ▒ ▒▓▓▓▓▓▒▒▒▒▒                                 ▒▒▒▓▓▓▓▓▓▓▓▒            ▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▒▒▓
           ▒   ▒▓▓▓▓▓▓▓▓▓▒▒▒▓▒                     ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓   ▒▒        ▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▒▒▒▓
            ▒▒   ▒▒▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓  ▒▒         ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓   ▒▒        ▒▒▒▓▓▓▓▓▓▓▓▓▓▓▒▒▒▓▒▒
             ▒▓    ▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▓▒▒▒  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒
               ▓   ▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████▓▒▒▒    ▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▓▒▒▒
                ▓   ▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▒▒▒▒
                 ▓   ▒▒▒▒▒▓▓▓▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒
                 ▒▓▒ ▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓█▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒ ▒
                  ▒█▓▒▓▓▒        ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓██▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒ ▒
                   ▒▓▓▒ ▒       ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒
                    ▒▓▒▒    ▒▒ ▒▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓█████████████████████▓█▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▒▒▒▒▒▓▒▒▒▒▒▒▒
                     ▓▓▒  ▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓████████████████████████▓█████▓██▓▓▓█▓▓▓▓▓▓▓▓▒▓▓▒▓▓▓▓▓█▓▓▓▓▓▓▓▒▒▒▒▒▓▒▒▒▒▒▒▒
                    ▓ ▒▒ ▒▒▒▒▓▓▓▓▓▓▓▓████████▓████████████████████▓██▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▒▓▒▒▓▓▓▓▒█▓▓▓▓▓▓▒▒▒▒▒▒▓▒▒▒▒▒▒▒
                     ▒▓▒▒▒▒▒▓▓▓▓▓▓▓▓██████████████████████▓████████▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▒▒▒▓▓▓▓▓█▓▓▓▓▓▓▒▒▒▒▒▓▒▒▒▒▒▒▒▒
                      ▒▒▒▓▒▓▓▓▓▓▓▓▓█████████▓███████████████████▓▓█▓▓▓▓▓▓▓▒▓▓▓▓█▓▓▓▓▓▒▒▓▓▓▒▒▒▓▓▓▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒▒
                       ▒ ▓▓▓▓▓▓▓▓███████████▓████████▓▓▓▓▓▓▓█▓▓█▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▓▓▓▒▒▒▓▓▓▒█▓▓▓▓▓▓▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒
                         ▓▓▓▓▓▓▓████▓███████▓███▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▓▒▒▒▒▓▓▓▓█▓▓▓▓▓▓▒▒▒▒▒▓▒▒▒▒▒▒▒▒
                        ▒▓▓▓▓█▓▓███▓███████▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▒▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒▒
                        ▓▓▓▓██▓▓███▓█▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒█▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒▓
                       ▓▓▓▓██▓▓▓▓▓▓██▓▓▓▓▓█▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒██▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒▒
                      ▓▓▓▓▓█▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▓█▓▓▓▓▓▓▓▒▒▒▓▓▒▒▒▒▒▒▒▒
                     ▒▓▓▓▓██▓▓▓▓▓▓▓██▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓▓▒▒▒▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒█▓▓▓▓▓▓▓▒▒▒▓▓▓▒▒▒▒▒▒▒▒
                     ▓▓▓▓▓█▓▓▓▓▓▓▓▓██▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒  ▓▓▒▓▓▓▓▓▓  ▓▒ ▒▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒██▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▒▒▓▒
                    ▒▓▓▓▓▓▓▓▓▓▓▓▓▓█████▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒  ▒▓▒▒▓▓▓▓▒  ▓▒ ▒▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▓█▓▓▓▓▓▓▓▒▒▒▓▓▓▒▒▒▒ ▓▒▓
                    ▓▓▒▓▓█▓▓▓▓▓▓▓▓█████▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒   ▓▒ ▒▓▓▒ ▒▒▒ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▓█▓▓▓▓▓▓▓▓▒▒▓▓▓▒▒▒▒▒▒▒▒
                   ▓▓▓▒▓▓█▓▓▓▓▓▓▓▓█████▓█▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒   ▒▒▓▓█████████▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▓█▓▓▓▓▓▓▓▓▒▒▓▓▓▒▒▒▒▒▒▓▒▒
                   ▓█▒▒▓▓█▓▓▓▓▓▓▓▓██▓▓███▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  ▒▓█████████████▓ ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒██▓▓▓▓▓▓▓▒▒▓▓▓▓▒▒▒▒▒▒▓▓
                  ▓▓▓▒▓▓▓▓▒▓▓▓▓▓▓▓▓██▓▓▓█▓  ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒███▓▒▒▓▓█▓▒██▒▓▓▒ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒██▓▓▓▓▓▓▓▓▒▒▓▓▓▒▒▒▒▒▒▒▒▒
                 ▒▓▓▒▒▓▓█▓▒▓▓▓▓▓▓▓▒▓▓▓▓▓▓█▒  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒▒▓▓███▓█▓▒▒  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒██▓▓▓▓▓▓▓▓▒▒▓▓▓▒▒▒▒▒▒ ▒▓
                 ▓▓ ▓▒▓▓▓▒▒▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓  ▒▓▓▓▓▒▒▓▒▒▓▓▓▓▓▓▓▓█▓  ▒  ▓▓▓▓▓▓▓▓▓▒   ▒▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒██▓▓▓▓▓▓▓▓▒▒▓▓▓▒▒▒▒▒▒ ▓▒
                 ▓▓ ▓▒▓▓▓▒▒▓▓▓▓▓▓▓▒▒▒▓▓▓▓ ▓▒▒  ▓▓▓▒▒▒▒▒▒▒▓▓▓▓▓▓▓   ▓█▓▓▓▓▓▓▓▓▒▓▒   ▒▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒███▓▓▓▓▓▓▓▒▒▓▓▓▒▒▒▒▒▓ ▓▒▒
                ▓▓  ▓▒▓▓▓▒▓▓▓▓▓▓▓▓▒  ▒▓▓▓  ▒    ▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓     ▓▓▓▓▒▒▒▒▒▒▓▒   ▒▓▒▓▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒███▓▓▓▓▓▓▓▒▓▓▓▓▒▒▒▒▒▓  ▓▓
               ▒▓▒  ▓▒▓▓▓▒▓▓▓▓▓▓▓▓▒▒▓████████▒  ▒▓▒▒▒▒▒▒▒▒▒▓▒▓       ▓▒▒▒    ▒▒    ▓▒▒▓▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒███▓▓█▓▓▓▓▒▓▓▓▓▓▒▒▒▒▓  ▒▒▒
               ▓▓   ▓▒▓▓▓▒▓▓▓▓▓▓▓▓▒███▓▓▓▒▓▓██▓▒ ▒▒▒▓▒▒▒▒▒▒▒           ▒▓▒▒▒       ▓▒▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒███▓▓█▓▓▓▒▒▓▓▓▓▓▒▒▒▒▓▒  ▓▓
              ▒▓▓   ▓▒▓▓▓▓▓▓▓▓▓▓████▓  █▒▒▓▓▓██▒  ▒▒ ▓▒▒▒▒▓                       ▒▒▒▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒███▓▓█▓▓▓▒▒▓▓▓▓▓▒▒▒▒▓▒  ▓▓▒
              ▓▓    ▓▒▓▓▓▓▓▓▓▓▓▓█▓██▓  ▓▓▒▓█████  ▓   ▓▒▒▓                        ▓▒▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒███▓██▓▓▓▒▓▓▓▓▓▓▒▒▒▒▓▒  ▓▒▓
             ▓▓     ▒▒▓▓▓▓▓▓▓▓▓▓▓▓█▒▒   █▓▓▓▓▓▓▓▒▒     ▒▒                        ▒▓▒▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒██████▓▓▓▒▓▓▓▓▓▓▒▒▒▒▓▒  ▒▓▒
             ▓▓     ▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓    ▓▒▓▒▒▒▒ ▒                               ▓▒▒▒▓▓▓▒▒▒▒▒▒▒▓▓▓▓▓▒▒███████▓▓▓▓▓▓▓▓▓▒▒▒▒▓▒▒  ▓▒▒
            ▒▓       ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒    ▓▒  ▒▒                                ▒▓▒ ▒▓▓▓▓▓▒▒▒▓▓▓▓▓▓▓▒▒███████▓▒▓▓▓▓▓▓▓▒▒▒▒▓▓▒▒ ▒▓▓
            ▓▒       ▒▒▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▒    ▒▓▒                                  ▓▒▓ ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒███████▓▒▓▓▓▓▓▓▓▒▒▒▓▓▓▒▒  ▓▓
           ▓▓        ▒▒▓▓▓█▓▓▓▓▓█▓▓▓▓▓▓                                         ▓▒  ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒███████▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓▒  ▓▓▒
          ▒▓▒        ▓▒▓█▓█▓▓▓▓▓█▓▓▓▓▓▓▒                                       ▒▒▒  ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓███████▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓▒▓ ▒▒▓
          ▓▒          ▓▓█▓▓█▓▓▓▓██▓▓▓▓▓▓▒                                      ▓▓   ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓███████▓▓█▓▓▓▓▓▓▓▒▒▓▓▓▓▓▒▒ ▒▓
         ▒▓           ▒▒██▓███▓▓███▓▓▓▓▓▓                                     ▒▓▒   ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓██████▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▒▒▒
        ▒▓             ▒▓█▓▓██▓▓████▓▓▓▓▓▒                                    ▓▓    ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓██████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▒
        ▓▒             ▒▓██▒███▓█████▓▓▓▓▓▒                                   ▓▒    ▒█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒█████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▒
       ▒▒               ▓▓██▓██▓████████▓▓▓▒                  ▓              ▒▓▒   ▒▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▒████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒
       ▓                ▒▓██▓▓█▓████████▓▓▒▓▒                                ▒▒ ▒▒▒▒▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒ ▒███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒
      ▓▒                 ▓███▓█▓▓█████████▒▓ ▒▓▒                             ▓▓▒▒▒▒▒▓██▓▓▓▓▓▓▓▓▓▓▓▓▒▓▒▒    █▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒
      ▒                  ▒███▓▓▓▓█████████▒▓  ▒▒▓▓                         ▒▓▓▒▒▒▒▒▒▓██▓▓▓▓▓▓▓▓▓▓▓▓▒▓▒▒     ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒
     ▓                    ▓██▓▓█▓█████████▒█▒ ▒▒▓▓▓▓▓▒                  ▒█▒▒▓▓▒▒▒▒▒▒▓███▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒      ▒█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▒▓
     ▒                    ▓██▓▓▓██████████▒█▒ ▒▒▓▓▓▓▓▓▓▓              ▓▒▓█▒▒▓▓▒▒▒▒▒▒▓██▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒       ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓█▓▒▒
    ▒                     ▓██▓▓▓▓█████████▒█▓ ▒▒▓▓▓▓▓▓▓▓▓▓▓      ▒▒▒▒▒▒▒▒▒▓▒▓▒▒▒▒▒▒▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒         ▒█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒
    ▒                    ▒▓██▓▓▓▓▓███████▓▒█▓  ▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▒  ▒▒▒▒▒▒▒▓▒▓▒▒▒▓▓▒▒███▓▓▓▓▓▓▓▓▓▓▓▒▓▒▒         ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒
   ▒                     ▒▓██▓▓▓▓▓▓██████▓▒▓▓ ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓   ▒▒▒▒▒   ▒▒▓▓▓▒▓▒   ▒██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒       ▒   ▒████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓
   ▒                     ▒▓██▓▓▓▓▓▓██████▓▓▓▓ ▒▒▓▓▓▓▓▓▓▓▓▓▓   ▒▒▒▒     ▒▒▒▒▓▒▓▓▒   ▒██▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒     ▒   ▒▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒
   ▒                     ▒▓██▓▓▓▓▓▓▓███▓█▓▒▓▓ ▒▒▓▓▓▓▓▓▓▓▓▓▒▒▒  ▒       ▒▒▒▒▓▒▓▒▒▒  ▒█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒   ▒  ▒▒▓▓▓▓▓▓▓▓▓▓▓▓██▓▒▓▓▓▓▓▓▓▓▓▒▒
  ▒                      ▓▓██▓▓▓▓▓▓▓███▓█▒ █▓ ▒▒▓▓▓▓▓▓▓▓▓▓▓▒▒▒         ▒▒▒▒▒▒▓ ▒▒▒ ▓█▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒█▓▓▓▓▓▓██▓▓▓▓▓▓▒▒▓██▓▓▓▓▓▓▓▓▒▓
  ▒                     ▒▓▓█▓▓▓▓▓▓▓▓▓██▓█▒ ▓▓ ▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▒       ▒▒▒▒▒▒▒▒  ▒▒▒▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▒▒▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▒▒▓▓▓▓▓█▓▓▓▓▓▓▓▒▓
  ▒                     ▒▓▓█▓▓▓▓▓▓▓▓▓██▓█  ▓▓▒▓▓▓▓▓▓▓▓█████▒▒▒▒       ▒▒▒ ▒▒▒▒▒ ▒▒▒█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▒▒▒▒▓▓▒▓▓▓▓▓█▓▓▓▓▓▓▓▒▒▓▓██▓▓▓▓▓▓▓▓▓▓▓▒▒
  ▒                     ▒▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓  ▓▓▒▓▓▓▓█████████ ▒▒▒▓     ▒▒     ▒ ▒  ▒▒▓▒█▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓█▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▒▒▓█▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▒
  ▒                     ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒█▒  ▓▓▓▓████████████ ▒▒▒▒▓  ▒▓▒      ▒ ▓   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒█▓▓▓▓▓▓██▓▓▓▓▓▓▓▒▒▓█▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓
  ▒                     ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓   ▓███████████████▒▒▒▓██▒▒▓▒     ▒▒▓▒▓▒▒▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓█▓▓▓█▓▓▓▓▓▓▓▓▒▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓
  ▒                     ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒ ▒▓▓█████████████▓█▒▓██▓▓▓▒  ▒  ▒   ▓▒▒▓▓▒█▓█▓▓▓▓▓▓▓▓▓▓▓▒▒█▓▓██▓▓██▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
*/
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define all(v) v.begin(), v.end()

typedef long long ll;
typedef pair<int, int> ii;

const long double PI = atan(1.0) * 4.0;
const long double EPS = 1e-6;

long double rem(long double a, long double b) {
    while(a >= b)
        a -= b;
    return min(a, b - a);
}

void solve() {
    long double x[3], y[3];
    for(int i = 0;i < 3;i++)
        cin >> x[i] >> y[i];
    long double A = sqrt(pow(x[0] - x[1], 2.0) + pow(y[0] - y[1], 2.0));
    long double B = sqrt(pow(x[2] - x[1], 2.0) + pow(y[2] - y[1], 2.0));
    long double C = sqrt(pow(x[0] - x[2], 2.0) + pow(y[0] - y[2], 2.0));
    long double a1 = acos((B * B + C * C - A * A) / (2.0 * B * C)) * 2.0;
    long double a2 = acos((B * B + A * A - C * C) / (2.0 * B * A)) * 2.0;
    long double a3 = 2.0 * PI - a1 - a2;
    long double R = A / (2.0 * sin(a1 / 2.0));
    cout.precision(10);
    for(int N = 3;N < 101;N++) {
        long double phi = 2.0 * PI / N;
        if(rem(a1, phi) + rem(a2, phi) + rem(a3, phi) < EPS) {
            cout << fixed << sin(phi) * N * R * R / 2.0;
            return;
        }
    }
    assert(1 == 0);
}

int main() {
    if(ONLINE_JUDGE) { //usual problem
    } else { //file
        freopen("input.txt", "r", stdin);
    }
    solve();
    return 0;
}
/*****/
// LUOGU_RID: 126062901
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <array>
#include <set>
#include <cmath>
#include <iomanip>
#include <queue>
#include <unordered_map>
#include <chrono>
#include <stack>
#include <numeric>

//#define int long long
using namespace std;

const int mod = 1e9 + 7;

typedef long long ll;
typedef pair<int, int> PII;

typedef double db;
const db EPS = 1e-2;
const double PI = acos(-1.0);
const double sq3 = sqrt(3);

const int N = 2e5 + 10;
const int M = 1e3 + 5;
constexpr db INF=numeric_limits<db>::max();


inline int read() {
    int x = 0, f = 1; char ch = getchar();
    while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getchar();}
    while (ch >= '0' && ch <= '9') {x = x * 10 + ch - '0'; ch = getchar();}
    return x * f;
}

// ll gcd(ll a, ll b) {
//     return b ? gcd(b, a % b) : a;
// }

// int lcm (int a, int b) {
//     return a * b / gcd(a, b);
// }

inline int sign(db a) { return a < -EPS ? -1 : a > EPS; }

inline int cmp(db a, db b) { return sign(a - b); }

struct P {
    db x, y;
    P() {}
    P(db _x, db _y) : x(_x), y(_y) {}
    P operator+(P p) { return {x + p.x, y + p.y}; }
    P operator-(P p) { return {x - p.x, y - p.y}; }
    P operator*(db d) { return {x * d, y * d}; }
    P operator/(db d) { return {x / d, y / d}; }

    bool operator<(P p) const {
        int c = cmp(x, p.x);
        if (c) return c == -1;
        return cmp(y, p.y) == -1;
    }

    bool operator==(P o) const {
        return cmp(x, o.x) == 0 && cmp(y, o.y) == 0;
    }

    db dot(P p) { return x * p.x + y * p.y; }
    db det(P p) { return x * p.y - y * p.x; }
    int toleft(P a) {auto t = (x * a.y - y * a.x); return (t > EPS) - (t < -EPS);}

    db distTo(P p) { return (*this - p).abs(); }
    db distTo2(P p) {return (*this - p).abs2(); }
    db alpha() { return atan2(y, x); }
    void read() { cin >> x >> y; }
    void write() {cout << "(" << x << "," << y << ")" << endl;}
    db abs() { return sqrt(abs2());}
    db abs2() { return x * x + y * y; }
    // db ang(P a) {return acosl(max(-1.0l, min(1.0l, ((*this).dot(a)) / (abs() * a.abs()))));}
    P rot90() { return P(-y, x);}
    P unit() { return *this / abs(); }
    int quad() const { return sign(y) == 1 || (sign(y) == 0 && sign(x) >= 0); }
    //P rot(db an) { return {x * cos(an) - y * sin(an), x * sin(an) + y * cos(an)}; }
    P rot (db cosr, db sinr) {return {x * cosr - y * sinr, x * sinr + y * cosr};}
};

// bool isMiddle(db a, db m, db b) {
//     /*if (a > b) swap(a, b);
//     return cmp(a, m) <= 0 && cmp(m, b) <= 0;*/
//     return sign(a - m) == 0 || sign(b - m) == 0 || (a < m != b < m);
// }

// bool isMiddle(P a, P m, P b) {
//     return isMiddle(a.x, m.x, b.x) && isMiddle(a.y, m.y, b.y);
// }

// P proj(P p1, P p2, P q) {
//     P dir = p2 - p1;
//     return p1 + dir * (dir.dot(q - p1) / dir.abs2());
// }

// // 求 q 到 直线p1p2 的最小距离
// db nearest(P p1, P p2, P q){
//     if (p1 == p2) return p1.distTo(q);
//     P h = proj(p1,p2,q);
//     return q.distTo(h);
// }

// // 求 q 到 线段p1p2 的最小距离
// db nearest_seg (P p1, P p2, P q){
//     if (p1 == p2) return p1.distTo(q);
//     P h = proj(p1,p2,q);
//     if(isMiddle(p1,h,p2))
//         return q.distTo(h);
//     return min(p1.distTo(q),p2.distTo(q));
// }

// // cross 是 p1 -> p2 和 p1 -> p3的叉积
// #define cross(p1,p2,p3) ((p2.x-p1.x)*(p3.y-p1.y)-(p3.x-p1.x)*(p2.y-p1.y))
// // crossOp 是 p1->p2 和 p1->p3 的叉积的正负，用来判断 p3 在 p1-> p2线段的左边还是右边
// #define crossOp(p1,p2,p3) sign(cross(p1,p2,p3))
 
// #define rep(i, a, b) for (int i = a; i < b; i++)
// db area(vector<P> &ps) {
//     db ret = 0; rep(i, 0, ps.size()) ret += ps[i].det(ps[(i + 1) % ps.size()]);
//     return ret / 2;
// }

// vector<P> convexHull(vector<P> ps) {
//     int n = ps.size(); if (n <= 1) return ps;
//     sort(ps.begin(), ps.end());
//     vector<P> qs(n * 2); int k = 0; //qs是栈, 每次加入新的点，并检查凸包最后部分是不是凸的
//     for (int i = 0; i < n; qs[k++] = ps[i++]) // 求下凸包
//         while (k > 1 && crossOp(qs[k - 2], qs[k - 1], ps[i]) <= 0) --k; // 如果凸包最后三个点不满足向下，则弹出这一个点
//     for (int i = n - 2, t = k; i >= 0; qs[k++] = ps[i--]) // 求上凸包
//         while (k > t && crossOp(qs[k - 2], qs[k - 1], ps[i]) <= 0) --k; // 如果凸包最后三个点不满足向上，则弹出这一个点
//     qs.resize(k - 1); // 由于1号点被重复加入过两次，所以删去一个
//     return qs;
// }

// // 极角排序
// struct argcmp {
//     bool operator () (const P &a, const P &b) const {
//         const auto quad = [](const P & a) {
//             if (a.y < -EPS) return 1;
//             if (a.y > EPS) return 4;
//             if (a.x < -EPS) return 5;
//             if (a.x > EPS) return 3;
//             return 2;
//         };
//         const auto det = [&] (const P & a, const P & b) {return a.x * b.y - a.y * b.x;};
//         const auto dot = [&] (const P & a, const P & b) {return a.x * b.x + a.y * b.y;};
//         const int qa = quad(a), qb = quad(b);
//         if (qa != qb) return qa < qb;
//         const auto t = det(a, b);
//         if (abs(t) <= EPS) return dot(a, a) < dot(b, b) - EPS; // 不同长度的向量需要分开
//         return t > EPS;
//     }
// };

// struct line {
//     P p, v;

//     bool operator == (const line &a) const {
//         auto toleft = [&] (const P & a, const P & b) {auto t = (a.x * b.y - a.y * b.x); return (t > EPS) - (t < -EPS);};
//         const P x = P(p.x - a.p.x, p.y - a.p.y);
//         return toleft(v, a.v) == 0 && toleft(v, x) == 0;
//     }
//     int toleft (const P &a) const {
//         auto toleft = [&] (const P & a, const P & b) {auto t = (a.x * b.y - a.y * b.x); return (t > EPS) - (t < -EPS);};
//         const P x = P(a.x - p.x, a.y - p.y);
//         return toleft(v, x);
//     }
//     P inter (const line &a) const {
//         auto add = [&] (const P & a, const P & b) {return P(a.x + b.x, a.y + b.y);};
//         auto dot = [&] (const P & a, const P & b) {return a.x * b.x + a.y * b.y;};
//         auto det = [&] (const P & a, const P & b) {return a.x * b.y - a.y * b.x;};
//         auto mul = [&] (const P & a, db b) {return P(a.x * b, a.y * b);};
//         const P x = P(p.x - a.p.x, p.y - a.p.y);
//         return add(p, mul(v, (det(a.v, x) / det(v, a.v))));
//     }
//     bool operator < (const line &a) const {
//         auto det = [&] (const P & a, const P & b) {return a.x * b.y - a.y * b.x;};
//         auto dot = [&] (const P & a, const P & b) {return a.x * b.x + a.y * b.y;};
//         if (abs(det(v, a.v)) <= EPS && dot(v, a.v) >= -EPS) {return toleft(a.p) == -1;}
//         return argcmp()(v, a.v);
//     }
// };

// //返回点集的半平面交
// vector<line> _halfinter (vector<line> &l) {
//     constexpr db LIM = 1e15l; // 最外层边界
//     const auto check = [&] (const line & a, const line & b, const line & c) {return a.toleft(b.inter(c)) < 0;};
//     // 这里需要大约 LIM ^ 3的点的大小, 没有精度损失的版本，ll 下 10^6
//     /*
//     const auto check = [](line &a, line & b, line & c) {
//         const auto t = b.v.det(c.v);
//         P x = a.v * t, y = b.p * t + b.v * (c.v.det(b.p - c.p)) - a.p * t;
//         return x.toleft(y) < 0;
//     };
//     */ 
//     l.push_back({{ 0, 0}, {0, -1}}); l.push_back({{0, 0}, {1, 0}}); //四个边界
//     l.push_back({{ LIM, 0}, {0, 1}}); l.push_back({{0, LIM}, { -1, 0}});
// //    cout << l.size() << "\n";
//     sort(l.begin(), l.end());
//     // cout << "===========\n";
//     // for (auto t: l) {
//     //     cout << t.p.x << " " << t.p.y << " " << t.v.x << " " << t.v.y << "\n";      
//     // }
//     // cout << "=============\n";
//     deque<line> q;
//     for (size_t i = 0; i < l.size(); i++) {
//         if (i > 0 && l[i - 1].v.toleft(l[i].v) == 0 && l[i - 1].v.dot(l[i].v) > EPS) continue;
//         while (q.size() > 1 && check(l[i], q.back(), q[q.size() - 2])) q.pop_back(); //弹出后面边界
//         while (q.size() > 1 && check(l[i], q[0], q[1])) q.pop_front(); //弹出前面边界
//         q.push_back(l[i]);
//     }
//     while (q.size() > 1 && check(q[0], q.back(), q[q.size() - 2])) q.pop_back();
//     while (q.size() > 1 && check(q.back(), q[0], q[1])) q.pop_front();
//     if (q.size() <= 2 || check(q[1], q[0], q.back())) return vector<line> (); // 无解返回空集
//     return vector<line> (q.begin(), q.end());
// }

// //返回凸包的半平面交
// vector<P> halfinter (vector<line> &l) {
//     const auto lines = _halfinter(l);
//     // for (auto t: lines) {
//     //     cout << t.p.x << ' ' << t.p.y << " " << t.v.x << " " << t.v.y << "\n";  
//     // }
//     vector<P> poly; poly.resize(lines.size());
//     if (lines.empty()) return poly;
//     for (size_t i = 0; i < lines.size(); i++) {
//         const size_t j = (i == lines.size() - 1 ? 0 : i + 1);
//         poly[i] = lines[i].inter(lines[j]);
//     }
//     poly.erase(unique(poly.begin(), poly.end()), poly.end());
//     if (poly.front() == poly.back() && poly.size() != 1) poly.pop_back();
//     return poly;
// }

// struct segment {
//     P a, b;
//     segment() {}
//     segment(P _a, P _b) : a(_a), b(_b) {}
//     bool operator < (const segment &s) const {return make_pair(a, b) < make_pair(s.a, s.b);}

//     // 用于判断 n 条线段是否相交, 板子中
//     int is_on(const P &p) const {
//         auto sub = [&] (P a, P b) {return P(a.x - b.x, a.y - b.y);};
//         if (p==a || p==b) return -1;
//         return (sub(p,a)).toleft(sub(p,b))==0 && (sub(p, a)).dot(sub(p, b))<-EPS;
//     }

//     // 判定性函数建议在整数域使用
//     int is_inter(const line &l) const {
//         if (l.toleft(a) == 0 || l.toleft(b) == 0) return -1;
//         return l.toleft(a) != l.toleft(b);
//     }
//     // 判断两线段是否相交
//     // -1 在某一线段端点处相交 | 0 两线段不相交 | 1 两线段严格相交
//     int is_inter2(const segment &s) const {
//         const auto sub = [&] (P a, P b) {return P(a.x - b.x, a.y - b.y);};
//         if (is_on(s.a) || is_on(s.b) || s.is_on(a) || s.is_on(b)) return -1;
//         line l{a,sub(b, a)},ls{s.a,sub(s.b, s.a)};
//         return l.toleft(s.a)*l.toleft(s.b)==-1 && ls.toleft(a)*ls.toleft(b)==-1;
//     }
// };

// struct Circle {
//     P c; db r;
//     bool operator == (const Circle &a) const {return c == a.c && abs(r - a.r) <= EPS;}
//     db circ () const {return 2 * PI * r;}
//     db area () const {return PI * r * r;}

//     //点与圆的关系
//     // -1 圆上 ｜ 0 圆外 ｜ 1 圆内
//     int is_in (P &a) {db d = a.distTo(c); return abs(d - r) <= EPS ? -1 : d < r - EPS;}

//     //直线与圆关系
//     //0 相离 | 1 相切 | 2 相交
//     int relation (line &l) {
//         db d = nearest(l.p, l.p + l.v, c);
//         if (d > r + EPS) return 0;
//         if (abs(d - r) <= EPS) return 1;
//         return 2;
//     }
    
//     //圆与圆关系
//     // -1 相同 | 0 相离 | 1 外切 | 2 相交 | 3 内切 | 4 内含
//     int relation (Circle &a) {
//         if (*this == a) return -1;
//         db d = c.distTo(a.c);
//         if (d > r + a.r + EPS) return 0;
//         if (abs(d - a.r - r) <= EPS) return 1;
//         if (abs(d - abs(r - a.r)) <= EPS) return 3;
//         if (d < abs(r - a.r) - EPS) return 4;
//         return 2;
//     }

//     //直线与圆的交点
//     vector<P> inter(line &l) {
//         db d = nearest(l.p, l.p + l.v, c);
//         P p = proj(l.p, l.p + l.v, c);
//         int t = relation(l);
//         if (t == 0) return vector<P>();
//         if (t == 1) return vector<P>{p};
//         db k = sqrt(r * r - d * d);
//         return vector<P>{p-(l.v/l.v.abs())*k,p+(l.v/l.v.abs())*k};
//     }

//     //圆与圆交点
//     vector<P> inter(Circle &a) {
//         db d = c.distTo(a.c);
//         int t = relation(a);
//         if (t == -1 || t == 0 || t == 4) return vector<P>();
//         P e = a.c - c; e = e / e.abs() * r;
//         if (t == 1 || t == 3) {
//             if (r * r + d * d - a.r * a.r >= -EPS) return vector<P>{c + e};
//             return vector<P>{c - e};
//         }
//         db costh = (r * r + d * d - a.r * a.r) / (2 * r * d), sinth = sqrt(1 - costh * costh);
//         return vector<P>{c + e.rot(costh, -sinth), c + e.rot(costh, sinth)};
//     }

//     //圆与圆交面积
//     db inter_area(Circle &a) {
//         db d = c.distTo(a.c);
//         int t = relation(a);
//         if (t == -1) return area();
//         if (t < 2) return 0;
//         if (t > 2) return min(area(), a.area());
//         db costh1 = (r * r + d * d - a.r * a.r) / (2 * r * d), costh2 = (a.r * a.r + d * d - r * r) / (2 * a.r * d);
//         db sinth1 = sqrt(1 - costh1 * costh1), sinth2 = sqrt(1 - costh2 * costh2);
//         db th1 = acos(costh1), th2 = acos(costh2);
//         return r * r * (th1 - costh1*sinth1) + a.r * a.r * (th2 - costh2 * sinth2);
//     }
    
//     //过圆外一点圆的切线
//     vector<line> tangent (P &a) {
//         int t = is_in(a);
//         if (t == 1) return vector<line>();
//         if (t == -1) {
//             P v = {-(a - c).y, (a - c).x};
//             return vector<line>{{a, v}};
//         }
//         P e = a - c; e = e / e.abs() * r; 
//         db costh = r / c.distTo(a), sinth = sqrt(1 - costh * costh);
//         P t1 = c + e.rot(costh, -sinth), t2 = c + e.rot(costh, sinth);
//         return vector<line>{{a, t1 - a}, {a, t2 - a}};
//     }

//     // 两圆的公切线
//     vector<line> tangent(Circle &a) {
//         int t = relation(a);
//         vector<line> lines;
//         if (t == -1 || t == 4) return lines;
//         if (t == 1 || t == 3) {
//             P p = inter(a)[0], v = {-(a.c - c).y, (a.c - c).x};
//             lines.push_back({p, v});
//         }
//         db d = c.distTo(a.c);
//         P e = (a.c - c) / (a.c - c).abs();
//         if (t <= 2) {
//             db costh = (r - a.r) / d, sinth = sqrt(1 - costh*costh);
//             P d1 = e.rot(costh, -sinth), d2 = e.rot(costh, sinth);
//             P u1 = c + d1 * r, u2 = c + d2 * r, v1 = a.c + d1 * a.r, v2 = a.c + d2 * a.r;
//             lines.push_back({u1, v1 - u1}); lines.push_back({u2, v2 - u2});  
//         }
//         if (t == 0) {
//             db costh = (r + a.r) / d, sinth = sqrt(1 - costh * costh);
//             P d1 = e.rot(costh, -sinth), d2 = e.rot(costh, sinth);
//             P u1 = c + d1 * r, u2 = c + d2 * r, v1 = a.c - d1 * a.r, v2 = a.c - d2 * a.r;
//             lines.push_back({u1, v1 - u1}); lines.push_back({u2, v2 - u2});
//         }
//         return lines;
//     }

//     //圆的反演
//     tuple<int, Circle, line> inverse(line &l) {
//         Circle null_c = {{0.0, 0.0}, 0.0};
//         line null_l = {{0.0, 0.0}, {0.0, 0.0}};
//         if (l.toleft(c) == 0) return {2, null_c, l};
//         P v = l.toleft(c) == 1 ? P(l.v.y, -l.v.x) : P(-l.v.y, l.v.x);
//         db d = r * r / nearest(l.p, l.p + l.v, c);
//         P p = c + v / v.abs() * d;
//         return {1, {(c + p) / 2, d / 2}, null_l};
//     }

//     tuple<int, Circle, line> inverse(Circle &a) {
//         Circle null_c = {{0.0, 0.0}, 0.0};
//         line null_l = {{0.0, 0.0}, {0.0, 0.0}};
//         P v = a.c - c;
//         if (a.is_in(c) == -1) {
//             db d = r * r / (a.r + a.r);
//             P p = c + v / v.abs() * d;
//             return {2, null_c, {p, {-v.y, v.x}}};
//         }
//         if (c == a.c) return {1, {c, r * r / a.r}, null_l};
//         db d1 = r * r / (c.distTo(a.c) - a.r), d2 = r * r / (c.distTo(a.c) + a.r);
//         P p = c + v / v.abs() * d1, q = c + v / v.abs() * d2;
//         return {1, {(p + q) / 2, p.distTo(q) / 2}, null_l};
//     }

//     // Circle (P &a, P &b,P &c) {
//     //     auto A = (a+b) * 0.5;
//     //     auto B = (a+c) * 0.5;
 
//     //     auto v1 = (a-A).rot90();
//     //     auto v2 = (c-B).rot90();
 
//     //     c = line{A, v1}.inter(line{B, v2});
//     //     r = sqrt(c.distTo2(a));
//     // }
//     // Circle (vector<P> &vec){
//     //     mt19937 rng(114514);
//     //     shuffle(begin(vec), end(vec), rng);
 
//     //     int n = vec.size();
 
//     //     *this =circle(vec[0]);
//     //     for(int i = 1 ; i < n ; i ++){
//     //         if((*this).is_in(vec[i])==1) continue;
 
//     //         *this = circle(vec[i]);
//     //         for(int j = 0 ; j < i ; j ++){
//     //             if((*this).is_in(vec[j])==1) continue;
 
//     //             *this = circle(vec[i], vec[j]);
//     //             for(int k = 0 ; k < j ; k ++){
//     //                 if((*this).is_in(vec[k])==1) continue;
 
//     //                 *this = circle(vec[i], vec[j], vec[k]);
//     //             }
//     //         }
//     //     }
//     // }
// };

// // 圆与多边形面积交
// db area_inter (Circle &circ, vector<P> &poly) {
//     const auto cal = [] (Circle &circ, P &a, P &b) {
//         if ((a - circ.c).toleft(b - circ.c) == 0) return 0.0l;
//         auto ina = circ.is_in(a), inb = circ.is_in(b);
//         line ab = {a, b - a};
//         if (ina && inb) return ((a - circ.c).det(b - circ.c)) / 2;
//         if (ina && !inb) {
//             auto t = circ.inter(ab);
//             P p = t.size() == 1 ? t[0] : t[1];
//             db ans = ((a - circ.c).det(p - circ.c)) / 2;
//             db th = (p - circ.c).ang(b - circ.c);
//             db d = circ.r * circ.r * th / 2;
//             if ((a - circ.c).toleft(b - circ.c) == 1) return ans + d;
//             return ans - d;
//         }
//         if (!ina && inb) {
//             P p = circ.inter(ab)[0];
//             db ans = ((p - circ.c).det(b - circ.c)) / 2;
//             db th = (a - circ.c).ang(p - circ.c);
//             db d = circ.r * circ.r * th / 2;
//             if ((a - circ.c).toleft(b - circ.c) == 1) return ans + d;
//             return ans - d;
//         }
//         auto p = circ.inter(ab);
//         if (p.size() == 2 && nearest_seg(a, b, circ.c) <= circ.r + EPS) {
//             db ans = ((p[0] - circ.c).det(p[1] - circ.c)) / 2;
//             db th1 = (a - circ.c).ang(p[0] - circ.c), th2 = (b - circ.c).ang(p[1] - circ.c);
//             db d1 = circ.r * circ.r * th1 / 2, d2 = circ.r * circ.r * th2 / 2;
//             if ((a - circ.c).toleft(b - circ.c) == 1) return ans + d1 + d2;
//             return ans - d1 - d2;
//         }
//         db th = (a - circ.c).ang(b - circ.c);
//         if ((a - circ.c).toleft(b - circ.c) == 1) return circ.r * circ.r * th / 2;
//         return -circ.r * circ.r * th / 2;
//     };

//     db ans = 0;
//     for (size_t i = 0; i < poly.size(); i++) {
//         const auto nxt = [&] (int x) {return x == poly.size() - 1 ? 0 : x + 1;};
//         P a = poly[i], b = poly[nxt(i)];
//         ans += cal(circ, a, b);
//     }
//     return ans;
// }

// // 圆面积并
// // 轮廓积分 复杂度 O(n^2logn)
// // ans[i] 表示被至少覆盖了 i + 1 次的区域的面积
// vector<db> area_union(vector<Circle> &circs) {
//     size_t siz = circs.size();
//     using arc_t = tuple<P, db, db, db>;
//     vector<vector<arc_t>> arcs(siz);
//     const auto eq = [] (const arc_t &u, const arc_t &v) {
//         const auto [u1, u2, u3, u4] = u;
//         const auto [v1, v2, v3, v4] = v;
//         return u1 == v1 && abs(u2 - v2) <= EPS && abs(u3 - v3) <= EPS && abs(u4 - v4) <= EPS;
//     };

//     auto cut_circ = [&] (Circle &ci, size_t i) {
//         vector<pair<db, int>> evt;
//         evt.push_back({-PI, 0}); evt.push_back({PI, 0});
//         int init = 0;
//         for (size_t j = 0; j < circs.size(); j++) {
//             if (i == j) continue;
//             Circle &cj = circs[j];
//             if (ci.r < cj.r - EPS && ci.relation(cj) >= 3) init++;
//             auto inters = ci.inter(cj);
//             if (inters.size() == 1) evt.push_back({atan2l((inters[0] - ci.c).y, (inters[0] - ci.c).x), 0}); 
//             if (inters.size() == 2) {
//                 P dl = inters[0] - ci.c, dr = inters[1] - ci.c;
//                 db argl = atan2l(dl.y, dl.x), argr = atan2l(dr.y, dr.x);
//                 if (abs(argl + PI) <= EPS) argl = PI;
//                 if (abs(argr + PI) <= EPS) argr = PI;
//                 if (argl > argr + EPS) {
//                     evt.push_back({argl, 1}); evt.push_back({PI, -1});
//                     evt.push_back({-PI, 1}); evt.push_back({argr, -1});
//                 }
//                 else {
//                     evt.push_back({argl, 1});
//                     evt.push_back({argr, -1});
//                 }
//             }
//         }
//         sort(evt.begin(), evt.end());
//         int sum = init;
//         for (size_t i = 0; i < evt.size(); i++) {
//             sum += evt[i].second;
//             if (abs(evt[i].first - evt[i+1].first) > EPS) arcs[sum].push_back({ci.c, ci.r, evt[i].first, evt[i+1].first});
//             if (abs(evt[i+1].first - PI) <= EPS) break;
//         }
//     };

//     const auto oint = [] (arc_t &arc) {
//         const auto [cc, cr, l, r] = arc;
//         if (abs(r - l - PI - PI) <= EPS) return 2.0l * PI * cr * cr;
//         return cr * cr * (r - l) + cc.x * cr * (sin(r) - sin(l)) - cc.y * cr * (cos(r) - cos(l));
//     };

//     for (size_t i = 0; i < circs.size(); i++) {
//         auto &ci = circs[i];
//         cut_circ(ci, i);
//     }
//     vector<db> ans(siz);
//     for (size_t i = 0; i < siz; i++) {
//         db sum = 0;
//         sort(arcs[i].begin(), arcs[i].end());
//         int cnt = 0;
//         for (size_t j = 0; j < arcs[i].size(); j++) {
//             if (j > 0 && eq(arcs[i][j], arcs[i][j-1])) arcs[i + (++cnt)].push_back(arcs[i][j]);
//             else cnt = 0, sum += oint(arcs[i][j]);
//         }
//         ans[i] = sum / 2;
//     }
//     return ans;
// }

db get_s (db a, db b, db c) {
    db p = (a + b + c) * 0.5;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double gcd(double a,double b) {
    return a < EPS ? b : gcd(fmod(b, a), a);
}

P a, b, c;

void solve() {
    a.read(); b.read(); c.read();
    db la = a.distTo(b);
    db lb = b.distTo(c);
    db lc = c.distTo(a);
    db sum = get_s(la, lb, lc);
    db r = (la * lb * lc) / (4.0 * sum);
    db k;
    if  (la > lc) {
        k = la; la = lc; lc= k;
    }
    if (lb > lc) {
        k = lb; lb = lc; lc = k;
    }
    db A = acos(1 - la * la / (r * r * 2));
    db B = acos(1 - lb * lb / (r * r * 2));
    db C = 2 * PI - A - B;

    //db t = 0.1;
    db t = gcd(A, B);
    t = gcd(t, C);
    cout << PI * r * r * sin(t) / t << "\n";
}

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(6);

    int T = 1;
    // cin >> T;

    while (T--) {
        solve ();
    }

    return 0;
}

/****/
/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author Ankur Dua
 */

#include <iostream>
#include <fstream>

#include <bits/stdc++.h>


using namespace std;


using ll = long long;
ll mod=1000000007;
ll *fact, *ifact;

using cd = complex<long double>;
const long double PI = acos(-1);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();

    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        for (; j & bit; bit >>= 1)
            j ^= bit;
        j ^= bit;

        if (i < j)
            swap(a[i], a[j]);
    }

    for (int len = 2; len <= n; len <<= 1) {
        long double ang = 2 * PI / len * (invert ? -1 : 1);
        cd wlen(cos(ang), sin(ang));
        for (int i = 0; i < n; i += len) {
            cd w(1);
            for (int j = 0; j < len / 2; j++) {
                cd u = a[i+j], v = a[i+j+len/2] * w;
                a[i+j] = u + v;
                a[i+j+len/2] = u - v;
                w *= wlen;
            }
        }
    }

    if (invert) {
        for (cd & x : a)
            x /= n;
    }
}
vector<ll> multiply(vector<ll> const& a, vector<ll> const& b) {
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size())
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<ll> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(fa[i].real());
    return result;
}
struct FlowEdge {
    int v, u;
    long long cap, flow = 0;

    FlowEdge(int v, int u, long long cap) : v(v), u(u), cap(cap) {}
};

struct Dinic {
    const long long flow_inf = 1e18;
    vector<FlowEdge> edges;
    vector<vector<int>> adj;
    int n, m = 0;
    int s, t;
    vector<int> level, ptr;
    queue<int> q;

    Dinic(int n, int s, int t) : n(n), s(s), t(t) {
        adj.resize(n);
        level.resize(n);
        ptr.resize(n);
    }

    void add_edge(int v, int u, long long cap) {
        edges.emplace_back(v, u, cap);
        edges.emplace_back(u, v, 0);
        adj[v].push_back(m);
        adj[u].push_back(m + 1);
        m += 2;
    }

    bool bfs() {
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int id : adj[v]) {
                if (edges[id].cap - edges[id].flow < 1)
                    continue;
                if (level[edges[id].u] != -1)
                    continue;
                level[edges[id].u] = level[v] + 1;
                q.push(edges[id].u);
            }
        }
        return level[t] != -1;
    }

    long long dfs(int v, long long pushed) {
        if (pushed == 0)
            return 0;
        if (v == t)
            return pushed;
        for (int &cid = ptr[v]; cid < (int) adj[v].size(); cid++) {
            int id = adj[v][cid];
            int u = edges[id].u;
            if (level[v] + 1 != level[u] || edges[id].cap - edges[id].flow < 1)
                continue;
            long long tr = dfs(u, min(pushed, edges[id].cap - edges[id].flow));
            if (tr == 0)
                continue;
            edges[id].flow += tr;
            edges[id ^ 1].flow -= tr;
            return tr;
        }
        return 0;
    }

    long long flow() {
        long long f = 0;
        while (true) {
            fill(level.begin(), level.end(), -1);
            level[s] = 0;
            q.push(s);
            if (!bfs())
                break;
            fill(ptr.begin(), ptr.end(), 0);
            while (long long pushed = dfs(s, flow_inf)) {
                f += pushed;
            }
        }
        return f;
    }
};

//Min cost max flow using dijkstra from https://codeforces.com/contest/1107/submission/49033783
template<typename flow_t, typename cost_t>
struct MinCostMaxFlow {
    static const flow_t FLOW_INF = numeric_limits<flow_t>::max() / 2;
    const cost_t COST_INF = numeric_limits<cost_t>::max() / 2;
    struct edge {
        int node, rev;
        flow_t capacity;
        cost_t cost;

        edge(int _node = -1, int _rev = -1, flow_t _capacity = 0, cost_t _cost = 0)
                : node(_node), rev(_rev), capacity(_capacity), cost(_cost) {}
    };

    int V = -1;
    vector<vector<edge>> adj;
    vector<cost_t> dist;
    vector<int> prev;
    vector<edge*> prev_edge;

    MinCostMaxFlow(int vertices = -1) {
        if (vertices >= 0)
            init(vertices);
    }

    void init(int vertices) {
        V = vertices;
        adj.assign(V, {});
        dist.resize(V);
        prev.resize(V);
        prev_edge.resize(V);
    }

    void addEdge(int u, int v, flow_t capacity, cost_t cost) {
        edge uv_edge(v, adj[v].size() + (u == v ? 1 : 0), capacity, cost);
        edge vu_edge(u, adj[u].size(), 0, -cost);
        adj[u].push_back(uv_edge);
        adj[v].push_back(vu_edge);
    }

    edge &reverse_edge(const edge &e) {
        return adj[e.node][e.rev];
    }

    bool bellman_ford(int source, int sink) {
        for (int i = 0; i < V; i++) {
            dist[i] = COST_INF;
            prev[i] = -1;
            prev_edge[i] = nullptr;
        }

        vector<int> last_seen(V, -1);
        vector<int> nodes(1, source);
        dist[source] = 0;

        for (int iteration = 0; iteration < V; iteration++) {
            vector<int> next_nodes;

            for (int node : nodes)
                for (edge &e : adj[node])
                    if (e.capacity > 0 && dist[node] + e.cost < dist[e.node]) {
                        dist[e.node] = dist[node] + e.cost;
                        prev[e.node] = node;
                        prev_edge[e.node] = &e;

                        if (last_seen[e.node] != iteration) {
                            last_seen[e.node] = iteration;
                            next_nodes.push_back(e.node);
                        }
                    }

            swap(nodes, next_nodes);
        }

        return prev[sink] != -1;
    }

    struct dijkstra_state {
        cost_t dist;
        int node;

        bool operator<(const dijkstra_state &other) const {
            return dist > other.dist;
        }
    };

    void dijkstra_check(int node, cost_t potential_dist, int previous, edge *previous_edge, auto &pq) {
        if (potential_dist < dist[node]) {
            dist[node] = potential_dist;
            prev[node] = previous;
            prev_edge[node] = previous_edge;
            pq.push({dist[node], node});
        }
    }

    bool dijkstra(int source, int sink) {
        dist.assign(V, COST_INF);
        prev.assign(V, -1);
        prev_edge.assign(V, nullptr);

        priority_queue<dijkstra_state> pq;
        dijkstra_check(source, 0, -1, nullptr, pq);

        while (!pq.empty()) {
            dijkstra_state top = pq.top();
            pq.pop();

            if (top.dist > dist[top.node])
                continue;

            for (edge &e : adj[top.node])
                if (e.capacity > 0)
                    dijkstra_check(e.node, top.dist + e.cost, top.node, &e, pq);
        }

        return prev[sink] != -1;
    }

    void reduce_cost() {
        for (int i = 0; i < V; i++)
            for (edge &e : adj[i])
                e.cost += dist[i] - dist[e.node];
    }

    pair<flow_t, cost_t> minCostFlow(int source, int sink, flow_t flow_goal = FLOW_INF) {
        assert(V >= 0);

        if (!bellman_ford(source, sink))
            return make_pair(0, 0);

        flow_t total_flow = 0;
        cost_t total_cost = 0;
        cost_t reduce_sum = 0;

        do {
            reduce_cost();
            reduce_sum += dist[sink];
            flow_t path_cap = flow_goal - total_flow;

            for (int node = sink; prev[node] != -1; node = prev[node])
                path_cap = min(path_cap, prev_edge[node]->capacity);

            for (int node = sink; prev[node] != -1; node = prev[node]) {
                edge *e = prev_edge[node];
                assert(e->cost == 0);
                e->capacity -= path_cap;
                reverse_edge(*e).capacity += path_cap;
            }

            total_flow += path_cap;
            total_cost += reduce_sum * path_cap;
        } while (total_flow < flow_goal && dijkstra(source, sink));

        return make_pair(total_flow, total_cost);
    }
};

ll modExp(ll base, ll exp, ll mod=::mod){
    ll ans=1;
    while(exp) {
        if (exp & 1) {
            (ans *= base) %= mod;
        }
        (base *= base) %= mod;
        exp>>=1;
    }
    return ans;
}
ll modInv(ll x, ll mod=::mod){
    return modExp(x,mod-2,mod);
}
void modFact(ll n, ll mod=::mod){
    ifact=new ll[n+1];
    fact=new ll[n+1];
    fact[0]=fact[1]=1;
    for(int i=2;i<=n;i++){
        fact[i]=(i*fact[i-1])%mod;
    }
    ifact[n]=modInv(fact[n], mod);
    for(int i=n-1;i>=0;i--){
        ifact[i]=((i+1)*ifact[i+1])%mod;
    }
}
ll ncr(ll n, ll r, ll mod=::mod){
    if(n<r || r<0)
        return 0;
    ll ans=fact[n];
    ans*=ifact[r];
    ans%=mod;
    ans*=ifact[n-r];
    ans%=mod;
    return ans;
}
ll npr(ll n, ll r, ll mod=::mod){
    if(n<r || r<0)
        return 0;
    ll ans=fact[n];
    ans*=ifact[n-r];
    return ans%mod;
}
class DSU{
public:
    int*p, *r;
    DSU(int n){
        p=new int[n+50];
        r=new int[n+50];
        for(int i=0;i<=n+10;i++){
            p[i]=i;
            r[i]=0;
        }
    }
    ~DSU(){
        delete[] p;
        delete[] r;
    }
    int find(int x){
        if(p[x]==x)
            return x;
        return p[x]=find(p[x]);
    }
    bool Unite(int a, int b){
        a=find(a);
        b=find(b);
        if(a==b)
            return false;
        if(r[a]<r[b])
            p[a]=b;
        else
            p[b]=a;
        if(r[a]==r[b])
            r[a]++;
        return true;
    }
};
#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>
using namespace std;
double INF = 1e100;
double EPS = 1e-12;
struct PT {
    double x, y;
    PT() {}
    PT(double x, double y) : x(x), y(y) {}
    PT(const PT &p) : x(p.x), y(p.y) {}
    PT operator + (const PT &p) const { return PT(x+p.x, y+p.y); }
    PT operator - (const PT &p) const { return PT(x-p.x, y-p.y); }
    PT operator * (double c) const { return PT(x*c, y*c ); }
    PT operator / (double c) const { return PT(x/c, y/c ); }
};
double dot(PT p, PT q) { return p.x*q.x+p.y*q.y; }
double dist2(PT p, PT q) { return dot(p-q,p-q); }
double cross(PT p, PT q) { return p.x*q.y-p.y*q.x; }
ostream &operator<<(ostream &os, const PT &p) {
    os << "(" << p.x << "," << p.y << ")";
}
// rotate a point CCW or CW around the origin
PT RotateCCW90(PT p) { return PT(-p.y,p.x); }
PT RotateCW90(PT p) { return PT(p.y,-p.x); }
PT RotateCCW(PT p, double t) {
    return PT(p.x*cos(t)-p.y*sin(t), p.x*sin(t)+p.y*cos(t));
}
// project point c onto line through a and b
// assuming a != b
PT ProjectPointLine(PT a, PT b, PT c) {
    return a + (b-a)*dot(c-a, b-a)/dot(b-a, b-a);
}
// project point c onto line segment through a and b
PT ProjectPointSegment(PT a, PT b, PT c) {
    double r = dot(b-a,b-a);
    if (fabs(r) < EPS) return a;
    r = dot(c-a, b-a)/r;
    if (r < 0) return a;
    if (r > 1) return b;
    return a + (b-a)*r;
}
// compute distance from c to segment between a and b
double DistancePointSegment(PT a, PT b, PT c) {
    return sqrt(dist2(c, ProjectPointSegment(a, b, c)));
}
// compute distance between point (x,y,z) and plane ax+by+cz=d
double DistancePointPlane(double x, double y, double z,
                          double a, double b, double c, double d)
{
    return fabs(a*x+b*y+c*z-d)/sqrt(a*a+b*b+c*c);
}
// determine if lines from a to b and c to d are parallel or collinear
bool LinesParallel(PT a, PT b, PT c, PT d) {
    return fabs(cross(b-a, c-d)) < EPS;
}
bool LinesCollinear(PT a, PT b, PT c, PT d) {
    return LinesParallel(a, b, c, d)
           && fabs(cross(a-b, a-c)) < EPS
           && fabs(cross(c-d, c-a)) < EPS;
}
// determine if line segment from a to b intersects with
// line segment from c to d
bool SegmentsIntersect(PT a, PT b, PT c, PT d) {
    if (LinesCollinear(a, b, c, d)) {
        if (dist2(a, c) < EPS || dist2(a, d) < EPS ||
            dist2(b, c) < EPS || dist2(b, d) < EPS) return true;
        if (dot(c-a, c-b) > 0 && dot(d-a, d-b) > 0 && dot(c-b, d-b) > 0)
            return false;
        return true;
    }
    if (cross(d-a, b-a) * cross(c-a, b-a) > 0) return false;
    if (cross(a-c, d-c) * cross(b-c, d-c) > 0) return false;
    return true;
}
// compute intersection of line passing through a and b
// with line passing through c and d, assuming that unique
// intersection exists; for segment intersection, check if
// segments intersect first
PT ComputeLineIntersection(PT a, PT b, PT c, PT d) {
    b=b-a; d=c-d; c=c-a;
    assert(dot(b, b) > EPS && dot(d, d) > EPS);
    return a + b*cross(c, d)/cross(b, d);
}
// compute center of circle given three points
PT ComputeCircleCenter(PT a, PT b, PT c) {
    b=(a+b)/2;
    c=(a+c)/2;
    return ComputeLineIntersection(b, b+RotateCW90(a-b), c, c+RotateCW90(a-c));
}
// determine if point is in a possibly non-convex polygon (by William
// Randolph Franklin); returns 1 for strictly interior points, 0 for
// strictly exterior points, and 0 or 1 for the remaining points.
// Note that it is possible to convert this into an *exact* test using
// integer arithmetic by taking care of the division appropriately
// (making sure to deal with signs properly) and then by writing exact
// tests for checking point on polygon boundary
bool PointInPolygon(const vector<PT> &p, PT q) {
    bool c = 0;
    for (int i = 0; i < p.size(); i++){
        int j = (i+1)%p.size();
        if ((p[i].y <= q.y && q.y < p[j].y ||
             p[j].y <= q.y && q.y < p[i].y) &&
            q.x < p[i].x + (p[j].x - p[i].x) * (q.y - p[i].y) / (p[j].y - p[i].y))
            c = !c;
    }
    return c;
}
// determine if point is on the boundary of a polygon
bool PointOnPolygon(const vector<PT> &p, PT q) {
    for (int i = 0; i < p.size(); i++)
        if (dist2(ProjectPointSegment(p[i], p[(i+1)%p.size()], q), q) < EPS)
            return true;
    return false;
}
// compute intersection of line through points a and b with
// circle centered at c with radius r > 0
vector<PT> CircleLineIntersection(PT a, PT b, PT c, double r) {
    vector<PT> ret;
    b = b-a;
    a = a-c;
    double A = dot(b, b);
    double B = dot(a, b);
    double C = dot(a, a) - r*r;
    double D = B*B - A*C;
    if (D < -EPS) return ret;
    ret.push_back(c+a+b*(-B+sqrt(D+EPS))/A);
    if (D > EPS)
        ret.push_back(c+a+b*(-B-sqrt(D))/A);
    return ret;
}
// compute intersection of circle centered at a with radius r
// with circle centered at b with radius R
vector<PT> CircleCircleIntersection(PT a, PT b, double r, double R) {
    vector<PT> ret;
    double d = sqrt(dist2(a, b));
    if (d > r+R || d+min(r, R) < max(r, R)) return ret;
    double x = (d*d-R*R+r*r)/(2*d);
    double y = sqrt(r*r-x*x);
    PT v = (b-a)/d;
    ret.push_back(a+v*x + RotateCCW90(v)*y);
    if (y > 0)
        ret.push_back(a+v*x - RotateCCW90(v)*y);
    return ret;
}
// This code computes the area or centroid of a (possibly nonconvex)
// polygon, assuming that the coordinates are listed in a clockwise or
// counterclockwise fashion. Note that the centroid is often known as
// the "center of gravity" or "center of mass".
double ComputeSignedArea(const vector<PT> &p) {
    double area = 0;
    for(int i = 0; i < p.size(); i++) {
        int j = (i+1) % p.size();
        area += p[i].x*p[j].y - p[j].x*p[i].y;
    }
    return area / 2.0;
}
double ComputeArea(const vector<PT> &p) {
    return fabs(ComputeSignedArea(p));
}
PT ComputeCentroid(const vector<PT> &p) {
    PT c(0,0);
    double scale = 6.0 * ComputeSignedArea(p);
    for (int i = 0; i < p.size(); i++){
        int j = (i+1) % p.size();
        c = c + (p[i]+p[j])*(p[i].x*p[j].y - p[j].x*p[i].y);
    }
    return c / scale;
}
// tests whether or not a given polygon (in CW or CCW order) is simple
bool IsSimple(const vector<PT> &p) {
    for (int i = 0; i < p.size(); i++) {
        for (int k = i+1; k < p.size(); k++) {
            int j = (i+1) % p.size();
            int l = (k+1) % p.size();
            if (i == l || j == k) continue;
            if (SegmentsIntersect(p[i], p[j], p[k], p[l]))
                return false;
        }
    }
    return true;
}

/*
int main() {
// expected: (-5,2)
    cerr << RotateCCW90(PT(2,5)) << endl;
// expected: (5,-2)
    cerr << RotateCW90(PT(2,5)) << endl;
// expected: (-5,2)
    cerr << RotateCCW(PT(2,5),M_PI/2) << endl;
// expected: (5,2)
    cerr << ProjectPointLine(PT(-5,-2), PT(10,4), PT(3,7)) << endl;
// expected: (5,2) (7.5,3) (2.5,1)
    cerr << ProjectPointSegment(PT(-5,-2), PT(10,4), PT(3,7)) << " "
         << ProjectPointSegment(PT(7.5,3), PT(10,4), PT(3,7)) << " "
         << ProjectPointSegment(PT(-5,-2), PT(2.5,1), PT(3,7)) << endl;
// expected: 6.78903
    cerr << DistancePointPlane(4,-4,3,2,-2,5,-8) << endl;
// expected: 1 0 1
    cerr << LinesParallel(PT(1,1), PT(3,5), PT(2,1), PT(4,5)) << " "
         << LinesParallel(PT(1,1), PT(3,5), PT(2,0), PT(4,5)) << " "
         << LinesParallel(PT(1,1), PT(3,5), PT(5,9), PT(7,13)) << endl;
// expected: 0 0 1
    cerr << LinesCollinear(PT(1,1), PT(3,5), PT(2,1), PT(4,5)) << " "
         << LinesCollinear(PT(1,1), PT(3,5), PT(2,0), PT(4,5)) << " "
         << LinesCollinear(PT(1,1), PT(3,5), PT(5,9), PT(7,13)) << endl;
// expected: 1 1 1 0
    cerr << SegmentsIntersect(PT(0,0), PT(2,4), PT(3,1), PT(-1,3)) << " "
         << SegmentsIntersect(PT(0,0), PT(2,4), PT(4,3), PT(0,5)) << " "
         << SegmentsIntersect(PT(0,0), PT(2,4), PT(2,-1), PT(-2,1)) << " "
         << SegmentsIntersect(PT(0,0), PT(2,4), PT(5,5), PT(1,7)) << endl;
// expected: (1,2)
    cerr << ComputeLineIntersection(PT(0,0), PT(2,4), PT(3,1), PT(-1,3)) << endl;
// expected: (1,1)
    cerr << ComputeCircleCenter(PT(-3,4), PT(6,1), PT(4,5)) << endl;
    vector<PT> v;
    v.push_back(PT(0,0));
    v.push_back(PT(5,0));
    v.push_back(PT(5,5));
    v.push_back(PT(0,5));
// expected: 1 1 1 0 0
    cerr << PointInPolygon(v, PT(2,2)) << " "
         << PointInPolygon(v, PT(2,0)) << " "<< PointInPolygon(v, PT(0,2)) << " "
                                       << PointInPolygon(v, PT(5,2)) << " "
                                       << PointInPolygon(v, PT(2,5)) << endl;
// expected: 0 1 1 1 1
    cerr << PointOnPolygon(v, PT(2,2)) << " "
         << PointOnPolygon(v, PT(2,0)) << " "
         << PointOnPolygon(v, PT(0,2)) << " "
         << PointOnPolygon(v, PT(5,2)) << " "
         << PointOnPolygon(v, PT(2,5)) << endl;
// expected: (1,6)
// (5,4) (4,5)
// blank line
// (4,5) (5,4)
// blank line
// (4,5) (5,4)
    vector<PT> u = CircleLineIntersection(PT(0,6), PT(2,6), PT(1,1), 5);
    for (int i = 0; i < u.size(); i++) cerr << u[i] << " "; cerr << endl;
    u = CircleLineIntersection(PT(0,9), PT(9,0), PT(1,1), 5);
    for (int i = 0; i < u.size(); i++) cerr << u[i] << " "; cerr << endl;
    u = CircleCircleIntersection(PT(1,1), PT(10,10), 5, 5);
    for (int i = 0; i < u.size(); i++) cerr << u[i] << " "; cerr << endl;
    u = CircleCircleIntersection(PT(1,1), PT(8,8), 5, 5);
    for (int i = 0; i < u.size(); i++) cerr << u[i] << " "; cerr << endl;
    u = CircleCircleIntersection(PT(1,1), PT(4.5,4.5), 10, sqrt(2.0)/2.0);
    for (int i = 0; i < u.size(); i++) cerr << u[i] << " "; cerr << endl;
    u = CircleCircleIntersection(PT(1,1), PT(4.5,4.5), 5, sqrt(2.0)/2.0);
    for (int i = 0; i < u.size(); i++) cerr << u[i] << " "; cerr << endl;
// area should be 5.0
// centroid should be (1.1666666, 1.166666)
    PT pa[] = { PT(0,0), PT(5,0), PT(1,1), PT(0,5) };
    vector<PT> p(pa, pa+4);
    PT c = ComputeCentroid(p);
    cerr << "Area: " << ComputeArea(p) << endl;
    cerr << "Centroid: " << c << endl;
    return 0;
}
 */

using namespace std;

class CAncientBerlandCircus {
public:

	void solve(std::istream& cin, std::ostream& cout) {
        vector<PT> v(3);
        for(int i=0;i<3;i++){
            double x,y;
            cin>>x>>y;
            v[i]={x,y};
        }
        PT c=ComputeCircleCenter(v[0],v[1],v[2]);
        vector<double> w;
        w.push_back(acos(dot(v[0]-c, v[1]-c)/dist2(v[0],c)));
        w.push_back(acos(dot(v[2]-c, v[1]-c)/dist2(v[0],c)));
        w.push_back(acos(dot(v[0]-c, v[2]-c)/dist2(v[0],c)));
        sort(w.begin(), w.end());
        for(int i=3;i<=100;i++){
           double theta=2*PI/i;
           double error=sin(PI*w[0]/theta)*sin(PI*w[0]/theta)+sin(PI*w[1]/theta)*sin(PI*w[1]/theta);
           if(error<1e-6){
               cout<<fixed<<setprecision(8)<<(acos(-1)*dist2(c,v[0])*sin(theta))/theta<<endl;
               return;
           }
        }

	}
};


int main() {
	CAncientBerlandCircus solver;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}

/****/
#include <bits/stdc++.h>
using namespace std;

using _T=double;  // 全局数据类型，可修改为 long long 等
constexpr _T eps=1e-2;
constexpr long double PI=3.1415926535897932384l;

// 点与向量
template<typename T> struct point
{
    T x,y;

    bool operator==(const point &a) const {return (abs(x-a.x)<=eps && abs(y-a.y)<=eps);}
    bool operator<(const point &a) const {if (abs(x-a.x)<=eps) return y<a.y-eps; return x<a.x-eps;}
    bool operator>(const point &a) const {return !(*this<a || *this==a);}
    point operator+(const point &a) const {return {x+a.x,y+a.y};}
    point operator-(const point &a) const {return {x-a.x,y-a.y};}
    point operator-() const {return {-x,-y};}
    point operator*(const T k) const {return {k*x,k*y};}
    point operator/(const T k) const {return {x/k,y/k};}
    T operator*(const point &a) const {return x*a.x+y*a.y;}  // 点积
    T operator^(const point &a) const {return x*a.y-y*a.x;}  // 叉积，注意优先级
    int toleft(const point &a) const {const auto t=(*this)^a; return (t>eps)-(t<-eps);}  // to-left 测试
    T len2() const {return (*this)*(*this);}  // 向量长度的平方
    T dis2(const point &a) const {return (a-(*this)).len2();}  // 两点距离的平方

    // 涉及浮点数
    long double len() const {return sqrtl(len2());}  // 向量长度
    long double dis(const point &a) const {return sqrtl(dis2(a));}  // 两点距离
    long double ang(const point &a) const {return acosl(max(-1.0,min(1.0,((*this)*a)/(len()*a.len()))));}  // 向量夹角
    point rot(const long double rad) const {return {x*cos(rad)-y*sin(rad),x*sin(rad)+y*cos(rad)};}  // 逆时针旋转（给定角度）
    point rot(const long double cosr,const long double sinr) const {return {x*cosr-y*sinr,x*sinr+y*cosr};}  // 逆时针旋转（给定角度的正弦与余弦）
};

using Point=point<_T>;

// 极角排序
struct argcmp
{
    bool operator()(const Point &a,const Point &b) const
    {
        const auto quad=[](const Point &a)
        {
            if (a.y<-eps) return 1;
            if (a.y>eps) return 4;
            if (a.x<-eps) return 5;
            if (a.x>eps) return 3;
            return 2;
        };
        const int qa=quad(a),qb=quad(b);
        if (qa!=qb) return qa<qb;
        const auto t=a^b;
        // if (abs(t)<=eps) return a*a<b*b-eps;  // 不同长度的向量需要分开
        return t>eps;
    }
};

// 直线
template<typename T> struct line
{
    point<T> p,v;  // p 为直线上一点，v 为方向向量

    bool operator==(const line &a) const {return v.toleft(a.v)==0 && v.toleft(p-a.p)==0;}
    int toleft(const point<T> &a) const {return v.toleft(a-p);}  // to-left 测试
    bool operator<(const line &a) const  // 半平面交算法定义的排序
    {
        if (abs(v^a.v)<=eps && v*a.v>=-eps) return toleft(a.p)==-1;
        return argcmp()(v,a.v);
    }

    // 涉及浮点数
    point<T> inter(const line &a) const {return p+v*((a.v^(p-a.p))/(v^a.v));}  // 直线交点
    long double dis(const point<T> &a) const {return abs(v^(a-p))/v.len();}  // 点到直线距离
    point<T> proj(const point<T> &a) const {return p+v*((v*(a-p))/(v*v));}  // 点在直线上的投影
};

using Line=line<_T>;

// 线段
template<typename T> struct segment
{
    point<T> a,b;

    // 判定性函数建议在整数域使用

    // 判断点是否在线段上
    // -1 点在线段端点 | 0 点不在线段上 | 1 点严格在线段上
    int is_on(const point<T> &p) const
    {
        if (p==a || p==b) return -1;
        return (p-a).toleft(p-b)==0 && (p-a)*(p-b)<-eps;
    }

    // 判断线段直线是否相交
    // -1 直线经过线段端点 | 0 线段和直线不相交 | 1 线段和直线严格相交
    int is_inter(const line<T> &l) const
    {
        if (l.toleft(a)==0 || l.toleft(b)==0) return -1;
        return l.toleft(a)!=l.toleft(b);
    }

    // 判断两线段是否相交
    // -1 在某一线段端点处相交 | 0 两线段不相交 | 1 两线段严格相交
    int is_inter(const segment<T> &s) const
    {
        if (is_on(s.a) || is_on(s.b) || s.is_on(a) || s.is_on(b)) return -1;
        const line<T> l{a,b-a},ls{s.a,s.b-s.a};
        return l.toleft(s.a)*l.toleft(s.b)==-1 && ls.toleft(a)*ls.toleft(b)==-1;
    }

    // 点到线段距离
    long double dis(const point<T> &p) const
    {
        if ((p-a)*(b-a)<-eps || (p-b)*(a-b)<-eps) return min(p.dis(a),p.dis(b));
        const line<T> l{a,b-a};
        return l.dis(p);
    }

    // 两线段间距离
    long double dis(const segment<T> &s) const
    {
        if (is_inter(s)) return 0;
        return min({dis(s.a),dis(s.b),s.dis(a),s.dis(b)});
    }
};

using Segment=segment<_T>;

// 多边形
template<typename T> struct polygon
{
    vector<point<T>> p;  // 以逆时针顺序存储

    size_t nxt(const size_t i) const {return i==p.size()-1?0:i+1;}
    size_t pre(const size_t i) const {return i==0?p.size()-1:i-1;}

    // 回转数
    // 返回值第一项表示点是否在多边形边上
    // 对于狭义多边形，回转数为 0 表示点在多边形外，否则点在多边形内
    pair<bool,int> winding(const point<T> &a) const
    {
        int cnt=0;
        for (size_t i=0;i<p.size();i++)
        {
            const point<T> u=p[i],v=p[nxt(i)];
            if (abs((a-u)^(a-v))<=eps && (a-u)*(a-v)<=eps) return {true,0};
            if (abs(u.y-v.y)<=eps) continue;
            const Line uv={u,v-u};
            if (u.y<v.y-eps && uv.toleft(a)<=0) continue;
            if (u.y>v.y+eps && uv.toleft(a)>=0) continue;
            if (u.y<a.y-eps && v.y>=a.y-eps) cnt++;
            if (u.y>=a.y-eps && v.y<a.y-eps) cnt--;
        }
        return {false,cnt};
    }

    // 多边形面积的两倍
    // 可用于判断点的存储顺序是顺时针或逆时针
    T area() const
    {
        T sum=0;
        for (size_t i=0;i<p.size();i++) sum+=p[i]^p[nxt(i)];
        return sum;
    }

    // 多边形的周长
    long double circ() const
    {
        long double sum=0;
        for (size_t i=0;i<p.size();i++) sum+=p[i].dis(p[nxt(i)]);
        return sum;
    }


};

using Polygon=polygon<_T>;

//凸多边形
template<typename T> struct convex: polygon<T>
{
    // 闵可夫斯基和
    convex operator+(const convex &c) const
    {
        const auto &p=this->p;
        vector<Segment> e1(p.size()),e2(c.p.size()),edge(p.size()+c.p.size());
        vector<point<T>> res; res.reserve(p.size()+c.p.size());
        const auto cmp=[](const Segment &u,const Segment &v) {return argcmp()(u.b-u.a,v.b-v.a);};
        for (size_t i=0;i<p.size();i++) e1[i]={p[i],p[this->nxt(i)]};
        for (size_t i=0;i<c.p.size();i++) e2[i]={c.p[i],c.p[c.nxt(i)]};
        rotate(e1.begin(),min_element(e1.begin(),e1.end(),cmp),e1.end());
        rotate(e2.begin(),min_element(e2.begin(),e2.end(),cmp),e2.end());
        merge(e1.begin(),e1.end(),e2.begin(),e2.end(),edge.begin(),cmp);
        const auto check=[](const vector<point<T>> &res,const point<T> &u)
        {
            const auto back1=res.back(),back2=*prev(res.end(),2);
            return (back1-back2).toleft(u-back1)==0 && (back1-back2)*(u-back1)>=-eps;
        };
        auto u=e1[0].a+e2[0].a;
        for (const auto &v:edge)
        {
            while (res.size()>1 && check(res,u)) res.pop_back();
            res.push_back(u);
            u=u+v.b-v.a;
        }
        if (res.size()>1 && check(res,res[0])) res.pop_back();
        return {res};
    }

    // 旋转卡壳
    // func 为更新答案的函数，可以根据题目调整位置
    template<typename F> void rotcaliper(const F &func) const
    {
        const auto &p=this->p;
        const auto area=[](const point<T> &u,const point<T> &v,const point<T> &w){return (w-u)^(w-v);};
        for (size_t i=0,j=1;i<p.size();i++)
        {
            const auto nxti=this->nxt(i);
            func(p[i],p[nxti],p[j]);
            while (area(p[this->nxt(j)],p[i],p[nxti])>=area(p[j],p[i],p[nxti]))
            {
                j=this->nxt(j);
                func(p[i],p[nxti],p[j]);
            }
        }
    }
    ///最小矩阵覆盖
    double min_rectangle()
    {
        const vector<Point> &p=this->p;
        auto area = [&](point<T> a, point<T> b, point<T> c)
        {
            return (b - a) ^ (c - a);
        };

        auto project = [&](point<T> a, point<T> b, point<T> c)
        {
            return (b - a) * (c - a) / (b - a).len();
        };

        double ans = 1e18;
        for (size_t i = 0,j, a = 1, b = 1, c = 1; i < p.size(); i ++ )
        {
            j=this->nxt(i);
            while (area(p[i], p[j], p[this->nxt(a)]) >= area(p[i], p[j], p[a])) a = this->nxt(a);
            while (project(p[i], p[j], p[this->nxt(b)]) >= project(p[i], p[j], p[b])) b = this->nxt(b);
            c = max(c, a);
            while (project(p[i], p[j], p[this->nxt(c)]) <= project(p[i], p[j], p[c])) c = this->nxt(c);
            double h = area(p[i], p[j], p[a]) / p[i].dis(p[j]);
            double w = (p[j] - p[i]) * (p[b] - p[c]) / (p[j] - p[i]).len();
            ans = min(ans, w * h);
            // cout << a << ' ' << b << ' ' << c << '\n';
            // cout << h << ' ' << w << ' ' << h * w << '\n';
        }
        return ans;
    }

    // 凸多边形的直径的平方
    T diameter2() const
    {
        const auto &p=this->p;
        if (p.size()==1) return 0;
        if (p.size()==2) return p[0].dis2(p[1]);
        T ans=0;
        auto func=[&](const point<T> &u,const point<T> &v,const point<T> &w){ans=max({ans,w.dis2(u),w.dis2(v)});};
        rotcaliper(func);
        return ans;
    }

    // 判断点是否在凸多边形内
    // 复杂度 O(logn)
    // -1 点在多边形边上 | 0 点在多边形外 | 1 点在多边形内
    int is_in(const point<T> &a) const
    {
        const auto &p=this->p;
        if (p.size()==1) return a==p[0]?-1:0;
        if (p.size()==2) return segment<T>{p[0],p[1]}.is_on(a)?-1:0;
        if (a==p[0]) return -1;
        if ((p[1]-p[0]).toleft(a-p[0])==-1 || (p.back()-p[0]).toleft(a-p[0])==1) return 0;
        const auto cmp=[&](const Point &u,const Point &v){return (u-p[0]).toleft(v-p[0])==1;};
        const size_t i=lower_bound(p.begin()+1,p.end(),a,cmp)-p.begin();
        if (i==1) return segment<T>{p[0],p[i]}.is_on(a)?-1:0;
        if (i==p.size()-1 && segment<T>{p[0],p[i]}.is_on(a)) return -1;
        if (segment<T>{p[i-1],p[i]}.is_on(a)) return -1;
        return (p[i]-p[i-1]).toleft(a-p[i-1])>0;
    }

    // 凸多边形关于某一方向的极点
    // 复杂度 O(logn)
    // 参考资料：https://codeforces.com/blog/entry/48868
    template<typename F> size_t extreme(const F &dir) const
    {
        const auto &p=this->p;
        const auto check=[&](const size_t i){return dir(p[i]).toleft(p[this->nxt(i)]-p[i])>=0;};
        const auto dir0=dir(p[0]); const auto check0=check(0);
        if (!check0 && check(p.size()-1)) return 0;
        const auto cmp=[&](const Point &v)
        {
            const size_t vi=&v-p.data();
            const auto checkv=check(vi);
            const auto t=dir0.toleft(v-p[0]);
            return checkv^(checkv==check0 && ((!check0 && t<=0) || (check0 && t<0)));
        };
        return partition_point(p.begin(),p.end(),cmp)-p.begin();
    }

    // 过凸多边形外一点求凸多边形的切线，返回切点下标
    // 复杂度 O(logn)
    // 必须保证点在多边形外
    pair<size_t,size_t> tangent(const point<T> &a) const
    {
        const size_t i=extreme([&](const point<T> &u){return u-a;});
        const size_t j=extreme([&](const point<T> &u){return a-u;});
        return {i,j};
    }

    // 求平行于给定直线的凸多边形的切线，返回切点下标
    // 复杂度 O(logn)
    pair<size_t,size_t> tangent(const line<T> &a) const
    {
        const size_t i=extreme([&](...){return a.v;});
        const size_t j=extreme([&](...){return -a.v;});
        return {i,j};
    }
};

using Convex=convex<_T>;

// 点集的凸包
// Andrew 算法，复杂度 O(nlogn)
Convex convexhull(vector<Point> p)
{
    vector<Point> st;
    sort(p.begin(),p.end());
    const auto check=[](const vector<Point> &st,const Point &u)
    {
        const auto back1=st.back(),back2=*prev(st.end(),2);
        return (back1-back2).toleft(u-back2)<=0;
    };
    for (const Point &u:p)
    {
        while (st.size()>1 && check(st,u)) st.pop_back();
        st.push_back(u);
    }
    size_t k=st.size();
    p.pop_back(); reverse(p.begin(),p.end());
    for (const Point &u:p)
    {
        while (st.size()>k && check(st,u)) st.pop_back();
        st.push_back(u);
    }
    st.pop_back();
    return {st};
}

// 半平面交
// 排序增量法，复杂度 O(nlogn)
// 输入与返回值都是用直线表示的半平面集合
vector<Line> halfinter(vector<Line> l, const _T lim=1e9)
{
    const auto check=[](const Line &a,const Line &b,const Line &c){return a.toleft(b.inter(c))<0;};
    // 无精度误差的方法，但注意取值范围会扩大到三次方
    /*const auto check=[](const Line &a,const Line &b,const Line &c)
    {
        const Point p=a.v*(b.v^c.v),q=b.p*(b.v^c.v)+b.v*(c.v^(b.p-c.p))-a.p*(b.v^c.v);
        return p.toleft(q)<0;
    };*/
    l.push_back({{-lim,0},{0,-1}}); l.push_back({{0,-lim},{1,0}});
    l.push_back({{lim,0},{0,1}}); l.push_back({{0,lim},{-1,0}});
    sort(l.begin(),l.end());
    deque<Line> q;
    for (size_t i=0;i<l.size();i++)
    {
        if (i>0 && l[i-1].v.toleft(l[i].v)==0 && l[i-1].v*l[i].v>eps) continue;
        while (q.size()>1 && check(l[i],q.back(),q[q.size()-2])) q.pop_back();
        while (q.size()>1 && check(l[i],q[0],q[1])) q.pop_front();
        if (!q.empty() && q.back().v.toleft(l[i].v)<=0) return vector<Line>();
        q.push_back(l[i]);
    }
    while (q.size()>1 && check(q[0],q.back(),q[q.size()-2])) q.pop_back();
    while (q.size()>1 && check(q.back(),q[0],q[1])) q.pop_front();
    return vector<Line>(q.begin(),q.end());
}

// 点集形成的最小最大三角形
// 极角序扫描线，复杂度 O(n^2logn)
// 最大三角形问题可以使用凸包与旋转卡壳做到 O(n^2)
pair<_T,_T> minmax_triangle(const vector<Point> &vec)
{
    if (vec.size()<=2) return {0,0};
    vector<pair<int,int>> evt;
    evt.reserve(vec.size()*vec.size());
    _T maxans=0,minans=numeric_limits<_T>::max();
    for (size_t i=0;i<vec.size();i++)
    {
        for (size_t j=0;j<vec.size();j++)
        {
            if (i==j) continue;
            if (vec[i]==vec[j]) minans=0;
            else evt.push_back({i,j});
        }
    }
    sort(evt.begin(),evt.end(),[&](const pair<int,int> &u,const pair<int,int> &v)
    {
        const Point du=vec[u.second]-vec[u.first],dv=vec[v.second]-vec[v.first];
        return argcmp()({du.y,-du.x},{dv.y,-dv.x});
    });
    vector<size_t> vx(vec.size()),pos(vec.size());
    for (size_t i=0;i<vec.size();i++) vx[i]=i;
    sort(vx.begin(),vx.end(),[&](int x,int y){return vec[x]<vec[y];});
    for (size_t i=0;i<vx.size();i++) pos[vx[i]]=i;
    for (auto [u,v]:evt)
    {
        const size_t i=pos[u],j=pos[v];
        const size_t l=min(i,j),r=max(i,j);
        const Point vecu=vec[u],vecv=vec[v];
        if (l>0) minans=min(minans,abs((vec[vx[l-1]]-vecu)^(vec[vx[l-1]]-vecv)));
        if (r<vx.size()-1) minans=min(minans,abs((vec[vx[r+1]]-vecu)^(vec[vx[r+1]]-vecv)));
        maxans=max({maxans,abs((vec[vx[0]]-vecu)^(vec[vx[0]]-vecv)),abs((vec[vx.back()]-vecu)^(vec[vx.back()]-vecv))});
        if (i<j) swap(vx[i],vx[j]),pos[u]=j,pos[v]=i;
    }
    return {minans,maxans};
}


// 判断多条线段是否有交点
// 扫描线，复杂度 O(nlogn)
bool segs_inter(const vector<Segment> &segs)
{
    if (segs.empty()) return false;
    using seq_t=tuple<_T,int,Segment>;
    const auto seqcmp=[](const seq_t &u, const seq_t &v)
    {
        const auto [u0,u1,u2]=u;
        const auto [v0,v1,v2]=v;
        if (abs(u0-v0)<=eps) return make_tuple(u1,u2.a,u2.b)<make_tuple(v1,v2.a,v2.b);
        return u0<v0-eps;
    };
    vector<seq_t> seq;
    for (auto seg:segs)
    {
        if (seg.a.x>seg.b.x+eps) swap(seg.a,seg.b);
        seq.push_back({seg.a.x,0,seg});
        seq.push_back({seg.b.x,1,seg});
    }
    sort(seq.begin(),seq.end(),seqcmp);
    _T x_now;
    auto cmp=[&](const Segment &u, const Segment &v)
    {
        if (abs(u.a.x-u.b.x)<=eps || abs(v.a.x-v.b.x)<=eps) return u.a.y<v.a.y-eps;
        return ((x_now-u.a.x)*(u.b.y-u.a.y)+u.a.y*(u.b.x-u.a.x))*(v.b.x-v.a.x)<((x_now-v.a.x)*(v.b.y-v.a.y)+v.a.y*(v.b.x-v.a.x))*(u.b.x-u.a.x)-eps;
    };
    multiset<Segment,decltype(cmp)> s{cmp};
    for (const auto [x,o,seg]:seq)
    {
        x_now=x;
        const auto it=s.lower_bound(seg);
        if (o==0)
        {
            if (it!=s.end() && seg.is_inter(*it)) return true;
            if (it!=s.begin() && seg.is_inter(*prev(it))) return true;
            s.insert(seg);
        }
        else
        {
            if (next(it)!=s.end() && it!=s.begin() && (*prev(it)).is_inter(*next(it))) return true;
            s.erase(it);
        }
    }
    return false;
}

// 多边形面积并
// 轮廓积分，复杂度 O(边数^2)
// ans[i] 表示被至少覆盖了 i+1 次的区域的面积
vector<double> area_union(const vector<Polygon> &polys)
{
    const size_t siz=polys.size();
    vector<vector<pair<Point,Point>>> segs(siz);
    const auto check=[](const Point &u,const Segment &e){return !((u<e.a && u<e.b) || (u>e.a && u>e.b));};
    auto cut_edge=[&](const Segment &e,const size_t i)
    {
        const Line le{e.a,e.b-e.a};
        const auto cmp=[&](const Point &u,const Point &v){return e.a<e.b?u<v:u>v;};
        map<Point,int,decltype(cmp)> cnt(cmp);
        cnt[e.a]; cnt[e.b];
        for (size_t j=0;j<polys.size();j++)
        {
            if (i==j) continue;
            const auto &pj=polys[j];
            for (size_t k=0;k<pj.p.size();k++)
            {
                const Segment s={pj.p[k],pj.p[pj.nxt(k)]};
                if (le.toleft(s.a)==0 && le.toleft(s.b)==0) cnt[s.a],cnt[s.b];
                else if (s.is_inter(le))
                {
                    const Line ls{s.a,s.b-s.a};
                    const Point u=le.inter(ls);
                    if (le.toleft(s.a)<0 && le.toleft(s.b)>=0) cnt[u]--;
                    else if (le.toleft(s.a)>=0 && le.toleft(s.b)<0) cnt[u]++;
                }
            }
        }
        int sum=cnt.begin()->second;
        for (auto it=cnt.begin();next(it)!=cnt.end();it++)
        {
            const Point u=it->first,v=next(it)->first;
            if (check(u,e) && check(v,e)) segs[sum].push_back({u,v});
            sum+=next(it)->second;
        }
    };
    for (size_t i=0;i<polys.size();i++)
    {
        const auto &pi=polys[i];
        for (size_t k=0;k<pi.p.size();k++)
        {
            const Segment ei={pi.p[k],pi.p[pi.nxt(k)]};
            cut_edge(ei,i);
        }
    }
    vector<double> ans(siz);
    for (size_t i=0;i<siz;i++)
    {
        double sum=0;
        sort(segs[i].begin(),segs[i].end());
        int cnt=0;
        for (size_t j=0;j<segs[i].size();j++)
        {
            if (j>0 && segs[i][j]==segs[i][j-1]) segs[i+(++cnt)].push_back(segs[i][j]);
            else cnt=0,sum+=segs[i][j].first^segs[i][j].second;
        }
        ans[i]=sum/2;
    }
    return ans;
}
double gcd(double a,double b) {    //double类型的最大公约数
    if(fabs(b)<eps)
        return a;
    if(fabs(a)<eps)
        return b;
    return gcd(b,fmod(a,b));    //fmod(a,b), double类型的取模
}
_T len[3],a[3];
Point pt[3];
int main()
{
    for(int i=0;i<3;++i)cin >> pt[i].x >> pt[i].y;
    _T t=0.0;
    for(int i=0;i<3;++i){
        len[i]=pt[i].dis(pt[(i+1)%3]);
        //cout << len[i] << endl;
        t+=len[i];
    }
    t/=2;
    _T S=sqrt(t*(t-len[0])*(t-len[1])*(t-len[2]));
    _T R=len[0]*len[1]*len[2]/(4.0*S);
    //cout << "#" <<R << endl;
    a[0]=acos(1-len[0]*len[0]/(2*R*R));
    a[1]=acos(1-len[1]*len[1]/(2*R*R));
    a[2]=2*PI-a[0]-a[1];
    //cout << "sb" << endl;
    //for(int i=0;i<3;++i)
    //   cout << a[i]/PI*180 << endl;
    t=gcd(a[0],gcd(a[1],a[2]));
    cout << fixed << setprecision(12) << PI*R*R*sin(t)/t << endl;

    return 0;

}
/*****/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <utility>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <bitset>
#include <algorithm>
#include <functional>
using namespace std;
using ll = long long;
using uint = unsigned int;
using ull = unsigned long long;
#define var auto
#define ref auto&
#define rep(i,a,b) for(decltype(a) i=a, lim__lim=(b); i<=lim__lim; i++)
#define repr(i,a,b) for(decltype(b) i=b,lim__lim=(a); i>=lim__lim; i--)
#define fst first
#define sec second
static int sc(int& x) { return scanf("%d", &x); }
static int sc(uint& x) { return scanf("%u", &x); }
static int sc(ll& x) { return scanf("%lld", &x); }
static int sc(ull& x) { return scanf("%llu", &x); }
static int sc(double& x) { return scanf("%lf", &x); }
static int sc(long double& x) { return scanf("%Lf", &x); }
static int sc(char& x) { return scanf("%c", &x); }
static int sc(char* x) { return scanf("%s", x); }
static int sc(char* const& x) { return scanf("%s", x); }
static bool readingFail = false;
static string getstr()
{
    string s; char c;
    while(isspace(c = getchar()));
    do { s.push_back(c); } while(!isspace(c = getchar()) && c != EOF);
    return s;
}
static string getline()
{
    string s; char c;
    while(isspace(c = getchar()));
    if(c == EOF) { readingFail = true; return s; }
    do { s.push_back(c); } while(!isspace(c = getchar()) && c != EOF);
    return s;
}
template<class TA, class TB> static int sc(pair<TA, TB>& x) { int a = sc(x.fst); int b = sc(x.sec); return max(-1, a + b); }
template<class T, class... Args> static void sc(T& v, Args&... args) { sc(v); sc(args...); }
void pr(const char* x) { printf("%s", x); }
static void pr(char* x) { printf("%s", x); }
static void pr(int x) { printf("%d", x); }
static void pr(uint x) { printf("%u", x); }
static void pr(ll x) { printf("%lld", x); }
static void pr(ull x) { printf("%llu", x); }
static void pr(double x) { printf("%.10f", x); }
static void pr(long double x) { printf("%.10Lf", x); }
static void pr(char x) { putchar(x); }
static void pr(bool x) { pr((int)x); }
static void pr() { }
template<class A, class B> static void pr(pair<A, B> x) { pr('('); pr(x.fst); pr(','); pr(x.sec); pr(')'); }
template<class T, class... Args> static void pr(T const& v, Args const& ... args) { pr(v); pr(args...); }
static void prsp() { }
template<class T, class... Args> static void prsp(T const& v, Args const& ... args) { pr(v); pr(' '); prsp(args...); }
template<class... Args> static void prln(Args const& ... args) { prsp(args...); pr("\n"); }
template<> void prln() { pr("\n"); }
static int getint() { int x; sc(x); return x; }
static ll getll() { ll x; sc(x); return x; }
static double getdb() { double x; sc(x); return x; }
#define defsc(type,X,...) type X, ##__VA_ARGS__; sc(X, ##__VA_ARGS__);
template<class T> static void updmax(T& a, T const& b, function<void(void)> f = []{})
{ if(a < b) { a = b; f(); } }
template<class T> static void updmin(T& a, T const& b, function<void(void)> f = []{})
{ if(b < a) { a = b; f(); } }
template<class T> static void rm(set<T>& v, function<bool(T const&)> cond)
{ for(var x = begin(v); x != end(v);) if(cond(*x)) v.erase(x++); else ++x; }
template<class T> static void rm(set<T>& v, T const& x)
{ while(v.find(x) != end(v)) v.erase(v.find(x)); }
template<class T, class R> static void rm(map<T, R>& v, function<bool(T const&)> cond)
{ for(var x = begin(v); x != end(v);) if(cond(x->first)) v.erase(x++); else ++x; }
template<class T, class R> static void rm(map<T, R>& v, T const& x)
{ while(v.find(x) != end(v)) v.erase(v.find(x)); }
template<class T> struct arr;
template<class T> static arr<T> valuearr(T const& v, int sz);
template<class T> static arr<T> indexarr(int sz);
template<class T> struct arr final
{
    int n; vector<T> s;
    arr() : n(0), s(0) { }
    arr(int sz) : n(sz), s(sz + 1) { }
    arr(arr<T> const& a) : n(a.n), s(a.s) { }
    arr(basic_string<T> const& a) : n(a.size()) { s = vector<T>(n + 1); s[0] = 0; rep(i, 0, a.size()-1) s[i+1] = a[i]; }
    arr(vector<T> const& a) : n(a.size()) { s.emplace_back(); s.insert(s.end(), a.begin(), a.end()); }
    arr<T>& operator=(arr<T> const& a) { n = a.n; s = a.s; return *this; }
    void fill(T const& v) { rep(i, 0, n) s[i] = v; }
    int size() const { return n; }
    void clear() const { fill(T()); }
    T& operator[](int const& k) { return s[k]; }
    T const& operator[](int const& k) const { return s[k]; }
    const T* begin() const { return &s[0] + 1; }
    const T* end() const { return &s[0] + n + 1; }
    T* begin() { return &s[0] + 1; }
    T* end() { return &s[0] + n + 1; }
    bool empty() const { return n == 0; }
    bool isinc() const { rep(i, 2, n) if(s[i] < s[i-1]) return false; return true; }
    bool isdec() const { rep(i, 2, n) if(s[i] > s[i-1]) return false; return true; }
    bool isincst() const { rep(i, 2, n) if(s[i] <= s[i-1]) return false; return true; }
    bool isdecst() const { rep(i, 2, n) if(s[i] >= s[i-1]) return false; return true; }
    int cnt(T const& v) const { return count(begin(), end(), v);  }
    int cnt(function<bool(T const&)> const& f) const { return count_if(begin(), end(), f); }
    int cntdiff() const { return sort().unique().n; }
    template<class H> arr<T> sort(H const& cmp) const { var r(*this); std::sort(r.begin(), r.end(), cmp); return move(r); }
    arr<T> sort(function<bool(T const&, T const&)> const& f) const { var r(*this); std::sort(r.begin(), r.end(), f); return move(r); }
    arr<T> sort() const { var r(*this); std::sort(r.begin(), r.end()); return move(r); }
    template<class H> arr<T> sortindex(H const& cmp) const { return indexarr<int>(n).sort([&](int const& a, int const& b) { return cmp(s[a], s[b]); }); }
    arr<int> sortindex(function<bool(T const&, T const&)> const& f) const { return indexarr<int>(n).sort([&](int const& a, int const& b){ return f(s[a], s[b]); }); }
    arr<int> sortindex() const { return indexarr<int>(n).sort([&](int const& a, int const& b){ return s[a] < s[b]; }); }
    arr<T> slice(int l, int r) const { arr<T> v(r-l+1); rep(i, l, r) v[i-l+1] = s[i]; return move(v); }
    arr<T> prefix(int len) const { return slice(1, len); }
    arr<T> suffix(int len) const { return slice(n-len+1, n); }
    arr<T> rm(T const& v) const { var r = arr<T>(n - cnt(v)); copy_if(begin(), end(), r.begin(), [&](T const& a){ return a != v; }); return move(r); }
    arr<T> rm(function<bool(T const&)> const& f) const { var r = arr<T>(n - cnt(f)); copy_if(begin(), end(), r.begin(), [&](T const& a){ return !f(a); }); return move(r); }
    arr<T> filter(function<bool(T const&)> const& f) const { var r = arr<T>(cnt(f)); copy_if(begin(), end(), r.begin(), f); return move(r); }
    arr<T> unique() const { var r(*this); r.n = (int)(std::unique(r.begin(), r.end()) - r.begin()); r.s.resize(r.n + 1); return move(r); }
    arr<T> operator+(arr<T> const& v) const { arr<T> r(n + v.n); rep(i, 1, n) r[i] = s[i]; rep(i, 1, v.n) r[n + i] = v[i]; return move(r); }
    arr<T> dup() const { return *this + *this; }
    template<class G> arr<G> map(function<G(T const&)> const& f) const { var r = arr<G>(n); rep(i, 1, n) r[i] = f(s[i]); return move(r); }
    arr<T> rev() const { var r(*this); rep(i, 1, n) swap(r[i], r[n-i+1]); return move(r); }
    arr<T> values() const { return sort().unique(); }
    int lbound(T const& val) { return (int)(lower_bound(begin(), end(), val) - begin() + 1); }
    int rbound(T const& val) { return (int)(upper_bound(begin(), end(), val) - begin() + 1); }
    arr<T> descr() const { var r = values(); arr<T> k(n); rep(i, 1, n) k[i] = r.lbound(s[i]); return move(k); }
    T max() const { T v = s[1]; rep(i ,2, n) v = std::max(v, s[i]); return v; }
    T min() const { T v = s[1]; rep(i ,2, n) v = std::min(v, s[i]); return v; }
    T sum() const { T v = s[1]; rep(i, 2, n) v += s[i]; return v; }
    template<class A> A collect() const { A x; rep(i, 1, n) x.insert(x.end(), s[i]); return move(x); }
    arr<T>& read() { rep(i, 1, n) sc(s[i]); return *this; }
};
template<class T> void pr(arr<T> const& s) { rep(i, 1, s.n) { pr(s[i]); if(i != s.n) pr(' '); } }
template<class T> static arr<T> valuearr(T const& v, int sz) { arr<T> r(sz); rep(i, 0, sz) r[i] = v; return move(r); }
static arr<int> indexarr(int sz) { arr<int> r(sz); rep(i, 0, sz) r[i] = i; return move(r); }
using iarr = arr<int>;
using larr = arr<ll>;
using farr = arr<double>;
using barr = arr<bool>;
using charr = arr<char>;
#include <cmath>
using db = long double;
static db eps = 1e-12;
static bool eq(db a, db b) { return abs(a - b) < eps; }
static bool sqr(db const& x) { return x * x; }
template<class T> static T sgn(T const& v) { return v < 0 ? -1 : v > 0 ? 1 : 0; }
const db pi = 3.1415926535897932384626433832795;
struct vec2
{
    db x, y;
    db len2() const { return x * x + y * y; }
    db len() const { return sqrt(len2()); }
    db a() const { return atan2(y, x); }
    vec2 norm() const { if(eq(len(), 0)) return { 0, 0 }; return { x / len(), y / len() }; }
    vec2 rot(db a) const { return { x * cos(a) - y * sin(a), x * sin(a) + y * cos(a) }; }
    vec2 rot90() const { return { -y, x }; }
    vec2 operator+(vec2 const& b) const { return { x + b.x, y + b.y }; }
    vec2 operator-(vec2 const& b) const { return { x - b.x, y - b.y }; }
    vec2 operator()(vec2 const& b) const { return { b.x - x, b.y - y }; }
    db operator^(vec2 const& b) const { return x * b.y - y * b.x; }
    db operator&(vec2 const& b) const { return x * b.x + y * b.y; }
    vec2 operator/(db const& t) const { return { x / t, y / t }; }
    bool operator==(vec2 const& t) const { return eq(x, t.x) && eq(y, t.y); }
    bool operator!=(vec2 const& t) const { return !(*this == t); }
    db afrom(vec2 const& t) const { return atan2(t ^ *this, t & *this); }
    vec2& operator-=(vec2 const& t) { return *this = *this - t; }
    vec2& operator+=(vec2 const& t) { return *this = *this + t; }
    vec2 operator*=(db const& t) { return *this = vec2 { x * t, y * t }; }
    vec2 operator/=(db const& t) { return *this = vec2 { x / t, y / t }; }
};
vec2 operator*(vec2 const& a, db t) { return { a.x * t, a.y * t }; }
vec2 operator*(db t, vec2 const& a) { return { a.x * t, a.y * t }; }
int sc(vec2& a) { int p = sc(a.x); if(p < 0) return p; p += sc(a.y); return p; }
void pr(vec2 a) { pr(a.x); pr(' '); pr(a.y); }
struct segment
{
    vec2 from, to;
    vec2 dir() const { return from(to); }
    db len() const { return dir().len(); }
    bool overlap(vec2 const& v, bool strict = false) const
    {
        if(!strict) return eq(from(to).len(), v(from).len() + v(to).len());
        else return sgn(from(to) & from(v)) > 0 && sgn(to(from) & to(v)) > 0;
    }
    vec2 proj(vec2 const& p) const
    {
        db h = abs(dir() ^ from(p)) / len();
        db r = sqrt(from(p).len2() - h * h);
        if(eq(r, 0)) return from;
        if((from(to) & from(p)) < 0) return from + from(to).norm() * (-r);
        else return from + from(to).norm() * r;
    }
    vec2 nearest(vec2 const& p) const
    {
        var g = proj(p);
        if(overlap(g)) return g;
        if(g(from).len() < g(to).len()) return from;
        return to;
    }
};
bool parallel(segment const& a, segment const& b)
{ return eq(a.dir().norm() ^ b.dir().norm(), 0); }
bool intersect(segment const& A, segment const& B, bool strict = false)
{
    var dia = A.from(A.to);
    var dib = B.from(B.to);
    db a = dia ^ A.from(B.from);
    db b = dia ^ A.from(B.to);
    db c = dib ^ B.from(A.from);
    db d = dib ^ B.from(A.to);
    if(strict) return ((a < 0 && b > 0) || (a > 0 && b < 0)) &&
        ((c < 0 && d > 0) || (c > 0 && d < 0));
    else return ((a < 0 && b > 0) || (a > 0 && b < 0) || A.overlap(B.from) || A.overlap(B.to)) &&
        ((c < 0 && d > 0) || (c > 0 && d < 0) || B.overlap(A.from) || B.overlap(A.to));
}
vec2 intersection(segment const& a, segment const& b)
{
    db ax = (a.from(b.from) ^ b.dir()) / (a.dir() ^ b.dir());
    return a.from + ax * a.dir();
}
using namespace std;
using pt = vec2;
using seg = segment;
int main()
{
    defsc(pt, A, B, C);
    pt cAB = (A + B) / 2;
    pt cBC = (B + C) / 2;
    pt dAB = A(B).rot(0.5 * pi);
    pt dBC = B(C).rot(0.5 * pi);
    seg AB = { cAB, cAB + dAB };
    seg BC = { cBC, cBC + dBC };
    pt O = intersection(AB, BC);
    db aAB = abs(O(A).afrom(O(B)));
    db aBC = abs(O(B).afrom(O(C)));
    int res = 0;
    db cerr = 1e10;
    rep(n, 3, 100)
    {
        db na = aAB * n / (pi * 2);
        db nb = aBC * n / (pi * 2);
        db err = abs((na - round(na)) / round(na))
            + abs((nb - round(nb)) / round(nb));
        // prln(na, nb, n, err, sin(sp) * O(A).len2() / 2 * n);
        if(cerr > err + eps)
        {
            cerr = err;
            res = n;
        }
    }
    db sp = pi * 2 / res;
    db area = sin(sp) * O(A).len2() / 2 * res;
    prln(area);
}
/**&*/
#pragma comment(linker, "/STACK:256000000")
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <set>
#include <string>
#include <queue>
#include <vector>
#include <ctime>
#include <cstring>
#include <sstream>

//#include <unordered_map>
//#include <unordered_set>


using namespace std;

//types
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;



//define trick
#define VA_NUM_ARGS(...) VA_NUM_ARGS_IMPL_((0,__VA_ARGS__, 8,7,6,5,4,3,2,1))
#define VA_NUM_ARGS_IMPL_(tuple) VA_NUM_ARGS_IMPL tuple
#define VA_NUM_ARGS_IMPL(_0,_1,_2,_3,_4,_5,_6,_7,_8,N,...) N
#define macro_dispatcher(macro, ...) macro_dispatcher_(macro, VA_NUM_ARGS(__VA_ARGS__))
#define macro_dispatcher_(macro, nargs) macro_dispatcher__(macro, nargs)
#define macro_dispatcher__(macro, nargs) macro_dispatcher___(macro, nargs)
#define macro_dispatcher___(macro, nargs) macro ## nargs



//consts
const int INF = 1000001000;
const ll INFLL = INF * 1LL * INF;
const int mod = 1000 * 1000 * 1000 + 7;
const int mod9 = 1000 * 1000 * 1000 + 9;
const int modr = 99990001;
const ld PI = 3.1415926535897932385;

//for 
#define F(i, st, fn) for(int i=st, i##end=(fn); i<=i##end; i++)
#define FL(i, st, fn) for(ll i=st, i##end=(fn); i<=i##end; i++)
#define FIN(x,a) for(auto x:a)
#define FI(n) F(i, 0, n-1)
#define FI1(n) F(i, 1, n)
#define FJ(n) F(j, 0, n-1)
#define FJ1(n) F(j, 1, n)
#define R(i, st, fn) for(int i=st, i##end=(fn); i>=i##end; i--)
#define RI(n) R(i, n-1, 0)


//DB
#define DBN1(a)         std::cerr<<#a<<"="<<(a)<<"\n"
#define DBN2(a,b)       std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<"\n"
#define DBN3(a,b,c)     std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n"
#define DBN4(a,b,c,d)   std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<"\n"
#define DBN5(a,b,c,d,e) std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<", "<<#e<<"="<<(e)<<"\n"
#define DBN6(a,b,c,d,e,f) std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<", "<<#e<<"="<<(e)<<" "<<#f<<"="<<(f)<<"\n"
#define DBN7(a,b,c,d,e,f,g) std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<", "<<#e<<"="<<(e)<<" "<<#f<<"="<<(f)<<" "<<#g<<"="<<(g)<<"\n"
#define DBN8(a,b,c,d,e,f,g,h) std::cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<", "<<#e<<"="<<(e)<<" "<<#f<<"="<<(f)<<" "<<#g<<"="<<(g)<<" "<<#h<<"="<<(h)<<"\n"
#define DBN(...) macro_dispatcher(DBN, __VA_ARGS__)(__VA_ARGS__)

//calc
#define CpCm(c,mod) (c/mod+(c%mod!=0)) 

//pair
#define x first
#define y second

//reading
#define FR(x) freopen(x, "rt", stdin)
#define FW(x) freopen(x, "wt", stdout)
#define FRW(x, y) FR(x); FW(y)
#define UNSYNC() ios::sync_with_stdio(false)

#define WAIT() while(getchar() != 'q');

#define D(type, x) type x; read(x)
#define DS(...) string __VA_ARGS__; read(__VA_ARGS__)
#define DI(...) int __VA_ARGS__; read(__VA_ARGS__)
#define DL(...) ll __VA_ARGS__; read(__VA_ARGS__)
#define DD(...) double __VA_ARGS__; read(__VA_ARGS__)
#define DX(...) ld __VA_ARGS__; read(__VA_ARGS__)
#define DP(...) pll __VA_ARGS__; read(__VA_ARGS__)
#define DC(...) char __VA_ARGS__; read(__VA_ARGS__)
#define DIS(x,...) DI(x);DS(__VA_ARGS__)
#define DIC(x,...) DI(x);DC(__VA_ARGS__)
#define DCL(x,...) DC(x);DL(__VA_ARGS__)
#define DLS(x,...) DL(x);DS(__VA_ARGS__)
#define DSL(x,...) DS(x);DL(__VA_ARGS__)
#define DIC(x,...) DI(x);DC(__VA_ARGS__)
#define DLX(x,...) DL(x);DX(__VA_ARGS__)
#define DCD(x,...) DC(x);DD(__VA_ARGS__)
#define DA(x,n) DI(n);readN(x,n)
#define DA1(x,n) DI(n);readN(x,n,1)
#define DAS(x,n,s) DI(n);readN(x,n,s)
#define RA(x,n) readN(x,n)
#define RA2(x,n,m) FI(n) readN(x[i],m)
#define RA1(x,n) readN(x,n,1)

#define TESTS DI(tests);F(test,1,tests)
#define TESTSI(i) DI(i##s);F(i,1,i##s)

#define ZI(...) int __VA_ARGS__; zero(0,__VA_ARGS__)
#define ZL(...) ll __VA_ARGS__; zero(0,__VA_ARGS__)
#define ZS(...) string __VA_ARGS__; zero(0,__VA_ARGS__)
#define ZP(...) pll __VA_ARGS__; zero(pll(0,0),__VA_ARGS__)


template<class T> void zero(T val, T& x) { x = val; }
template<class T, class... Targs> void zero(T val, T& x, Targs&... Fargs) { x = val; zero(val, Fargs...); }


template<class T, class T2> std::istream& operator>> (std::istream& is, pair<T, T2>& p) { return is >> p.x >> p.y; }
template<class T> std::istream& readN(T& x, int n, int st = 0) { F(i, st, st + n - 1) cin >> x[i]; return cin; }
template<class T> std::istream& readS(set<T>& x, int n) { T y = *x.rbegin(); FI(n) { cin >> y; x.insert(y); } return cin; }
template<class T> std::istream& read(T& x) { return cin >> x; }
template<class T, class... Targs> std::istream& read(T& x, Targs&... Fargs) { return read(x), read(Fargs...); }


#define prec(n) cout.precision(n);cout.setf(cout.fixed);
#define ln(...) out(__VA_ARGS__)<<"\n"
#define vln(v) ln(v.size());out(v)<<"\n"
#define puts3(a,b,f,s,t) {auto fvalc=(a),svalc=(b);puts(fvalc==svalc?s:fvalc>svalc?f:t);}
#define yn(c) puts(c?"YES":"NO");
#define ynm(c) puts(c?"Yes":"No");
#define dbputs3(a,b,f,s,t) {auto fvalc=(a),svalc=(b);puts(fvalc==svalc?s:fvalc>svalc?f:t);DBN(fvalc,svalc);}
template<class T, class T2> std::ostream& operator<< (std::ostream& os, pair<T, T2> p) { return os << p.x << " " << p.y; }
template<class T> std::ostream& operator<< (std::ostream& os, vector<T> v) { bool f = true; for (auto y : v) { if (!f) os << ' '; os << y;  f = false; } return os; }
template<class T> std::ostream& operator<< (std::ostream& os, set<T> v) { bool f = true; for (auto y : v) { if (!f) os << ' '; os << y;  f = false; } return os; }
template<class T> std::ostream& operator<< (std::ostream& os, multiset<T> v) { bool f = true; for (auto y : v) { if (!f) os << ' '; os << y;  f = false; } return os; }
template<class T, class T2> std::ostream& operator<< (std::ostream& os, map<T, T2> v) { bool f = true; for (pair<T, T2> y : v) { if (!f) os << ' '; os << y.x << "=>" << y.y;  f = false; } return os; }
template<class T> std::ostream& outV(T x, char del = ' ') { bool f = true; for (auto y : x) { if (!f) cout << del; cout << y;  f = false; } return cout; }
template<class T> std::ostream& outN(T x, int n = -1, int st = 0) { F(i, st, n == -1 ? (int)x.size() - 1 : st + n - 1) { cout << x[i]; if (i < iend) cout << ' '; } return cout; }
template<class T> std::ostream& outAN(T x, int n = -1, int st = 0) { F(i, st, n - 1) { cout << x[i]; if (i < iend) cout << ' '; } return cout; }
template<class T> std::ostream& outA2(T x, int n, int m) { FI(n) { FJ(m) cout << x[i][j] << (j == m - 1 ? '\n' : ' '); } return cout; }
template<class T> std::ostream& out(T x) { return cout << x; }
template<class T, class... Targs> std::ostream& out(T x, Targs... Fargs) { return out(x) << " ", out(Fargs...); }

template<typename T> void srt(T& a, int st, int fn, bool isArr) { sort(a + st, a + fn + 1); }
template<class T> void srt(T& a, int st = 0, int fn = 0) { sort(a.begin() + st, fn ? a.begin() + fn + 1 : a.end()); }

template<typename T> T rev_num(T a) { T r = 0; for (; a; a /= 10) r = r * 10 + a % 10; return r; }
template<typename T> T sum_num(T a) { T r = 0; for (; a; a /= 10) r += a % 10; return r; }
template<typename T> void rev(T& a, int st, int fn, bool isArr) { reverse(a + st, a + fn + 1); }
template<class T> void rev(T& a, int st = 0, int fn = 0) { reverse(a.begin() + st, fn ? a.begin() + fn + 1 : a.end()); }

ll sqr(ll a) { return a * a; };
ll sqr(int a) { return a * 1LL * a; };
ld sqr(ld a) { return a * a; };

ll phi(int n) { int res = n; for (ll i = 2; i*i <= n; i++) if (n%i == 0) { while (n%i == 0) n /= i; res -= res / i; } if (n > 1) res -= res / n; return res; }
ll bpm(ll a, ll n = -2, ll m = mod) { n = n < 0 ? n + m : n; ll r = 1; while (n) { if (n & 1) r = (r*a) % m; a = (a*a) % m; n >>= 1; } return r; }
ull gcd(ull a, ull b) { while (b) { a %= b; swap(a, b); } return a; }
//
vi ero_p, ero_l; void ero(int n) { ero_l.resize(n + 1); ero_l[0] = -1; F(i, 2, n) if (!ero_l[i]) { ero_p.push_back(i); ero_l[i] = i; for (ll j = i * 1LL * i; j <= n; j += i) { ero_l[j] = i; } } }
//gcd with call_back
ll gcd_cb(ll a, ll b, ll&x, ll&y) { if (!b) { x = 1; y = 0; return a; }	ll x1, y1, g;	g = gcd_cb(b, a%b, x1, y1); x = y1;	y = x1 - a / b * y1; return g; }
//fact
vll fact; void fact_prec(int n = 20) { fact.resize(n + 1); fact[0] = 1; FI1(n) { fact[i] = fact[i - 1] * i; } }
vector<ld> factd; void fact_precd(int n = 146) { factd.resize(n + 1); factd[0] = 1; FI1(n) { factd[i] = factd[i - 1] * i; } }
string str(ll a) { string r = ""; for (; a; a /= 10) r += a % 10 + '0'; rev(r); return r; }
//math
template<typename T, typename T2> T dup(T a, T2 b) { return (a / b) + (a%b != 0); }
ll fromM(string s, int delIndex = 0, int M = 16) { ll res = 0;	for (auto a : s) { a = toupper(a); if (a < '0' || a > '9') { a -= delIndex; if (a < 'A') a = '9' - 'A' + a + 1; } else { a -= delIndex; }; res = res * M + (a > '9' || a < '0' ? a - 'A' + 10 : a - '0'); } return res; };
string toM(ll n, int delIndex = 0, int M = 16) { string res = "";  while (n) { int m = n % M + delIndex; n /= M; res += (m < 10 ? '0' + m : 'A' + (m - 10)); } rev(res); return res; }
ll castLL(string s) { ll res = 0;	for (auto a : s) { res = res * 10 + a - '0'; } return res; }
template<typename T> string castString(T n) { string res = "";  while (n) { int m = n % 10; n /= 10; res += '0' + m; } rev(res); return res; }

const int N = 200005;

typedef pair<ld, ld> pnt2;


ld dist(pnt2 from, pnt2 to) {
	return sqrt(sqr(from.x - to.x) + sqr(from.y - to.y));
}


pnt2 in[3];

ld mDst(pnt2 to) {
	ld mxDst = 0;
	ld mnDst = dist(in[0], to);
	ld sum = 0;

	FI(3) {
		mxDst = max(mxDst, dist(in[i], to));
		mnDst = min(mnDst, dist(in[i], to));
		sum += dist(in[i], to);
	}

//	DBN(mxDst, sum);


	return ( 3 * mxDst - sum) * mxDst;
}


void solution() {

	// (x1-xr)^2 + (y1-yr)^2 = r2
	// (x1-xr)^2 - (x2-xr)^2 = (y2-yr)^2 - (y1-yr)^2
	// (x1+x2-2*xr)*(x1-x2) = (y1+y2-2*yr)*(y2-y1)

	FI(3) {
		read(in[i]);
	}

	double eps = 1e-7;
	ld xx = 0, yy = 0;
	FI(3) {
		xx += in[i].x / 3;
		yy += in[i].y / 3;
	}
	pnt2 cP = pnt2(xx, yy);
	ld step = abs(xx)+abs(yy);
	while (step > 1e-40) {
		int go = 0;
		pnt2 bestC = cP;
		F(dx, -20, 20) {
			F(dy, -20, 20) {
				pnt2 C = pnt2(cP.x + dx * step, cP.y + dy * step);
				
				if (mDst(C) < mDst(bestC) && (dx || dy)) {
	//				DBN(mDst(C), mDst(bestC), C, bestC);
					go = 1;
					bestC = C;
				}

			}
		}

	//	DBN(bestC, go);

		if (!go) {
			step /= 2;
		}
		else {
			cP = bestC;
		}
	}


	ld r = dist(cP, in[0]);
	//DBN(cP, r);

	F(c, 3, 1005) {
		
		ld cangle = 2 * PI / c;

		bool y = true;

		FI(3) {
			ld dst = dist(in[i], in[(i + 1) % 3]);

			ld angle = acosl(1 - dst * dst / 2 / r / r);

			ld d = angle / cangle;

			if (fabs(d - round(d)) > 1e-4) {
	//			DBN(c, i, d, fabs(d - round(d)));
				y = false;
				break;
			}

		}

		if (y) {

			
			prec(6);
			ln(c * 0.5 * r * r * sin(cangle));

			return;
		}


	}
}

int main() {
//	FRW("input.txt", "output.txt");

//	UNSYNC();

	solution();

//	WAIT();
  	return 0;
}
/****/

//                                                  .. .:;;;:.
//                                          .750@@@@@@@@@@@@@@@@@@#G57;.
//                                      ;S8@@@@@@M#09PEEZXUXGE0dM@@@@@@@@@h57.
//                                  ;5M@@@@89U25111llll111111l111555SFZPb@@@@@@#l;
//                               ;E@@@@dZ255155SSSSSSSSSSSSSSSSSSSS55511115SX0M@@@@@O7
//                             l@@@ME251l5SSSSSCSCCCCCCCCCCCCCCCCSSSSSSSSS5551552Gd@@@@@S;
//                          ;0@@@02l155SSSSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSSSSS55515SXd@@@@dv.
//                        7@@@8Z515SSCCSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSCSSS5515FE8@@@@O;
//                      7@@@D2115SSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSSS55l15Uh@@@@dv.
//                    :M@@hC15SSSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSSSS5115CGb@@@@2;
//                   X@@#215SSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSSSS5515Uh@@@@97
//                 7@@@X15SSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSSS5515F9M@@@Ms,
//               .8@@0515SSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSCSS511SXd@@@@O;
//              7@@b2l5SSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSCCSS5515O0@@@@MC;
//             1@@P11SSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSSS5515FPM@@@@@X7.                 .,,
//            s@@Gl5SSCCCCCCCCCCCCSSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSSS5515FE0#@@@@@#57,         7#@@@@@@X,
//           ;@@Zl5SSCSSCCCCSSSSS555SSSSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSSS555FUUZEdM@@@@@@#X17;C@@@PY7Y5@@@h
//           @@Dl15555SSSSCSS551155551115SCSSSSSSSSSSSSSSSCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCSSCS5FXUOOOUZE9#M@@@@@@@@;      :@@s
//          .@@P2UUF2S55SSCS5CZDM@@@@M0U5155S555555555555SSSSSCCCCCCSSSSSSCSSSSSSSSSSSSSSSSSCCCCCCCSSSSSSSSSSSSSSSSSS55UXUUUOOF2C2ZD@@@@@;        O@U
//           @@EG0#88b#DdDhh@@@@@M#d8@@@@0C1S22F2FFFF222CSSSSSSSSSSS5555555555555111111ll55SS2CSSSSS5S55555555555555515UUOOOOOXP#@@@@v:@@;        @@7
//           v@@@@@@@@@@G0;Y@87       .1@@@DUUUZPh#bbDhPZXO2CS55SS5CFOOOFFF2S5S2UE0dbMMb0U515SS55SSCC2CCCCCSSS5SSSSS55XGZE9DM@@@@@2;   S@@l.    ;@@@
//         s@@@G7,    :.                 Y@@#Gh@@@@@@@@@@@b9ZUOC52XZXUXPh#MMDPD@@@@@@@@@@@@951COUXXXUXPhb@@@@M8M@@@@@@@@@@@@@M27        Y@@@@@@@@@d
//       .@@@Y                            .M@@@8c:   .;YU@@@@DZUFUUOZh@@@@@@@@@@2;      .c@@MPUXXUUP#@@@@@@@@@@MY;7l5FFSl7;.              :TUEX57
//      ,@@d                               ;@@C           .l@@M00D9DM@EY,   @@c            F@@92OP@@@M5;     7@@C
//      @@b                                 @@v              1@@M8@@@@Y           @@U       l@MP#@@C.         ;@@@#
//     7@@.                                F@@,               c@@; :v9@@7         v@@G       E@@@#             7@@@l
//     E@M                                E@@;              .  #@P     7;          l@@:      ;@@G                G@@
//     F@@                               P@@;               .  b@b                 .@@l      5@@                 1@@
//      @@h          .                   ;2:                  5@@;                  @@9      @@F              .  Z@@
//      ,@@@7       7@@.              .                      G@@5                   @@2     .@@5             ..  @@2
//        C@@@#POOXZ@@@@v         ;2@@@@                    P@@@T                    ;       S@@            ..  S@@
//          D@@@@@@@@GO@@@MXCFP@@@@@85d@@7              :7Z@@MM@E                  .         .@@X              7@@c
//          2@M;:;;;,,.;sD@@@@@@9s;,;Yb@@@@Z;.    .;TUM@@@@@1:7@@D              ;2@@@      ;Z@@@@@Y          ;0@@5
//          Z@@:,;;;;;;;:,::;,  .;sd@@@O;7@@@@@@@@@@@@@@5;;,,:,7@@@5,       :vh@@@@@M;:;7G@@@MT;C@@@@G1Tl5Z@@@@b.
//          2@@;:;;;;;;;;;:. :YZM@@0Y       l@@GX@@7 7@@D; ,;;;::5@@@@MddM@@@@@@Y.7P@@@@@@@27,,:,;s9@@@@@@@@UG@O
//          5@@;:;;;;;;:,,;;T@@@M8#UlcY7.    b@G2@@   .8@@F;,;;;;.:E@@M@@@@Oc#@@hc. .7777;:,:;;;;;,,:;;;7;;, v@@
//          l@@7:;;;,,:7sP@@@M#ddddEhM@@@@P;  @@b@@     F@@M7,:;;;:5@@.        1@@@Z;  .::;;;;;;;;;;;;;;:;;;.5@@
//          9@@7:;,:YGM@@@Mb#b@@@@@9C5CFh@@@M: d@@@      ;@@@X;,;;:s@@;          ;X@@b1;.:;;;;;;;7;;;;;;;;;;,G@@
//          M@@7,;1@@@@MM@@8bdMMb#d0@@Mbdd#b@@C.P@@    ..  5@@@S;,,;M@U7U#M@@@@@0Ss2h@@@G;.:;;;;;;;;;;;;;;;;,U@@
//          h@@7.v@@8M@@MECM@S      M@DP00Db@@@d#@b      .  ,P@@@l:7#b@@@@@@MMM@@@@8DDDD#MPs:;;;;;;;;;;;;;;;,U@@
//          U@@; 7@@@@Ev::.2@@:     @M9EEP0@0E@@D,   ...  ..  ;D@@@@M#ddd##d#8@@@@@#dbbdOE@@Y:;;77;;;;;;;;;;,E@@
//          Z@@:7@@M5;.,;;;;M@@    ;@M0E99MX   TS   ......  ..  ;P@@@##D999P0@X .;d@8@@@@8#@F :;;;;;;;;;;;;;:h@@
//          D@@,;s7:,:;;;;7;c@@s   7@80P90@    @@v  .......       .71M8DEEPED@    U@9 Y8@@8MMl,,;;;;;;;;;;;;;@@@
//          @@0,:::;;;;;;;77;D@@   ;@M9G90M2  ,@@5  .........        b@hEP99D#    F@#   .l@8M@#7.;;;;;;;;7;;;@@#
//         7@@l,;;;;;;;;;;77;7@@5  ;@M9ZGP0@@@@@@E  ............    .@MhEPP908dCE8M@@     M@8@@@X:;;;;;;;7;:7@@5
//         @@M::::;;;;;;;;;77;D@@  ,@@0EP909hh0#@D  . ............  ,@@hP09900b@@#d@@    .@@57#@@M;;;;;;;;;,Y@@;
//        @@@7.,TO;,;;;;;;;;7;l@@;  @@#8@@@@@M0#@0  ..............  :@M9GPPPPPP9EZh@@.   c@@7 ,7G87;;;;77;;,9@@
//      ;@@@7 ,E@@@7,;;;;;;;7;;@@1  @@b7;;77Y7X@@T  ...      ....   ,@M9XGEPPPPPPZh@@    b@8::;:,:;;;7;;7;:;@@D
//    ;h@@X: ;h@@8@@7,;;7;;;;;;d@0  ;@@;      0@@   . .       ...    @@dPh8@@@@@b9d@@   ;@@5,;;;;;;7;;;;7;,1@@s
//  .@@@@2;7U@@@: b@@;:;;7;;;5@@@M   S@@8F7  @@@.  .. . ,MT   ....   d@80XClY77clPM@1   @@b:;;;;;;;;;;;;;;,E@@:
//   0@@@@@@@@O    @@D,;;7;;;7UMM@@@@@@@@@@7 cs    .. . :PM7  .....  :@@b,       0@b   h@M; ;;;;;;;;;777;;:d@@
//     .;77;.      Y@@T,;;;;;;,S@@5s5l7;.....     .....  .7, .......  ;@@@@1  .7@@0   X@@@#5;;;;;;;;;;;;;;;@@M
//                  @@8:;;;;;7;l@@.        ..    ......      ......     ;CDl  @@@@MD@@@@@M07;;;;;:,,,:;;;;;@@@
//                  7@@7:;;,,::7@@5           ........      .........       . ,777S@@@@Y;:,:;;;:.;CGG7;;;;;@@@,
//                   @@S,:;lFT;.E@@:     ............        .........   ..      7h@@O;.:;;;;:,;U@@@@@;;;::d@@2
//                  ;@@T ,E@@@@c:D@@7     ..........   ;,    . .........    .;5M@@#5; :;;;;:,7G@@@77@@Z;::.;h@@
//                 ;@@U,;P@@Sl@@S:U@@9.     .......   F@@@@;  ..........  T@@@@MS7cP@Y:;;:,7h@@@v   l@@@9Ss7Z@@5
//               7@@@@hM@@@l  7@@5 Yb@@2       ....   .7U@@F  ..........  P@@@bG5P@@d;::,7#@@@7      ,O@@@@@@@@0
//               @@@@@@@E7     l@@7 S@@@@O,        ..        . ...          7Zb8@@07.::70@@@7            ,;;;;.
//                ..            b@PT@@77@@@#7                            .;75bM887::::s@@8
//                            :5@@@@@@@@@@@@@@@S,                   .75#@@@@@5O@M;.;:l@@G
//                           ;@@@hPGZOO2sY9M@@@@@@Ps;.     .,;;Y5h@@@@@@MElh@F;b@Mc:;@@h
//                           ,@@;     .  sM@@XlSD@@@@@@@@@@@@@@@@@@MZ5c77;:;P@9;Z@@@8@@
//                           7@@..,:;;.:#@@Z777;;7;G@@Yl2OCl7S@@s;7;;,.,:7Y7;0@X ;2M@@@S
//                           F@#.,:;;,;@@@1;:.    ,M@F       d@9;7.       .Y7;M@C ...:F@@s
//                           7@5 :;;,;@@@s;       .@@7 .,.  2@@77          ,T;7@@7.;.  7@@
//                           #@;.;;::b@@l;        P@@      .@@57,           7Y:F@@,:;: ;@@
//                          @@@:.;;.U@@X;        7@@c      l@b;;            .T7;@@1.;; l@D
//                         9@@:.;;,7@@M7.       S@@D       M@17              7Y;l@@:;; 1@C
//                        5@@: :;;,P@@5:         @@2    . ;@@Y;              ,c7;M@l.;,:@@b
//                       S@#:.::;:;@@M7          Y@@   .. c@M7:               c7;F@#,;;..Z@@;
//                      .@@7 ,::;,l@@Z:          .@@:  .. O@97.               7Y;7@@;:;:. v@@
//                       ,@@7 ::;,Z@@1.           M@1  .. #@C7                7Y7;M@T,;;. 5@@
//                        ,@@; ,;,0@@s.           O@d  .. @@77                7v7;E@O.;, c@@
//                         ,@@7 ,:M@@T:           7@@  .  @@77                7Y7:F@0., 7@@,
//                          .@@7 ,P@@1;           :@@,    @@7Y.              .T77:5@D :E@@7
//                           .@@7 :@@Z;.           @@;    M@77:              ;c77:l@hT@@@C
//                             @@: X@@77.          @@T   ;@@Y77             .T77:7MMM@@Ml
//                              @@7.@@d;7;        :@@E   @@@U:Y.           ;Y7;:7M@@@M@;
//                              @@@57M@#Y7;,   .:;lM@8  b@@M@7;7.       ,;Yv;;;l@@@Z:5@Z
//                            ,@@9Z@01h@@DSlY777s0@@@b l@@X@@#;;7777777Y77;;YE@@@O;. 7@@
//                           .@@9. 1@@l1M@@@@@@@@@0dM#c@@7 E@@@1777777;77YC@@@M5;.:;:.M@7
//                           @@F .:.7@@C,7O#@@@M97 P@#@@v ,,l8@@@@@@Mb8@@@@@1;,,:;;;: 5@8
//                          @@@,.:;;,:9@M:  ,::,,  #@#@P ,;;,,:7Yllc2M@@@97,,:;;;;:;;.;@@;
//                         @@@7 :;::;:.l@@5  .,,:, d@@@;.::;;;:.  ;2@@bl;.,;;;:;:;;;;, D@d
//                        M@@; :;;;;:;;,7M@@7  ,:: 2@@Y ::::.  .c@@@F7,.;;;;;;:;;;;;;: s@@.
//                       M@@7 :;;;;;;::;,,1@@b7  . l@8 .,,. ,7O@@U;,,:;;;;:;;;;;;;;;;;,:@@Z
//                      8@@7 :;;;;;;;;;::: c@@@M7  X@l   :vd@@@O .:;;;;:;;;;;;;;;;;;;;: F@@;
//                     #@@7 :;;;;;;;;;;;:;.Y@D;P@MX@@77Z@@@P;0@5.;;;;:;;;;;;;;;;;;;;;;:.:@@P
//                    #@@7 :;;;;;;;;;;;;;;,T@b .@@@@@bbO5@@: 0@S,;:;;;;;;;;;;;;;;;;;;;;: U@@.
//                   b@@7 :;;;;;;;;;;;;;;;,s@M .@@7:;:. ;@@. D@l,;;;;;;;;;;;;;;;;;;;;;;;.;@@G
//                  M@@7 :;;;;;;;;;;;;;;;;,s@M .@@;.:::,Y@@  d@1,;;;;;;;;;;;;;;;;;;;;;;;: X@@.
//                 @@8, .,,::::::::::::,,:.Y@b  @@;.;,,.s@D  0@c.:,,::::::::::::::::::,,, .@@U


#include<bits/stdc++.h>
//2
#define angel(c) c<-1?-1:c
using namespace std;
const double EPS=1e-2; 
const double PI=acos(-1);
double x[3],y[3];
double a,b,c;
double dis(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double cal_angel(double a,double b,double c){//cal_cos 
	//cout<<"debug:"<<(((b*b+c*c-a*a)/2/b/c))<<endl;
	return (((b*b+c*c-a*a)/2/b/c));
}
double gcd(double a,double b) {    //double类型的最大公约数
    if(fabs(b)<EPS)
        return a;
    if(fabs(a)<EPS)
        return b;
    return gcd(b,fmod(a,b));    //fmod(a,b), double类型的取模
}
int main(){
	//freopen("1.in","r",stdin);
	for(int i=0;i<3;i++){
		cin>>x[i]>>y[i];
	}
	a=dis(x[1],y[1],x[2],y[2]);
	b=dis(x[0],y[0],x[2],y[2]);
	c=dis(x[0],y[0],x[1],y[1]);
	
	double sina=sqrt(1-pow(cal_angel(a,b,c),2));
	//cout<<sina<<endl;
	double R=a/sina/2;
	//cout<<R<<endl;
	
	double a1=acos(angel(1-a*a/2/R/R)),b1=acos(angel(1-b*b/2/R/R));
	double c1=2*PI-a1-b1;
	//cout<<a1<<b1<<c1<<endl;
	double t=gcd(a1,gcd(b1,c1));
	printf("%.6lf\n",(PI*R*R*sin(t))/t);
	
	
	return 0;
}
/****/
// LUOGU_RID: 123566782
/*old
#include<bits/stdc++.h>
using namespace std;
const double Pi=acos(-1.0);
const double EPS=1E-2;
struct Point {
    double x,y;
}P[3];
double len[3],a[3];
double Get(int i,int j){
    return sqrt((P[i].x-P[j].x)*(P[i].x-P[j].x)+(P[i].y-P[j].y)*(P[i].y-P[j].y));
}
double gcd(double a,double b){
    if(fabs(b)<EPS)
        return a;
    if(fabs(a)<EPS)
        return b;
    return gcd(b,fmod(a,b));
}
int main() {
    double t=0.0,A,r;
    for(int i=0;i<3;++i)
        cin>>P[i].x>>P[i].y;
    for(int i=0;i<3;t+=len[i],++i)
        len[i]=Get(i,(i+1)%3);
    t/=2;
    A=sqrt(t*(t-len[0])*(t-len[1])*(t-len[2]));
    r=len[0]*len[1]*len[2]/(4*A);
    for(int i=0;i<2;++i)
        a[i]=acos(1-len[i]*len[i]/(2*r*r));
    a[2]=2*Pi-a[0]-a[1];
    t=gcd(a[0],gcd(a[1],a[2]));
    printf("%.6lf",(Pi*r*r*sin(t))/t);

    return 0;
}*/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//BEGINTEMPLATE_BY_ACRUSH_TOPCODER
#define SIZE(X) ((int)(X.size()))//NOTES:SIZE(
#define LENGTH(X) ((int)(X.length()))//NOTES:LENGTH(
#define MP(X,Y) make_pair(X,Y)//NOTES:MP(
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64
#define two(X) (1<<(X))//NOTES:two(
#define twoL(X) (((int64)(1))<<(X))//NOTES:twoL(
#define contain(S,X) (((S)&two(X))!=0)//NOTES:contain(
#define containL(S,X) (((S)&twoL(X))!=0)//NOTES:containL(
const double pi=acos(-1.0);//NOTES:pi
const double eps=1e-11;//NOTES:eps
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}//NOTES:checkmin(
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}//NOTES:checkmax(
template<class T> inline T sqr(T x){return x*x;}//NOTES:sqr
typedef pair<int,int> ipair;//NOTES:ipair
template<class T> inline T lowbit(T n){return (n^(n-1))&n;}//NOTES:lowbit(
template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));}//NOTES:countbit(
//Numberic Functions
template<class T> inline T gcd(T a,T b)//NOTES:gcd(
  {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template<class T> inline T lcm(T a,T b)//NOTES:lcm(
  {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<class T> inline T euclide(T a,T b,T &x,T &y)//NOTES:euclide(
  {if(a<0){T d=euclide(-a,b,x,y);x=-x;return d;}
   if(b<0){T d=euclide(a,-b,x,y);y=-y;return d;}
   if(b==0){x=1;y=0;return a;}else{T d=euclide(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}}
template<class T> inline vector<pair<T,int> > factorize(T n)//NOTES:factorize(
  {vector<pair<T,int> > R;for (T i=2;n>1;){if (n%i==0){int C=0;for (;n%i==0;C++,n/=i);R.push_back(make_pair(i,C));}
   i++;if (i>n/i) i=n;}if (n>1) R.push_back(make_pair(n,1));return R;}
template<class T> inline bool isPrimeNumber(T n)//NOTES:isPrimeNumber(
  {if(n<=1)return false;for (T i=2;i*i<=n;i++) if (n%i==0) return false;return true;}
template<class T> inline T eularFunction(T n)//NOTES:eularFunction(
  {vector<pair<T,int> > R=factorize(n);T r=n;for (int i=0;i<R.size();i++)r=r/R[i].first*(R[i].first-1);return r;}
//Matrix Operations
const int MaxMatrixSize=40;//NOTES:MaxMatrixSize
template<class T> inline void showMatrix(int n,T A[MaxMatrixSize][MaxMatrixSize])//NOTES:showMatrix(
  {for (int i=0;i<n;i++){for (int j=0;j<n;j++)cout<<A[i][j];cout<<endl;}}
template<class T> inline T checkMod(T n,T m) {return (n%m+m)%m;}//NOTES:checkMod(
template<class T> inline void identityMatrix(int n,T A[MaxMatrixSize][MaxMatrixSize])//NOTES:identityMatrix(
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) A[i][j]=(i==j)?1:0;}
template<class T> inline void addMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize])//NOTES:addMatrix(
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=A[i][j]+B[i][j];}
template<class T> inline void subMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize])//NOTES:subMatrix(
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=A[i][j]-B[i][j];}
template<class T> inline void mulMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T _A[MaxMatrixSize][MaxMatrixSize],T _B[MaxMatrixSize][MaxMatrixSize])//NOTES:mulMatrix(
  { T A[MaxMatrixSize][MaxMatrixSize],B[MaxMatrixSize][MaxMatrixSize];
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) A[i][j]=_A[i][j],B[i][j]=_B[i][j],C[i][j]=0;
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) for (int k=0;k<n;k++) C[i][j]+=A[i][k]*B[k][j];}
template<class T> inline void addModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize])//NOTES:addModMatrix(
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=checkMod(A[i][j]+B[i][j],m);}
template<class T> inline void subModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize])//NOTES:subModMatrix(
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=checkMod(A[i][j]-B[i][j],m);}
template<class T> inline T multiplyMod(T a,T b,T m) {return (T)((((int64)(a)*(int64)(b)%(int64)(m))+(int64)(m))%(int64)(m));}//NOTES:multiplyMod(
template<class T> inline void mulModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T _A[MaxMatrixSize][MaxMatrixSize],T _B[MaxMatrixSize][MaxMatrixSize])//NOTES:mulModMatrix(
  { T A[MaxMatrixSize][MaxMatrixSize],B[MaxMatrixSize][MaxMatrixSize];
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) A[i][j]=_A[i][j],B[i][j]=_B[i][j],C[i][j]=0;
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) for (int k=0;k<n;k++) C[i][j]=(C[i][j]+multiplyMod(A[i][k],B[k][j],m))%m;}
template<class T> inline T powerMod(T p,int e,T m)//NOTES:powerMod(
  {if(e==0)return 1%m;else if(e%2==0){T t=powerMod(p,e/2,m);return multiplyMod(t,t,m);}else return multiplyMod(powerMod(p,e-1,m),p,m);}
//Point&Line
double dist(double x1,double y1,double x2,double y2){return sqrt(sqr(x1-x2)+sqr(y1-y2));}//NOTES:dist(
double distR(double x1,double y1,double x2,double y2){return sqr(x1-x2)+sqr(y1-y2);}//NOTES:distR(
template<class T> T cross(T x0,T y0,T x1,T y1,T x2,T y2){return (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);}//NOTES:cross(
int crossOper(double x0,double y0,double x1,double y1,double x2,double y2)//NOTES:crossOper(
  {double t=(x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);if (fabs(t)<=eps) return 0;return (t<0)?-1:1;}
bool isIntersect(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)//NOTES:isIntersect(
  {return crossOper(x1,y1,x2,y2,x3,y3)*crossOper(x1,y1,x2,y2,x4,y4)<0 && crossOper(x3,y3,x4,y4,x1,y1)*crossOper(x3,y3,x4,y4,x2,y2)<0;}
bool isMiddle(double s,double m,double t){return fabs(s-m)<=eps || fabs(t-m)<=eps || (s<m)!=(t<m);}//NOTES:isMiddle(
//Translator
bool isUpperCase(char c){return c>='A' && c<='Z';}//NOTES:isUpperCase(
bool isLowerCase(char c){return c>='a' && c<='z';}//NOTES:isLowerCase(
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';}//NOTES:isLetter(
bool isDigit(char c){return c>='0' && c<='9';}//NOTES:isDigit(
char toLowerCase(char c){return (isUpperCase(c))?(c+32):c;}//NOTES:toLowerCase(
char toUpperCase(char c){return (isLowerCase(c))?(c-32):c;}//NOTES:toUpperCase(
template<class T> string toString(T n){ostringstream ost;ost<<n;ost.flush();return ost.str();}//NOTES:toString(
int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}//NOTES:toInt(
int64 toInt64(string s){int64 r=0;istringstream sin(s);sin>>r;return r;}//NOTES:toInt64(
double toDouble(string s){double r=0;istringstream sin(s);sin>>r;return r;}//NOTES:toDouble(
template<class T> void stoa(string s,int &n,T A[]){n=0;istringstream sin(s);for(T v;sin>>v;A[n++]=v);}//NOTES:stoa(
template<class T> void atos(int n,T A[],string &s){ostringstream sout;for(int i=0;i<n;i++){if(i>0)sout<<' ';sout<<A[i];}s=sout.str();}//NOTES:atos(
template<class T> void atov(int n,T A[],vector<T> &vi){vi.clear();for (int i=0;i<n;i++) vi.push_back(A[i]);}//NOTES:atov(
template<class T> void vtoa(vector<T> vi,int &n,T A[]){n=vi.size();for (int i=0;i<n;i++)A[i]=vi[i];}//NOTES:vtoa(
template<class T> void stov(string s,vector<T> &vi){vi.clear();istringstream sin(s);for(T v;sin>>v;vi.push_bakc(v));}//NOTES:stov(
template<class T> void vtos(vector<T> vi,string &s){ostringstream sout;for (int i=0;i<vi.size();i++){if(i>0)sout<<' ';sout<<vi[i];}s=sout.str();}//NOTES:vtos(
//Fraction
template<class T> struct Fraction{T a,b;Fraction(T a=0,T b=1);string toString();};//NOTES:Fraction
  template<class T> Fraction<T>::Fraction(T a,T b){T d=gcd(a,b);a/=d;b/=d;if (b<0) a=-a,b=-b;this->a=a;this->b=b;}
  template<class T> string Fraction<T>::toString(){ostringstream sout;sout<<a<<"/"<<b;return sout.str();}
  template<class T> Fraction<T> operator+(Fraction<T> p,Fraction<T> q){return Fraction<T>(p.a*q.b+q.a*p.b,p.b*q.b);}
  template<class T> Fraction<T> operator-(Fraction<T> p,Fraction<T> q){return Fraction<T>(p.a*q.b-q.a*p.b,p.b*q.b);}
  template<class T> Fraction<T> operator*(Fraction<T> p,Fraction<T> q){return Fraction<T>(p.a*q.a,p.b*q.b);}
  template<class T> Fraction<T> operator/(Fraction<T> p,Fraction<T> q){return Fraction<T>(p.a*q.b,p.b*q.a);}
//ENDTEMPLATE_BY_ACRUSH_TOPCODER


int main()
{
#ifdef _MSC_VER
	freopen("input.txt","r",stdin);
#endif
	double x1,y1,x2,y2,x3,y3;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	if (fabs(x1-x2)<=eps && fabs(y1-y2)<=eps &&
		fabs(x2-x3)<=eps && fabs(y2-y3)<=eps &&
		fabs(x3-x1)<=eps && fabs(y3-y1)<=eps)
	{
		printf("%.12lf\n",0.0);
		return 0;
	}
	if (fabs(x1-x2)<=eps && fabs(y1-y2)<=eps ||
		fabs(x2-x3)<=eps && fabs(y2-y3)<=eps ||
		fabs(x3-x1)<=eps && fabs(y3-y1)<=eps)
	{
		double l1=dist(x1,y1,x2,y2);
		double l2=dist(x2,y2,x3,y3);
		double l3=dist(x3,y3,x1,y1);
		double l=max(max(l1,l2),l3);
		double R=sqrt(3.0)/4.0*l*l;
		printf("%.12lf\n",R);
		return 0;
	}
	double a1=x1-x2;
	double b1=y1-y2;
	double c1=-(x1+x2)/2*a1-(y1+y2)/2*b1;
	double a2=x1-x3;
	double b2=y1-y3;
	double c2=-(x1+x3)/2*a2-(y1+y3)/2*b2;
	double t=a1*b2-a2*b1;
	double x0=+(b1*c2-b2*c1)/t;
	double y0=-(a1*c2-a2*c1)/t;
	double R=1e100;
	double d1=atan2(y1-y0,x1-x0);
	double d2=atan2(y2-y0,x2-x0);
	double d3=atan2(y3-y0,x3-x0);
	double dp1=d1-d2;
	double dp2=d1-d3;
	while (dp1<-eps) dp1+=pi*2;
	while (dp1>=pi*2-eps) dp1-=pi*2;
	while (dp2<-eps) dp2+=pi*2;
	while (dp2>=pi*2-eps) dp2-=pi*2;
	double radius=dist(x1,y1,x0,y0);
	for (int d=3;d<=100;d++)
	{
		double p0=pi*2/d;
		double v1=dp1/p0;
		double v2=dp2/p0;
		if (fabs(v1-floor(v1+0.5))<=1e-5 && fabs(v2-floor(v2+0.5))<=1e-5)
			checkmin(R,d*sin(p0)*radius*radius/2.0);
	}
	printf("%.12lf\n",R);
	return 0;
}
/****/
\
#include<bits/stdc++.h>
using namespace std;
const double pi=acos(-1);
const double eps = 1e-2;
class p
{
public:
	double x;
	double y;
	p(){cin >> x >> y;}
	p(double _x,double _y):x(_x),y(_y){}
};

double gcd(double e1, double e2)
{
	if (fabs(e2) < eps)
		return e1;
	if (fabs(e1) < eps)
		return e2;
	return gcd(e2, fmod(e1, e2));
}

int main()
{
	p p1, p2, p3;
	if (p1.y == p2.y || p1.y == p3.y)
	{
		double t = p1.x;
		p1.x = p2.x;
		p2.x = t;
		t = p1.y;
		p1.y = p2.y;
		p2.y = t;
	}
	double k1 = 0, k2 = 0, b1, b2;
	k1 = -(p1.x - p2.x) / (p1.y - p2.y);
	k2 = -(p1.x - p3.x) / (p1.y - p3.y);
	p p12((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
	p p13((p1.x + p3.x) / 2, (p1.y + p3.y) / 2);
	b1 = p12.y - k1 * p12.x;
	b2 = p13.y - k2 * p13.x;
	p p0((b2 - b1) / (k1 - k2), (k1 * b2 - k2 * b1) / (k1 - k2));
	double r = sqrt((p0.x - p1.x) * (p0.x - p1.x) + (p0.y - p1.y) * (p0.y - p1.y));

	double d1 = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	double d2 = sqrt((p1.x - p3.x) * (p1.x - p3.x) + (p1.y - p3.y) * (p1.y - p3.y));


	double O1 = acos(1 - (d1 * d1) / (2 * r * r));
	double O2 = acos(1 - (d2 * d2) / (2 * r * r));
	double O3 = 2 * pi - O1 - O2;

	double O = gcd(O1, gcd(O2, O3));
	double s = r * r * sin(O) * pi / O;
	printf("%.6lf\n", s);
	return 0;
}





















////////////////////////////////////////////////////////////////1373. ������������������ֵ��////////////////////////////////////////////////////////////////////
//https://leetcode.cn/problems/maximum-sum-bst-in-binary-tree/


//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//    int ans = 0;
//    int dfs(TreeNode* root,int& Min,int& Max)
//    {
//        if (!root)
//        {
//            Min = INT_MAX;
//            Max = INT_MIN;
//            return 0;
//        }
//        int lmax, lmin,lsum;
//        lsum=dfs(root->left,lmin,lmax);
//        int rmax, rmin, rsum;
//        rsum = dfs(root->right, rmin, rmax);
//        if (root->val <= lmax || root->val >= rmin)
//        {
//            Min = INT_MIN;
//            Max = INT_MAX;
//            return 0;
//        }
//        int sum = root->val + rsum + lsum;
//        ans = max(ans, sum);
//        Min = min(lmin, root->val);
//        Max = max(rmax, root->val);
//        return sum;
//
//    }
//public:
//    int maxSumBST(TreeNode* root) {
//        int min, max;
//        dfs(root, min, max);
//        return ans;
//    }
//};






////////////////////////////////////////////////////////////////��������////////////////////////////////////////////////////////////////////
//https://leetcode.cn/problems/number-of-islands/
//class Solution {
//public:
//    int numIslands(vector<vector<char>>& grid) {
//        int sum = 0;
//        queue<pair<int,int>> dfs;
//        for (int i = 0; i < grid.size(); ++i)
//        {
//            for (int j = 0; j < grid[i].size(); ++j)
//            {
//                dfs.push(pair<int,int>(i,j));
//                if (grid[i][j] == '1')
//                    ++sum;
//                while (!dfs.empty())
//                {
//                    int _i = dfs.front().first;
//                    int _j = dfs.front().second;
//                    dfs.pop();
//                    if (grid[_i][_j] == '1')
//                    {
//                        grid[_i][_j] = '0';
//                        if (_i < grid.size() - 1 && grid[_i + 1][_j] == '1')
//                            dfs.push(pair<int, int>(_i + 1, _j));
//                        if (_j < grid[_i].size() - 1 && grid[_i][_j+1] == '1')
//                            dfs.push(pair<int, int>(_i, _j + 1));
//                        if (_i > 0 && grid[_i - 1][_j] == '1')
//                            dfs.push(pair<int, int>(_i - 1, _j));
//                        if (_j > 0 && grid[_i][_j - 1] == '1')
//                            dfs.push(pair<int, int>(_i, _j - 1));
//                    }
//                }
//            }
//        }
//        return sum;
//    }
//};
//
//int main()
//{
//    char s1[] = { '1','1','1','0','0' };
//    char s2[] = { '0','1','0','0','0' };
//    char s3[] = { '1','1','1','0','0' };
//    char s4[] = { '0','0','0','1','1' };
//    vector<vector<char>> grid;
//    grid.push_back(vector<char>(s1, s1 + 3));
//    grid.push_back(vector<char>(s2, s2 + 3));
//    grid.push_back(vector<char>(s3, s3 + 3));
//    //grid.push_back(vector<char>(s4, s4 + 5));
//    Solution s;
//    s.numIslands(grid);
//
//    return 0;
//}


////////////////////////////////////////////////////////////////Tic-tac-toe///////////////////////////////////////////////////////////////////
//https://www.luogu.com.cn/problem/CF3C
// vector<string> board(3, string());
//int arr[2][4] = { 0 };
//bool iswin(char a,int index)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (board[0][i] == a && board[1][i] == a && board[2][i] == a)
//			++arr[index][0];
//		if (board[i][0] == a && board[i][1] == a && board[i][2] == a)
//			++arr[index][1];
//	}
//	if (board[0][0] == a && board[1][1] == a && board[2][2] == a)
//		++arr[index][2];
//	if (board[0][2] == a && board[1][1] == a && board[2][0] == a)
//		++arr[index][3];
//	for (int i = 0; i < 4; i++)
//		if (arr[index][i] == 1)
//			return true;
//	return false;
//}
//int main()
//{
//	for (int i = 0; i < 3; i++)
//		cin >> board[i];
//	int A = 0, B = 0;
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			if (board[i][j] == 'X')
//				++A;
//			if (board[i][j] == '0')
//				++B;
//		}
//	}
//	if (B > A || A > B + 1)
//		cout << "illegal";
//	else if (iswin('X',0))
//	{
//		if (A == B || iswin('0', 1))
//			cout << "illegal";
//		else
//			cout << "the first player won";
//	}
//	else if (iswin('0', 1))
//	{
//		if (A == B)
//			cout << "the second player won";
//		else
//			cout << "illegal";
//	}
//	else
//	{
//		if (A == 5 && B == 4)
//			cout << "draw";
//		else if (A == B)
//			cout << "first";
//		else if (A == B + 1)
//			cout << "second";
//	}
//	return 0;
//}





////////////////////////////////////////////////////////////////Lorry///////////////////////////////////////////////////////////////////
//https://codeforces.com/problemset/problem/3/B?csrf_token=52a0fdd1ceae8ffd15e0e4c2afcd255d
//int main()
//{
//	int n, v;
//	cin >> n >> v;
//	long long max = 0;
//	vector<pair<int, int>> one;
//	vector<pair<int, int>> two;
//	for (int i = 0; i < n; ++i)
//	{
//		int p, t;
//		cin >> t >> p;
//		pair<int, int>temp(p, i+1);
//		if (t == 1)
//			one.push_back(temp);
//		else two.push_back(temp);
//	}
//	sort(one.begin(), one.end());
//	sort(two.begin(), two.end());
//	vector<int> goods;
//	int i = one.size() - 1, j = two.size() - 1;
//	if (i >= 0 && v % 2 == 1)
//	{
//		goods.push_back(one[i].second);
//		max += one[i].first;
//		--i;
//		v -= 1;
//	}
//	while (v>1)
//	{
//		if (i < 0 && j < 0)
//			break;
//		if (v >= 2 && j >= 0)
//		{
//			if (i >= 1)
//			{
//				if (one[i].first + one[i - 1].first < two[j].first)
//				{
//					goods.push_back(two[j].second);
//					max += two[j].first;
//					--j;
//					v -= 2;
//				}
//				else if (one[i].first + one[i - 1].first >= two[j].first)
//				{
//					goods.push_back(one[i].second);
//					goods.push_back(one[i - 1].second);
//					max += one[i].first + one[i - 1].first;
//					i -= 2;
//					v -= 2;
//				}
//			}
//			else if (i == 0)
//			{
//				if (one[i].first >= two[j].first)
//				{
//					goods.push_back(one[i].second);
//					max += one[i].first;
//					--i;
//					v -= 1;
//				}
//				else
//				{
//					goods.push_back(two[j].second);
//					max += two[j].first;
//					--j;
//					v -= 2;
//				}
//			}
//			else
//			{
//				goods.push_back(two[j].second);
//				max += two[j].first;
//				--j;
//				v -= 2;
//			}
//		}
//		else if (i >= 0 && v >= 1)
//		{
//			goods.push_back(one[i].second);
//			max += one[i].first;
//			--i;
//			v -= 1;
//		}
//	}
//	cout << max << '\n';
//	for (int i = 0; i < goods.size(); i++)
//	{
//		cout << goods[i] << ' ';
//	}
//	return 0;
//}








////////////////////////////////////////////////////Shortest path of the king////////////////////////////////////////////////////////////
//https://www.luogu.com.cn/problem/CF3A
//int main()
//{
//	char a;
//	int x1, y1, x2, y2;
//	cin >> a >> y1;
//	x1 = a - 96;
//	cin >> a >> y2;
//	x2 = a - 96;
//	int sum = 0;
//	vector<string> path;
//	if (x1 > x2)
//	{
//		while (y1 > y2 && x1 > x2)
//		{
//			path.push_back("LD\n");
//			--y1; --x1; ++sum;
//		}
//		while (y1 > y2)
//		{
//			path.push_back("D\n"); 
//			--y1; ++sum;
//		}
//		while (y1<y2 && x1>x2)
//		{
//			path.push_back("LU\n");
//			++y1; --x1; ++sum;
//		}
//		while (y1 < y2)
//		{
//			path.push_back("U\n"); 
//			++y1; ++sum;
//		}
//		while (x1 > x2)
//		{
//			path.push_back("L\n");
//			--x1; ++sum;
//		}
//	}
//	if (x1 < x2)
//	{
//		while (y1 > y2 && x1 < x2)
//		{
//			path.push_back("RD\n"); 
//			--y1; ++x1; ++sum;
//		}
//		while (y1 > y2)
//		{
//			path.push_back("D\n"); 
//			--y1; ++sum;
//		}
//		while (y1 < y2 && x1 < x2)
//		{
//			path.push_back("RU\n"); 
//			++y1; ++x1; ++sum;
//		}
//		while (y1 < y2)
//		{
//			path.push_back("U\n"); 
//			++y1; ++sum;
//		}
//		while (x1 < x2)
//		{
//			path.push_back("R\n"); 
//			++x1; ++sum;
//		}
//	}
//	if (x1 == x2)
//	{
//		while (y1 > y2)
//		{
//			path.push_back("D\n"); 
//			--y1; ++sum;
//		}
//		while (y1 < y2)
//		{
//			path.push_back("U\n"); 
//			++y1; ++sum;
//		}
//	}
//	cout << sum << '\n';
//	for (int i = 0; i < path.size(); i++)
//	{
//		cout << path[i];
//	}
//	return 0;
//}
/****/
//Geometry
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef complex<ld> pt;
struct line {
	pt P, D; bool S = false;
	line(pt p, pt q, bool b = false) : P(p), D(q - p), S(b) {}
	line(pt p, ld th) : P(p), D(polar((ld)1, th)) {}
};
struct circ { pt C; ld R; };

/**
 * builtin pt operations:
 * +, -: usual vector addition/subtraction
 * *, /: scalar multiplication/division (also complex multiplication / division if that's ever useful)
 * abs(p): vector length
 * norm(p): squared vector length
 * arg(p): angle p forms with positive x axis
 * polar(r, th): vector with length r pointing in direction th
 * conj(p): reflects p over x axis
 */

#define X real()
#define Y imag()
#define CRS(a, b) (conj(a) * (b)).Y //scalar cross product
#define DOT(a, b) (conj(a) * (b)).X //dot product
#define U(p) ((p) / abs(p)) //unit vector in direction of p (don't use if Z(p) == true)
#define Z(x) (abs(x) < EPS)
#define A(a) (a).begin(), (a).end() //shortens sort(), upper_bound(), etc. for vectors

//constants (INF and EPS may need to be modified)
ld PI = acosl(-1), INF = 1e20, EPS = 1e-4;
pt I = {0, 1};

namespace std {
	//lexicographical comparison
	bool operator<(pt a, pt b) { return Z(a.X - b.X) ? a.Y < b.Y : a.X < b.X; }
}

/**
 * GENERAL GEOMETRY FUNCTIONS
 */

//true if d1 and d2 parallel (zero vectors considered parallel to everything)
bool parallel(pt d1, pt d2) { return Z(d1) || Z(d2) || Z(CRS(U(d1), U(d2))); }

//"above" here means if l & p are rotated such that l.D points in the +x direction, then p is above l
bool above_line(pt p, line l) { return CRS(p - l.P, l.D) > 0; }

//true if p is on line l
bool on_line(pt p, line l) { return parallel(l.P - p, l.D) && (!l.S || DOT(l.P - p, l.P + l.D - p) <= EPS); }

//returns 0 for no intersection, 2 for infinite intersections, 1 otherwise. p holds intersection pt
ll intsct(line l1, line l2, pt& p) {
	if(parallel(l1.D, l2.D)) return on_line(l1.P, l2) ? 2 : 0;
	pt q = l1.P + l1.D * CRS(l2.D, l2.P - l1.P) / CRS(l2.D, l1.D);
	if(on_line(q, l1) && on_line(q, l2)) { p = q; return 1; }
	return 0;
}

//closest pt on l to p
pt cl_pt_on_l(pt p, line l) {
	pt q = l.P + DOT(U(l.D), p - l.P) * U(l.D);
	if(on_line(q, l)) return q;
	return abs(p - l.P) < abs(p - l.P - l.D) ? l.P : l.P + l.D;
}

//distance from p to l
ld dist_to(pt p, line l) { return abs(p - cl_pt_on_l(p, l)); }

//p reflected over l
pt refl_pt(pt p, line l) { return conj((p - l.P) / U(l.D)) * U(l.D) + l.P; }

//ray r reflected off l (if no intersection, returns original ray)
line reflect_line(line r, line l) {
	pt p; if(intsct(r, l, p) - 1) return r;
	return line(p, p + INF * (p - refl_pt(r.P, l)), 1);
}

/**
 * TRIANGLE CENTERS
 */

//altitude from p to l
line alt(pt p, line l) { l.S = 0; return line(p, cl_pt_on_l(p, l)); }

//angle bisector of angle abc
line ang_bis(pt a, pt b, pt c) { return line(b, b + INF * (U(a - b) + U(c - b)), 1); }

//perpendicular bisector of l (assumes l.S == 1)
line perp_bis(line l) { return line(l.P + l.D / (ld)2, arg(l.D * I)); }

//orthocenter of triangle abc
pt orthocent(pt a, pt b, pt c) { pt p; intsct(alt(a, line(b, c)), alt(b, line(a, c)), p); return p; }

//incircle of triangle abc
circ incirc(pt a, pt b, pt c) {
	pt cent; intsct(ang_bis(a, b, c), ang_bis(b, a, c), cent);
	return {cent, dist_to(cent, line(a, b))};
}

//circumcircle of triangle abc
circ circumcirc(pt a, pt b, pt c) {
	pt cent; intsct(perp_bis(line(a, b, 1)), perp_bis(line(a, c, 1)), cent);
	return {cent, abs(cent - a)};
}

/**
 * CONVEX HULL
 */

//returns true if p is contained in the convex hull given by hu / hd
bool in_hull(pt p, pair<vector<pt>, vector<pt>>& h) {
	if(Z(p - *h.first.begin()) || Z(p - *h.second.begin())) return false; //change to true if border counts as inside
	if(p < *h.first.begin() || *h.second.begin() < p) return false;
	auto u = upper_bound(A(h.first), p);
	auto d = lower_bound(h.second.rbegin(), h.second.rend(), p);
	return CRS(*u - p, *(u - 1) - p) > EPS && CRS(*(d - 1) - p, *d - p) > EPS; //change to > -EPS if border counts as "inside"
}

//helper function for get_hull
void do_hull(vector<pt>& pts, vector<pt>& h) {
	for(pt p : pts) {
		while(h.size() > 1 && CRS(h.back() - p, h[h.size() - 2] - p) <= EPS)
			h.pop_back();
		h.push_back(p);
	}
}

//returns upper convex hull / lower convex hull of pts
pair<vector<pt>, vector<pt>> get_hull(vector<pt>& pts) {
	vector<pt> hu, hd;
	sort(A(pts)), do_hull(pts, hu);
	reverse(A(pts)), do_hull(pts, hd);
	return {hu, hd};
}

//returns convex hull of pts as a vector of pts in cw order
vector<pt> full_hull(vector<pt>& pts) {
	auto h = get_hull(pts);
	h.first.pop_back(), h.second.pop_back();
	for(pt p : h.second) h.first.push_back(p);
	return h.first;
}

/**
 * DYNAMIC CONVEX HULL
 */

//helper function for dyn_in_hull
bool dyn_in(pt p, set<pt>& h) {
	if(h.empty() || p < *h.begin() || *h.rbegin() < p) return false;
	auto i = h.upper_bound(p), j = i--;
	return CRS(*j - p, *i - p) > EPS; //change to > -EPS if border counts as "inside"
}

//returns true if p contained in dynamic hull hu / hd
bool dyn_in_hull(pt p, pair<set<pt>, set<pt>>& h) { return dyn_in(p, h.first) && dyn_in(-p, h.second); }

//helper function for dyn_add
void fix_bad(set<pt>::iterator i, set<pt>&h, bool l) {
	if(i == --h.begin() || i == h.end()) return;
	pt p = *i; h.erase(p);
	if(!dyn_in(p, h)) h.insert(p);
	else fix_bad(l ? --h.lower_bound(p) : h.upper_bound(p), h, l);
}

//helper function for dyn_add_to_hull
void dyn_add(pt p, set<pt>& h) {
	if(dyn_in(p, h)) return;
	h.insert(p);
	fix_bad(--h.lower_bound(p), h, true);
	fix_bad(h.upper_bound(p), h, false);
}

//adds p to dynamic hull hu / hd
void dyn_add_to_hull(pt p, pair<set<pt>, set<pt>>& h) { dyn_add(p, h.first), dyn_add(-p, h.second); }

//turns dynamic hull h into vector of pts (h is destroyed)
vector<pt> dyn_full_hull(pair<set<pt>, set<pt>>& h) {
	vector<pt> poly;
	h.first.erase(h.first.begin());
	for(pt p : h.first) poly.push_back(p);
	h.second.erase(h.second.begin());
	for(pt p : h.second) poly.push_back(-p);
	return poly;
}

/**
 * GENERAL POLYGONS
 */

//is pt p inside the (not necessarily convex) polygon given by poly
bool in_poly(pt p, vector<pt>& poly) {
	line l = line(p, {INF, INF * PI}, 1);
	bool ans = false;
	pt lst = poly.back(), tmp;
	for(pt q : poly) {
		line s = line(q, lst, 1); lst = q;
		if(on_line(p, s)) return false; //change if border not included
		else if(intsct(l, s, tmp)) ans = !ans;
	}
	return ans;
}

//area of polygon, vertices in order (cw or ccw)
ld area(vector<pt>& poly) {
	ld ans = 0;
	pt lst = poly.back();
	for(pt p : poly) ans += CRS(lst, p), lst = p;
	return abs(ans / 2);
}

//perimeter of polygon, vertices in order (cw or ccw)
ld perim(vector<pt>& poly) {
	ld ans = 0;
	pt lst = poly.back();
	for(pt p : poly) ans += abs(lst - p), lst = p;
	return ans;
}

//centroid of polygon, vertices in order (cw or ccw)
pt centroid(vector<pt>& poly) {
	ld area = 0;
	pt lst = poly.back(), ans = {0, 0};
	for(pt p : poly) {
		area += CRS(lst, p);
		ans += CRS(lst, p) * (lst + p) / (ld)3;
		lst = p;
	}
	return ans / area;
}

/**
 * CIRCLE FUNCTIONS
 */

//vector of intersection pts of two circs (up to 2) (if circles same, returns empty vector)
vector<pt> intsctCC(circ c1, circ c2) {
    pt d = c2.C - c1.C;
    ld d2 = norm(d);
    if(Z(d)) return {}; //concentric
    ld pd = (d2 + c1.R * c1.R - c2.R * c2.R) / 2;
    ld h2 = c1.R * c1.R - pd * pd / d2;
    if(h2 < 0) return {};
    pt p = c1.C + d * pd / d2, h = d * I * sqrtl(h2 / d2);
    if(Z(h)) return {p};
    return {p - h, p + h};
}

//vector of intersection pts of a line and a circ (up to 2)
vector<pt> intsctCL(circ c, line l) {
    vector<pt> v, ans;
    if(Z(dist_to(c.C, line(l.P, l.P + l.D, 0)))) v = {c.C + c.R * U(l.D), c.C - c.R * U(l.D)};
    else v = intsctCC(c, circ{refl_pt(c.C, l), c.R});
	for(pt p : v) if(on_line(p, l)) ans.push_back(p);
    return ans;
}

//external tangents of two circles (negate c2.R for internal tangents)
vector<line> circTangents(circ c1, circ c2) {
	pt d = c2.C - c1.C;
	ld dr = c1.R - c2.R, d2 = norm(d), h2 = d2 - dr * dr;
	if(Z(d2) || h2 < 0) return {};
	vector<line> ans;
	for(ld sg : {-1, 1}) {
		pt u = (d * dr + d * I * sqrt(h2) * sg) / d2;
		ans.push_back(line(c1.C + u * c1.R, c2.C + u * c2.R, 1));
	}
	if(Z(h2)) ans.pop_back();
	return ans;
}

bool nearInt(ld x) {
	ld y = abs(fmodl(x,1));
	if(abs(y) < EPS || abs(y-1) < EPS) return 1;
	return 0;
}

int main() {
    ld x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	pt X1(x1,y1);
	pt X2(x2,y2);
	pt X3(x3,y3);

	line X1X2(X1,X2);
	line X1X3(X1,X3);

	line pX1X2 = perp_bis(X1X2);
	line pX1X3 = perp_bis(X1X3);

	pt center;
	intsct(pX1X2,pX1X3,center);

	ld th1 = arg(X1-center);
	ld th2 = arg(X2-center);
	ld th3 = arg(X3-center);

	ld thX1X2 = min(abs(th1-th2),abs(2*PI-abs(th1-th2)));
	ld thX2X3 = min(abs(th2-th3),abs(2*PI-abs(th2-th3)));
	ld thX3X1 = min(abs(th3-th1),abs(2*PI-abs(th3-th1)));

	ld minTh = min(min(thX1X2,thX2X3),thX3X1);
	ld num = 1.0;
	while((!nearInt(thX1X2*num/minTh) || !nearInt(thX2X3*num/minTh) || !nearInt(thX3X1*num/minTh) || !nearInt(2*PI*num/minTh)) && num < 101) {
		num = num + 1.0;
	}

	ld currTh = minTh/num;
	ld numSides = round(2*PI/currTh);
	ld r = abs(X1-center);
	ld ans = (numSides/2.0)*r*r*sin(currTh);
	cout << fixed << setprecision(6) << ans << '\n';
	return 0;
}
/****/
/*
⣿⣿⣿⣿⣿⣿⡷⣯⢿⣿⣷⣻⢯⣿⡽⣻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠸⣿⣿⣆⠹⣿⣿⢾⣟⣯⣿⣿⣿⣿⣿⣿⣽⣻⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣻⣽⡿⣿⣎⠙⣿⣞⣷⡌⢻⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⡄⠹⣿⣿⡆⠻⣿⣟⣯⡿⣽⡿⣿⣿⣿⣿⣽⡷⣯⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣟⣷⣿⣿⣿⡀⠹⣟⣾⣟⣆⠹⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢠⡘⣿⣿⡄⠉⢿⣿⣽⡷⣿⣻⣿⣿⣿⣿⡝⣷⣯⢿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣯⢿⣾⢿⣿⡄⢄⠘⢿⣞⡿⣧⡈⢷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣧⠘⣿⣷⠈⣦⠙⢿⣽⣷⣻⣽⣿⣿⣿⣿⣌⢿⣯⢿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣟⣯⣿⢿⣿⡆⢸⡷⡈⢻⡽⣷⡷⡄⠻⣽⣿⣿⡿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣏⢰⣯⢷⠈⣿⡆⢹⢷⡌⠻⡾⢋⣱⣯⣿⣿⣿⣿⡆⢻⡿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡎⣿⢾⡿⣿⡆⢸⣽⢻⣄⠹⣷⣟⣿⣄⠹⣟⣿⣿⣟⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⡇⢸⣯⣟⣧⠘⣷⠈⡯⠛⢀⡐⢾⣟⣷⣻⣿⣿⣿⡿⡌⢿⣻⣿⣿
⣿⣿⣿⣿⣿⣿⣧⢸⡿⣟⣿⡇⢸⣯⣟⣮⢧⡈⢿⣞⡿⣦⠘⠏⣹⣿⣽⢿⣿⣿⣿⣿⣯⣿⣿⣿⡇⢸⣿⣿⣾⡆⠹⢀⣠⣾⣟⣷⡈⢿⣞⣯⢿⣿⣿⣿⢷⠘⣯⣿⣿
⣿⣿⣿⣿⣿⣿⣿⡈⣿⢿⣽⡇⠘⠛⠛⠛⠓⠓⠈⠛⠛⠟⠇⢀⢿⣻⣿⣯⢿⣿⣿⣿⣷⢿⣿⣿⠁⣾⣿⣿⣿⣧⡄⠇⣹⣿⣾⣯⣿⡄⠻⣽⣯⢿⣻⣿⣿⡇⢹⣾⣿
⣿⣿⣿⣿⣿⣿⣿⡇⢹⣿⡽⡇⢸⣿⣿⣿⣿⣿⣞⣆⠰⣶⣶⡄⢀⢻⡿⣯⣿⡽⣿⣿⣿⢯⣟⡿⢀⣿⣿⣿⣿⣿⣧⠐⣸⣿⣿⣷⣿⣿⣆⠹⣯⣿⣻⣿⣿⣿⢀⣿⢿
⣿⣿⣿⣿⣿⣿⣿⣿⠘⣯⡿⡇⢸⣿⣿⣿⣿⣿⣿⣿⣧⡈⢿⣳⠘⡄⠻⣿⢾⣽⣟⡿⣿⢯⣿⡇⢸⣿⣿⣿⣿⣿⣿⡀⢾⣿⣿⣿⣿⣿⣿⣆⠹⣾⣷⣻⣿⡿⡇⢸⣿
⣿⣿⣿⣿⣿⣿⣿⣿⡇⢹⣿⠇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠻⡇⢹⣆⠹⣟⣾⣽⣻⣟⣿⣽⠁⣾⣿⣿⣿⣿⣿⣿⣇⣿⣿⠿⠛⠛⠉⠙⠋⢀⠁⢘⣯⣿⣿⣧⠘⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⡈⣿⡃⢼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡙⠌⣿⣆⠘⣿⣞⡿⣞⡿⡞⢠⣿⣿⣿⣿⣿⡿⠛⠉⠁⢀⣀⣠⣤⣤⣶⣶⣶⡆⢻⣽⣞⡿⣷⠈⣿
⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠘⠁⠉⠉⠉⠉⠉⠉⠉⠉⠉⠙⠛⠛⢿⣄⢻⣿⣧⠘⢯⣟⡿⣽⠁⣾⣿⣿⣿⣿⣿⡃⢀⢀⠘⠛⠿⢿⣻⣟⣯⣽⣻⣵⡀⢿⣯⣟⣿⢀⣿
⣿⣿⣿⣟⣿⣿⣿⣿⣶⣶⡆⢀⣿⣾⣿⣾⣷⣿⣶⠿⠚⠉⢀⢀⣤⣿⣷⣿⣿⣷⡈⢿⣻⢃⣼⣿⣿⣿⣿⣻⣿⣿⣿⡶⣦⣤⣄⣀⡀⠉⠛⠛⠷⣯⣳⠈⣾⡽⣾⢀⣿
⣿⢿⣿⣿⣻⣿⣿⣿⣿⣿⡿⠐⣿⣿⣿⣿⠿⠋⠁⢀⢀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣌⣥⣾⡿⣿⣿⣷⣿⣿⢿⣷⣿⣿⣟⣾⣽⣳⢯⣟⣶⣦⣤⡾⣟⣦⠘⣿⢾⡁⢺
⣿⣻⣿⣿⡷⣿⣿⣿⣿⣿⡗⣦⠸⡿⠋⠁⢀⢀⣠⣴⢿⣿⣽⣻⢽⣾⣟⣷⣿⣟⣿⣿⣿⣳⠿⣵⣧⣼⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣽⣳⣯⣿⣿⣿⣽⢀⢷⣻⠄⠘
⣿⢷⣻⣿⣿⣷⣻⣿⣿⣿⡷⠛⣁⢀⣀⣤⣶⣿⣛⡿⣿⣮⣽⡻⣿⣮⣽⣻⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢀⢸⣿⢀⡆
⠸⣟⣯⣿⣿⣷⢿⣽⣿⣿⣷⣿⣷⣆⠹⣿⣶⣯⠿⣿⣶⣟⣻⢿⣷⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢀⣯⣟⢀⡇
⣇⠹⣟⣾⣻⣿⣿⢾⡽⣿⣿⣿⣿⣿⣆⢹⣶⣿⣻⣷⣯⣟⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢀⡿⡇⢸⡇
⣿⣆⠹⣷⡻⣽⣿⣯⢿⣽⣻⣿⣿⣿⣿⣆⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⢸⣿⠇⣼⡇
⡙⠾⣆⠹⣿⣦⠛⣿⢯⣷⢿⡽⣿⣿⣿⣿⣆⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠎⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⢀⣿⣾⣣⡿⡇
⣿⣷⡌⢦⠙⣿⣿⣌⠻⣽⢯⣿⣽⣻⣿⣿⣿⣧⠩⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⢰⢣⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⢀⢀⢿⣞⣷⢿⡇
⣿⣽⣆⠹⣧⠘⣿⣿⡷⣌⠙⢷⣯⡷⣟⣿⣿⣿⣷⡀⡹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣈⠃⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢀⣴⡧⢀⠸⣿⡽⣿⢀
⢻⣽⣿⡄⢻⣷⡈⢿⣿⣿⢧⢀⠙⢿⣻⡾⣽⣻⣿⣿⣄⠌⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⢁⣰⣾⣟⡿⢀⡄⢿⣟⣿⢀
⡄⢿⣿⣷⢀⠹⣟⣆⠻⣿⣿⣆⢀⣀⠉⠻⣿⡽⣯⣿⣿⣷⣈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⢀⣠⠘⣯⣷⣿⡟⢀⢆⠸⣿⡟⢸
⣷⡈⢿⣿⣇⢱⡘⢿⣷⣬⣙⠿⣧⠘⣆⢀⠈⠻⣷⣟⣾⢿⣿⣆⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⣠⡞⢡⣿⢀⣿⣿⣿⠇⡄⢸⡄⢻⡇⣼
⣿⣷⡈⢿⣿⡆⢣⡀⠙⢾⣟⣿⣿⣷⡈⠂⠘⣦⡈⠿⣯⣿⢾⣿⣆⠙⠻⠿⠿⠿⠿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⢋⣠⣾⡟⢠⣿⣿⢀⣿⣿⡟⢠⣿⢈⣧⠘⢠⣿
⣿⣿⣿⣄⠻⣿⡄⢳⡄⢆⡙⠾⣽⣿⣿⣆⡀⢹⡷⣄⠙⢿⣿⡾⣿⣆⢀⡀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⣀⣠⣴⡿⣯⠏⣠⣿⣿⡏⢸⣿⡿⢁⣿⣿⢀⣿⠆⢸⣿
⣿⣿⣿⣿⣦⡙⣿⣆⢻⡌⢿⣶⢤⣉⣙⣿⣷⡀⠙⠽⠷⠄⠹⣿⣟⣿⣆⢙⣋⣤⣤⣤⣄⣀⢀⢀⢀⢀⣾⣿⣟⡷⣯⡿⢃⣼⣿⣿⣿⠇⣼⡟⣡⣿⣿⣿⢀⡿⢠⠈⣿
⣿⣿⣿⣿⣿⣷⣮⣿⣿⣿⡌⠁⢤⣤⣤⣤⣬⣭⣴⣶⣶⣶⣆⠈⢻⣿⣿⣆⢻⣿⣿⣿⣿⣿⣿⣷⣶⣤⣌⣉⡘⠛⠻⠶⣿⣿⣿⣿⡟⣰⣫⣴⣿⣿⣿⣿⠄⣷⣿⣿⣿
*/

#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define forn(i, n) for(int i = 0; i < int(n); i++) 
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

template <class A, class B> ostream& operator << (ostream& out, const pair<A, B> &a) {
	return out << "(" << a.x << ", " << a.y << ")";
}

template <class A> ostream& operator << (ostream& out, const vector<A> &v) {
	out << "[";
	forn(i, sz(v)) {
		if(i) out << ", ";
		out << v[i];
	}
	return out << "]";
}

mt19937 rnd(time(NULL));

const int INF = int(1e9);
const li INF64 = li(1e18);
const int MOD = INF + 7;
const ld EPS = 1e-3;
const ld PI = acos(-1.0);

typedef pair<ld, ld> point;

point a[3];

bool read () {
	if (scanf("%Lf%Lf", &a[0].x, &a[0].y) != 2)
		return false;
	scanf("%Lf%Lf", &a[1].x, &a[1].y);
	scanf("%Lf%Lf", &a[2].x, &a[2].y);
	return true;
}

point operator -(const point &a, const point &b){
	return mp(a.x - b.x, a.y - b.y);
}
 
point operator +(const point &a, const point &b){
	return mp(a.x + b.x, a.y + b.y);
}

struct Line{
	ld A, B, C;
	Line(const point &a, const point &b){
		A = a.y - b.y;
		B = b.x - a.x;
		C = -A * a.x - B * a.y;
	}
};
 
ld det(ld a, ld b, ld c, ld d){
	return a * d - b * c;
}
 
pair<ld, ld> inter(const Line &a, const Line &b){
	ld D = det(a.A, a.B, b.A, b.B);
	ld Dx = det(a.C, a.B, b.C, b.B);
	ld Dy = det(a.A, a.C, b.A, b.C);
	return mp(-Dx / D, -Dy / D);
}

ld dist(const point &a, const point &b){
	return sqrtl(sqr(a.x - b.x) + sqr(a.y - b.y));
}

ld area(const vector<point>& fig) {
	ld res = 0;
	forn(i, sz(fig)){
		point p = i ? fig[i - 1] : fig.back();
		point q = fig[i];
		res += (p.x - q.x) * (p.y + q.y);
	}
	return fabs(res) / 2;
}

void solve() {
	ld A = dist(a[0], a[1]);
	ld B = dist(a[0], a[2]);
	ld C = dist(a[1], a[2]);
	ld p = (A + B + C) / 2;
	ld s = sqrtl(p * (p - A) * (p - B) * (p - C));
	ld d = A * B * C / 4 / s;
	
	point v1 = a[0] + a[1];
	v1 = mp(v1.x / 2, v1.y / 2);
	point v2 = a[0] - a[1];
	v2 = mp(v2.y, -v2.x) + v1;
	point v3 = a[0] + a[2];
	v3 = mp(v3.x / 2, v3.y / 2);
	point v4 = a[0] - a[2];
	v4 = mp(v4.y, -v4.x) + v3;
	point cc = inter(Line(v1, v2), Line(v3, v4));
	
	ld ang2 = atan2l((a[0] - cc).y, (a[0] - cc).x);
	
	ld ans = INF;
	fore(n, 3, 101){
		vector<point> cur(n);
		vector<int> ok(3);
		forn(i, n){
			cur[i] = mp(cosl(2 * PI / n * i + ang2) * d, sinl(2 * PI / n * i + ang2) * d) + cc;
			forn(j, 3) if (dist(cur[i], a[j]) < EPS) ok[j] = 1;
		}
		if (count(all(ok), 1) == 3){
			//cerr << n << endl;
			ans = min(ans, area(cur));
		}
	}
	
	printf("%.15Lf\n", ans);
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	
	int tt = clock();
	
#endif
	
	cerr.precision(15);
	cout.precision(15);
	cerr << fixed;
	cout << fixed;

	while(read()) {	
		solve();
		
#ifdef _DEBUG
	cerr << "TIME = " << clock() - tt << endl;
	tt = clock();
#endif

	}
}
/****/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
typedef vector<vector<int>> vvi;
typedef pair<long long,long long> pll;
#define all(a) (a).begin(),(a).end()
#define F first
#define S second
#define PB push_back
#define sz(a) (int)((a).size())
#define google_cout cout<<"Case #"<<_<<": "
void show_(int x) { cerr << x; }
void show_(double x) { cerr << x; }
void show_(long double x) { cerr << x; }
void show_(float x) { cerr << x; }
void show_(long long x) { cerr << x; }
void show_(char x) { cerr << x; }
void show_(string x) { cerr << x; }
void show_(bool x) { cerr << (x ? 'T' : 'F'); }
void show_(vector<int> v) { cerr << "[ "; for (auto x : v) { show_(x); cerr << ", "; } cerr << " ]"; }
void show_(vector<char> v) { cerr << "[ "; for (auto x : v) { show_(x); cerr << ", "; } cerr << " ]"; }
void show_(vector<bool> v) { cerr << "[ "; for (auto x : v) { show_(x); cerr << ", "; } cerr << " ]"; }
void show_(vector<float> v) { cerr << "[ "; for (auto x : v) { show_(x); cerr << ", "; } cerr << " ]"; }
void show_(vector<double> v) { cerr << "[ "; for (auto x : v) { show_(x); cerr << ", "; } cerr << " ]"; }
void show_(vector<long long> v) { cerr << "[ "; for (auto x : v) { show_(x); cerr << ", "; } cerr << " ]"; }
void show_(vector<string> v) { cerr << "[ "; for (auto x : v) { show_(x); cerr << ", "; } cerr << " ]"; }
template<class T,class V> void show_(pair<T,V> p);
template<class T,class V> void show_(vector<pair<T,V>> v);
template<class T> void show_(vector<vector<T>> x);
template<class T> void show_(set<T> s);
template<class T,class V> void show_(map<T,V> s);
template<class T,class V> void show_(pair<T,V> p) { cerr << "{ "; show_(p.F); cerr << ", "; show_(p.S); cerr << " }"; }
template<class T,class V> void show_(vector<pair<T,V>> v) { cerr << "[ "; for (auto x : v) { show_(x); cerr << ", "; } cerr << " ]"; }
template<class T> void show_(vector<vector<T>> x) { cerr << '\n';for (vector<T> i : x) { cerr << "\t[ ";for (T j : i) { show_(j);cerr << ", "; }cerr << "]\n"; } }
template<class T> void show_(set<T> s) { cerr << "[ "; for (auto x : s) { show_(x); cerr << ", "; } cerr << " ]"; }
template<class T,class V> void show_(map<T,V> s) { cerr << "[ "; for (auto x : s) { show_(x); cerr << ", "; } cerr << " ]"; }
void fast()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("dbg.txt","w",stderr);
#define debug(x) cerr<<#x<<" = "; show_(x); cerr<<"\n";
#define PRINT_TIME_TAKEN double EXECUTION_TIME = (double)(clock() - ___) / CLOCKS_PER_SEC; debug(EXECUTION_TIME);
#else
#define debug(x)
#define PRINT_TIME_TAKEN
#endif
}
clock_t ___ = clock();
const long long MOD = 1e9 + 7;
const double PI = 3.14159265358979323846;
const long long INF = LLONG_MAX;
int __ = 1;
class point
{
public:
    long double x,y;
};
bool equal(long double a,long double b)
{
    max((long double)1,b);
    return abs((a - b) / max((long double)1,b)) < 1e-4;
}
int func(long double v)
{
    int v1 = (int)(v);
    int v2 = v1 + 1;
    if(abs(v-v1) < abs(v  - v2)) return v1;
    return v2;
}
int main()
{
    fast();
    // cin>>__;
    cout<<fixed<<setprecision(6);
    cerr<<fixed<<setprecision(20)<<"\n";
    for (int _ = 1;_ <= __;_++)
    {
        point p1,p2,p3;
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;


        // p1.x *= 1e9;
        // p1.y *= 1e9;
        // p2.x *= 1e9;
        // p2.y *= 1e9;
        // p3.x *= 1e9;
        // p3.y *= 1e9;



        vector<pair<point,point>> mat;
        if (!equal(p1.y , p3.y) && !equal(p2.y , p3.y)) mat = { {p1,p3}, {p2,p3} };
        else if (!equal(p1.y , p2.y) && !equal(p3.y , p2.y)) mat = { {p1,p2}, {p3,p2} };
        else if (!equal(p1.y , p3.y) && !equal(p2.y , p1.y)) mat = { {p1,p3}, {p2,p1} };


    
        if (equal(mat[0].F.x, mat[0].S.x)) reverse(all(mat));

        for(auto temp:mat)
        {
            debug(temp.F.x);
            debug(temp.F.y);
            debug(temp.S.x);
            debug(temp.S.y);
        }



        long double m1 = (mat[0].S.y - mat[0].F.y) / (mat[0].S.x - mat[0].F.x);
        long double m2_1 = (mat[1].S.x - mat[1].F.x) / (mat[1].S.y - mat[1].F.y);

        debug(m1);
        debug(m2_1);



        long double Y1 = (mat[0].F.y + mat[0].S.y) / 2;
        long double Y2 = (mat[1].F.y + mat[1].S.y) / 2;

        long double X1 = (mat[0].F.x + mat[0].S.x) / 2;
        long double X2 = (mat[1].F.x + mat[1].S.x) / 2;

        long double x_val = (X1 - m1 * m2_1 * X2 - m1 * (Y2 - Y1)) / (1 - m1 * m2_1);
        long double y_val = Y1 - (x_val - X1) / m1;
        debug(X1);
        debug(Y1);
        debug(m1);
        // x_val/=2;
        // y_val/=2;

        debug(x_val);
        debug(y_val);


        long double a1 = 0,a2 = 0,a3 = 0;


        if (equal(p1.x , x_val))
        {
            if ((p1.y - y_val) < 0) a1 = -PI / 2;
            else a1 = PI / 2;
        }
        else a1 = atan2((p1.y - y_val) , (p1.x - x_val));

        debug((p1.y - y_val));
        debug((p1.x - x_val));
        debug((p1.y - y_val) / (p1.x - x_val));

        if (equal(p2.x , x_val))
        {
            if ((p2.y - y_val) < 0) a2 = -PI / 2;
            else a2 = PI / 2;
        }
        else a2 = atan2((p2.y - y_val) , (p2.x - x_val));


        if (equal(p3.x , x_val))
        {
            if ((p3.y - y_val) < 0) a3 = -PI / 2;
            else a3 = PI / 2;
        }
        else a3 = atan2((p3.y - y_val) , (p3.x - x_val));


        // if (p1.y >= y_val && p1.x < x_val) a1 = PI + a1;
        // else if (p1.y <= y_val && p1.x < x_val) a1 = PI + a1;
        // else if (p1.y <= y_val && p1.x > x_val) a1 = 2 * PI + a1;

        // if (p2.y >= y_val && p2.x < x_val) a2 = PI + a2;
        // else if (p2.y <= y_val && p2.x < x_val) a2 = PI + a2;
        // else if (p2.y <= y_val && p2.x > x_val) a2 = 2 * PI + a2;

        // if (p3.y >= y_val && p3.x < x_val) a3 = PI + a3;
        // else if (p3.y <= y_val && p3.x < x_val) a3 = PI + a3;
        // else if (p3.y <= y_val && p3.x > x_val) a3 = 2 * PI + a3;



        long double d1 = fabs(a1 - a3);
        long double d2 = fabs(a1 - a2);
        long double d3 = fabs(a3 - a2);



        debug(a1);
        debug(a2);
        debug(a3);

        debug(d1);
        debug(d2);
        debug(d3);

        long double phi;

        long double r2 = (p1.x * p1.x) + (x_val * x_val) - 2 * p1.x * x_val + (p1.y * p1.y) - 2 * p1.y * y_val + (y_val * y_val);
        for (int i = 3;i <= 100;i++)
        {
            debug(i);
            bool ok = true;
            if (!(abs(cos(d1 * i) - 1) < 1e-6)) ok = false;
            if (!(abs(cos(d2 * i) - 1) < 1e-6)) ok = false;
            if (!(abs(cos(d3 * i) - 1) < 1e-6)) ok = false;
            phi = (2 * PI) / i;
            debug(abs(cos(d1* i) - 1));
            debug(abs(cos(d2* i) - 1));
            debug(abs(cos(d3 * i) - 1));

            debug(abs(sin(d1 * i)));
            debug(abs(sin(d2 * i)));
            debug(abs(sin(d3 * i)));


            debug(PI * r2 * sin(phi) / phi);
            if(ok)
            {
                break;
            }
        }

        // r2/=1e18;
        // for(int i=3;i<=100;i++)
        // {
        //     debug(i);
        //     // phi =  (2*PI )/ i;
        //     long double t1 = (alpha * i)/(2 * PI);
        //     int t2 = (int)(t1);
        //     debug(t1);
        //     debug(t2);
        //     int cnt = 0;
        //     if((abs(t1-t2) < 1e-2 && t2<=i) || (abs(t1-(t2 + 1)) < 1e-2  && (t2 + 1)<=i)) cnt++;
        //     debug(cnt);
        //     t1 = (theta * i)/(2 * PI);
        //     t2 = (int)(t1);
        //     debug(t1);
        //     debug(t2);
        //     if ((abs(t1 - t2) < 1e-2 && t2 <= i) || (abs(t1 - (t2 + 1)) < 1e-2 && (t2 + 1) <= i)) cnt++;
        //     debug(cnt);
        //     debug(PI * r2 * sin(phi) / phi);
        //     if(2==cnt)
        //     {
        //         debug(i);
        //         break;
        //     }
        // }

        debug(phi);






        long double ans = PI * r2 * sin(phi) / phi;

        debug(r2);
        debug(phi);
        debug(ans);

        cout << ans << "\n";




    }
    PRINT_TIME_TAKEN;
    return 0;
}
/****/
    #include<iostream>
    #include<cstdio>
    #include<cstring>
    #include<algorithm>
    #include<string>
    #include<vector>
    #include<queue>
    #include<set>
    #include<map>
    #include<stack>
    #include<cmath>
    #define mst(ss,b) memset((ss),(b),sizeof(ss))
    #define maxn 0x3f3f3f3f
    using namespace std;
    const double eps=1e-4;
    const double pi=acos(-1.0);
    struct point {
        double x,y;
        point(double x=0,double y=0):x(x),y(y) {}
    };
    typedef point vec;
    int dcmp(double x) {
        if(fabs(x)<=eps) return 0;
        return x<0?-1:1;
    }
    vec operator + (point a,point b) {
        return vec(a.x+b.x,a.y+b.y);
    }
    vec operator - (point a,point b) {
        return vec(a.x-b.x,a.y-b.y);
    }
    vec operator * (point a,double t) {
        return point(a.x*t,a.y*t);
    }
    vec operator / (point a,double t) {
        return point(a.x/t,a.y/t);
    }
    double dot(vec a,vec b) {
        return a.x*b.x+a.y*b.y;
    }
    double cross(vec a,vec b) {
        return a.x*b.y-a.y*b.x;
    }
    double lentgh(vec a) {
        return sqrt(dot(a,a));
    }
    vec normal(vec a) {
        double L=lentgh(a);
        return vec(-a.y/L,a.x/L);
    }
    bool operator == (const point &a,const point &b) {
        return dcmp(a.x-b.x)==0 && dcmp(a.y-b.y)==0;
    }
    double disn(point a,point b) {
        return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    }
    vec Rotate(vec a,double rad) {
        return vec(a.x*cos(rad)-a.y*sin(rad),a.x*sin(rad)+a.y*cos(rad));
        /* a为逆时针旋转的角 */
    }
    double DotToSeg(point p,point a,point b) {
        if(a==b) return lentgh(p-a);
        vec v1=b-a;
        vec v2=p-a;
        vec v3=p-b;
        if(dcmp(dot(v1,v2))<0)
            return lentgh(v2);
        else if(dcmp(dot(v1,v3))>0)
            return lentgh(v3);
        else
            return fabs(cross(v1,v2))/lentgh(v1);
        /*点到线段的距离*/
    }
    struct line {
        point p;
        vec v;
        double ang;
        line() {}
        line(point p,vec v):p(p),v(v) {
            ang=atan2(v.y,v.x);
        }
        bool operator < (const line &l) const {
            return ang<l.ang;
        }
    };
    bool onleft(line l,point p) {
        return cross(l.v,p-l.p)>=0;  ///等号指交点可以在直线上
    }
    point GetLineIntersection(line a,line b) {
        vec u=a.p-b.p;
        double t=cross(b.v,u)/cross(a.v,b.v);
        return a.p+a.v*t;
    }
    double polyarea(point p[],int n) {
        double area=0;
        for(int i=1; i<n-1; i++) {
            area+=cross(p[i]-p[0],p[i+1]-p[0]);
        }
        return area/2;
    }
    struct circle {
        point c;
        double r;
        circle() {}
        circle(point c,double r):c(c),r(r) {}
        point po(double a) {
            return point(c.x+cos(a)*r,c.y+sin(a)*r);
        }
    } ;
    double NormalizeAngle(double rad, double center = pi) {
        return rad - 2*pi * floor((rad + pi - center) / (2*pi));
        /*12象限为正角度  34象限为负角度  方便排序*/
    }
    int getlinecircleintersection(line L,circle C,double &t1,double &t2,vector<point> &sol) {
        double a=L.v.x;
        double b=L.p.x-C.c.x;
        double c=L.v.y;
        double d=L.p.y-C.c.y;
        double e=a*a+c*c;
        double f=2*(a*b+c*d);
        double g=b*b+d*d-C.r*C.r;
        double delta=f*f-4*e*g;///判别式
        if(dcmp(delta)<0) return 0; ///相离
        if(dcmp(delta)==0) { ///相切
            t1=t2=-f/(2*e);
            sol.push_back(C.po(t1));
            return 1;
        }
        t1=(-f-sqrt(delta))/(2*e);
        sol.push_back(C.po(t1));
        t2=(-f+sqrt(delta))/(2*e);
        sol.push_back(C.po(t2));
        return 2;
        /*  直线与圆的交点 */
    }
    double angle(vec v) { ///向量极角
        return atan2(v.y,v.x);
    }
    int getciclecircleintersection(circle c1,circle c2,vector<point> &sol) {
        double d=lentgh(c1.c-c2.c);
        if(dcmp(d)==0) {
            if(dcmp(c1.r-c2.r)==0) return -1;///两圆重合
            return 0;
        }
        if(dcmp(c1.r+c2.r-d)<0) return 0;///相离
        if(dcmp(fabs(c1.r-c2.r)-d)>0) return 0;///内含
        double a=angle(c2.c-c1.c);
        double da=acos((c1.r*c1.r+d*d-c2.r*c2.r)/(2*c1.r*d));///c1c2到c1p1的角
        point p1=c1.po(a-da);
        point p2=c1.po(a+da);
        sol.push_back(p1);
        if(p1==p2) return 1;
        sol.push_back(p2);
        return 2;
        /*两圆的交点*/
    }
    int gettangengts(point p,circle C,vec *v) {
        vec u=C.c-p;
        double dist=lentgh(u);
        if(dist<C.r) return 0;
        else if(dcmp(dist-C.r)==0) {
            v[0]=Rotate(u,pi/2);
            return 1;
        } else {
            double ang=asin(C.r/dist);
            v[0]=Rotate(u,-ang);
            v[1]=Rotate(u,ang);
            return 2;
        }
        /* 过点p到圆c的切线 v[i]是第i条切线的向量  返回切线条数*/
    }
    double InscribedCircle(point &p1, point &p2, point &p3, point &c) {
        double A=lentgh(p2-p3), B=lentgh(p3-p1), C=lentgh(p1-p2);
        c=(p1*A+p2*B+p3*C)/(A+B+C);
        return DotToSeg(c,p1,p2);
    }   /* 求三角形内切圆,圆心为c,返回值为半径(需满足三点不共线) */
    double CircumscribedCircle(point &p1, point &p2, point &p3, point &c) {
        point B=p2-p1, C=p3-p1;
        double S=(cross(B,C))*2.0;
        c.x=(C.y*(B.x*B.x+B.y*B.y)-B.y*(C.x*C.x+C.y*C.y))/S+p1.x;
        c.y=(B.x*(C.x*C.x+C.y*C.y)-C.x*(B.x*B.x+B.y*B.y))/S+p1.y;
        return lentgh(c-p1);
    }   /* 求三角形外切圆,圆心为c,返回值为半径(需满足三点不共线) */
    int getcirclesTangents(circle A,circle B,point *a,point *b) {
        int cnt=0;
        /*假定r1>=r2*/
        if(A.r<B.r) {
            swap(A,B);
            swap(a,b);  //  有时需标记
        }
        long double d=lentgh(A.c-B.c);
        long double rdiff=A.r-B.r;
        long double rsum=A.r+B.r;
        if(dcmp(d-rdiff)<0)  return 0;   // 内含
        long double base=angle(B.c-A.c);
        if(dcmp(d)==0&&dcmp(rdiff)==0)   return -1 ;  // 重合 无穷多条切线
        if(dcmp(d-rdiff)==0) {           // 内切   外公切线
            a[cnt]=A.po(base);
            b[cnt]=B.po(base);
            cnt++;
            return 1;
        }/*有外公切线的情形*/
        long double ang=acos(rdiff/d);
        a[cnt]=A.po(base+ang);
        b[cnt]=B.po(base+ang);
        cnt++;
        a[cnt]=A.po(base-ang);
        b[cnt]=B.po(base-ang);
        cnt++;
        if(dcmp(d-rsum)==0) {   // 外切 有内公切线
            a[cnt]=A.po(base);
            b[cnt]=B.po(base+pi);
            cnt++;
        } else if(dcmp(d-rsum)>0) { // 外离   又有两条外公切线
            long double  ang_in=acos(rsum/d);
            a[cnt]=A.po(base+ang_in);
            b[cnt]=B.po(base+ang_in+pi);
            cnt++;
            a[cnt]=A.po(base-ang_in);
            b[cnt]=B.po(base-ang_in+pi);
            cnt++;
        }
        return cnt;
        /*
            两圆的公切线
            a[i]和b[i]分别是第i条切线在圆A和圆B上的切点
        */
    }
    double gcd(double x,double y) {
        return y>eps ? gcd(y,x-floor(x/y)*y):x;
    }
    int main() {
        point p1,p2,p3;
        circle Cir;
        scanf("%lf%lf",&p1.x,&p1.y);
        scanf("%lf%lf",&p2.x,&p2.y);
        scanf("%lf%lf",&p3.x,&p3.y);
        ///Cir.r=CircumscribedCircle(p1,p2,p3,Cir.c);
        double a=disn(p2,p3);
        double b=disn(p1,p3);
        double c=disn(p1,p2);
        double p=(a+b+c)/2;
        double s=sqrt(p*(p-a)*(p-b)*(p-c));
        double r=(a*b*c)/(4*s);
        double A=acos((b*b+c*c-a*a)/(2*b*c));
        double B=acos((a*a+c*c-b*b)/(2*a*c));
        double C=acos((a*a+b*b-c*c)/(2*a*b));
        double n=pi/gcd(A,gcd(B,C));
        printf("%.11f\n",r*r*sin(2*pi/n)*n/2);
        return 0;
    }
    /****/
//  zukonit14 - Kunal Raut

#include<bits/stdc++.h>
using namespace std;

// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// using namespace __gnu_pbds;

// template<class T>
// using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

// template<class key, class value, class cmp = std::less<key>>
// using omap = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;

/*/-----------------------------DEFINES----------------------------------/*/

#define ll                  long long
#define ld                  long double
#define pb                  push_back
#define mp                  make_pair
#define fi                  first
#define se                  second
#define all(v)              v.begin(), v.end()
#define allr(v)             v.rbegin(), v.rend()
#define ms(s, n)            memset(s, n, sizeof(s))
#define prec(n)             fixed<<setprecision(n)
#define forci(p,n)          for(ll i=p;i<(ll)n;i++)
#define forcj(p,n)          for(ll j=p;j<(ll)n;j++)
#define forc(i,p,n)            for(ll i=p;i<(ll)n;i++)
#define bolt                ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define bits(a)             __builtin_popcountll(a)
#define djokovic            freopen("input00.txt", "r", stdin);freopen("output00.txt", "w", stdout);
#define inrange(i,a,b)      ((i>=min(a,b)) && (i<=max(a,b)))
#define sz(a)               (ll)a.size()
#define sum(a)              ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)             (*min_element((a).begin(), (a).end()))
#define maxe(a)             (*max_element((a).begin(), (a).end()))
#define mini(a)             ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)             ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x)          ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x)          ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
clock_t time_p              = clock();
void rtime()                {time_p = clock() - time_p; cout << "\nTime Taken : " << fixed << (float)(time_p) / CLOCKS_PER_SEC << "s\n";}


/*/-----------------------------INLINE FUNCTIONS----------------------------------/*/

inline ll gcd(ll a, ll b)          {if (b == 0) return a;    return gcd(b, a % b);}
inline ll lcm(ll a, ll b)          {return (a / gcd(a, b) * b);}
inline bool isprime(ll n)            {ll i; for (i = 2; i <= sqrt(n); i++) {if (n % i == 0)return false;} return true;}
inline ll ceil(ll num, ll den)      {return ((num + den - 1) / den);}

/*/-----------------------------TRACE FUNCTIONS----------------------------------/*/

template<class T> ostream& operator<<(ostream &os, string V) {
    os << "[ ";
    for (auto v : V) os << v << " ";
    return os << "]";
}
template<class T> ostream& operator<<(ostream &os, vector<T> V) {
    os << "[ ";
    for (auto v : V) os << v << " ";
    return os << "]";
}
template<class T> ostream& operator<<(ostream &os, set<T> S) {
    os << "{ ";
    for (auto s : S) os << s << " ";
    return os << "}";
}
template<class T> ostream& operator<<(ostream &os, multiset<T> S) {
    os << "{ ";
    for (auto s : S) os << s << " ";
    return os << "}";
}
template<class T, class T1> ostream& operator<<(ostream &os, map<T, T1> S) {
    os << "{ ";
    for (auto s : S) os << "(" << s.first << "," << s.second << ") ";
    return os << "}";
}
template<class L, class R> ostream& operator<<(ostream &os, pair<L, R> P) {
    return os << "(" << P.first << "," << P.second << ")";
}
#define tracearr(a,n)  {cout << #a<<" : ";cout<<"[ ";for (ll i = 0; i < n; i++) cout << a[i] << " ";cout << "]\n";}
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif

/*/-----------------------------MODULAR ARITHMETIC----------------------------------/*/

// const ll modx = 1e9 + 7;
const ll modx = 998244353;
const ll mod = modx;
inline ll add(ll x, ll y, ll mod = modx) {
    x += y;
    if (x >= mod) return x - mod;
    return x % mod;
}
inline ll sub(ll x, ll y, ll mod = modx) {
    x -= y;
    if (x < 0) return x + mod;
    return x;
}
inline ll mul(ll x, ll y, ll mod = modx) {
    return (x * 1ll * y) % mod;
}
inline ll expo(ll x, ll y, ll mod = modx) {
    ll ans = 1;
    while (y) {
        if (y & 1) ans = mul(ans, x, mod);
        x = mul(x, x, mod);
        y >>= 1;
    }
    return ans % mod;
}
inline ll inv(ll x, ll mod = modx) {
    return expo(x, mod - 2, mod);
}
/*/-----------------------------CODE BEGINS----------------------------------/*/
ll rr[] = {0, 1, 1, 1, 0, -1, -1, -1};
ll cc[] = {1, 1, 0, -1, -1, -1, 0, 1};  //x-y -> URDL , row-column -> RDLU; 0-based;

const ll MAXN = 3e5 + 100, MAX2N = 2e3 + 10, LG = 31, INF = 2e18;
const ll N = MAXN;
ll n, m, k, x, q, y, z, a[MAXN], b[MAXN];
double gcd(double x, double y) {
    return fabs(y) < 1e-4 ? x : gcd(y, fmod(x, y));
}
void solve()
{
    double pi = acos(-1);
    double a[2], b[2], c[2];
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1];

    double a1 = sqrt((c[0] - b[0]) * (c[0] - b[0]) + (c[1] - b[1]) * (c[1] - b[1]));
    double b1 = sqrt((a[0] - c[0]) * (a[0] - c[0]) + (a[1] - c[1]) * (a[1] - c[1]));
    double c1 = sqrt((a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]));

    // length of all the segments;
    double A = acos((b1 * b1 + c1 * c1 - a1 * a1) / (2.0 * b1 * c1));
    double B = acos((a1 * a1 + c1 * c1 - b1 * b1) / (2.0 * a1 * c1));
    double C = acos((b1 * b1 + a1 * a1 - c1 * c1) / (2.0 * b1 * a1));

    // semiperimeter and radius of circumcenter;
    double s = (a[0] * (b[1] - c[1]) + b[0] * (c[1] - a[1]) + c[0] * (a[1] - b[1])) / 2.0;
    double r = a1 * b1 * c1 / (4 * s);

    // n can be found out using angles and their gcd smallest possible angle of which these are multiple of;
    // and finding area accordingly to the formula using n;
    double n = pi / gcd(gcd(A, B), C);
    double area = n / 2 * r * r * sin(2.0 * pi / n);

    cout << prec(10) << area << "\n";
}
signed main()
{
    bolt;
#ifndef ONLINE_JUDGE
    djokovic;
#endif
    ll t;
    t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }
    //rtime();
}
/****/
#include<bits/stdc++.h>

using namespace std;
#define endl '\n'
#define dtype long long
#define pi acos(-1.0)
#define dtor(x)  (pi*x)/180.0
#define rtod(x)  (x*180.0)/pi
typedef double T;

struct pt {
    T x, y;

    pt operator+(pt p) { return {x + p.x, y + p.y}; }

    pt operator-(pt p) { return {x - p.x, y - p.y}; }

    pt operator*(T d) { return {x * d, y * d}; }

    pt operator/(T d) { return {x / d, y / d}; } // only for floatingpoint



};

pt translate(pt v, pt p) { return p + v; }

pt rot(pt p, double a) {
    return {p.x * cos(a) - p.y * sin(a), p.x * sin(a) + p.y * cos(a)};
}

T sq(pt p) { return p.x * p.x + p.y * p.y; }

double abs(pt p) { return sqrt(sq(p)); }

bool operator==(pt a, pt b) { return a.x == b.x && a.y == b.y; }

bool operator!=(pt a, pt b) { return !(a == b); }

T dot(pt v, pt w) { return v.x * w.x + v.y * w.y; }

T cross(pt v, pt w) { return v.x * w.y - v.y * w.x; }

T orient(pt a, pt b, pt c) { return cross(b - a, c - a); }

//left turn,collinear, right turn = orient(A, B, C) > 0, orient(A, B, C) = 0, orient(A, B,C)<0
pt perp(pt p) { return {-p.y, p.x}; }

double angle(pt v, pt w) {
    return acos(clamp(dot(v, w) / abs(v) / abs(w), -1.0, 1.0));
}

bool isConvex(vector<pt> p) {
    bool hasPos = false, hasNeg = false;
    for (int i = 0, n = p.size(); i < n; i++) {
        int o = orient(p[i], p[(i + 1) % n], p[(i + 2) % n]);
        if (o > 0) hasPos = true;
        if (o < 0) hasNeg = true;
    }
    return !(hasPos && hasNeg);
}

bool half(pt p) { // true if in blue half
    assert(p.x != 0 || p.y != 0); // the argument of (0,0) isundefined
    return p.y > 0 || (p.y == 0 && p.x < 0);
}

void polarSort(vector<pt> &v) {
    sort(v.begin(), v.end(), [](pt v, pt w) {
        return make_tuple(half(v), 0, sq(v)) <
               make_tuple(half(w), cross(v, w), sq(w));
    });
}

//We can perform a polar sort around some point O other than the
//        origin: we just have to subtract that point O from the vectors #»v and
//#»w when comparing them. This as if we translated the whole plane so
//that O is moved to (0, 0):
//void polarSortAround(p
struct line {
    pt v;
    T c;

// From direction vector v and offset c
    line(pt v, T c) : v(v), c(c) {}

// From equation ax+by=c
    line(T a, T b, T c) : v({b, -a}), c(c) {}

// From points P and Q
    line(pt p, pt q) : v(q - p), c(cross(v, p)) {}

// Will be defined later:
// - these work with T = int
    T side(pt p) { return cross(v, p) - c; }

    double dist(pt p) { return abs(side(p)) / abs(v); }

    line perpThrough(pt p) { return {p, p + perp(v)}; }

    bool cmpProj(pt p, pt q) {
        return dot(v, p) < dot(v, q);
    }

    line translate(pt t) { return {v, c + cross(v, t)}; }

    // - these require T = double

    line shiftLeft(double dist) { return {v, c + dist * abs(v)}; }

    pt proj(pt p) { return p - perp(v) * side(p) / sq(v); }

    pt refl(pt p) { return p - perp(v) * 2 * side(p) / sq(v); }

};

//    There is a unique intersection point between two lines l1 and l2 if and only
//    if # »vl1 × # »vl2 != 0
bool inter(line l1, line l2, pt &out) {
    T d = cross(l1.v, l2.v);
    if (d == 0) return false;
    out = (l2.v * l1.c - l1.v * l2.c) / d; // requires floating-pointcoordinates
    return true;
}

bool inDisk(pt a, pt b, pt p) {
    return dot(a - p, b - p) <= 0;
}

bool onSegment(pt a, pt b, pt p) {
    return orient(a, b, p) == 0 && inDisk(a, b, p);
}

bool properInter(pt a, pt b, pt c, pt d, pt &out) {
    double oa = orient(c, d, a),
            ob = orient(c, d, b),
            oc = orient(a, b, c),
            od = orient(a, b, d);
// Proper intersection exists iff opposite signs
    if (oa * ob < 0 && oc * od < 0) {
        out = (a * ob - b * oa) / (ob - oa);
        return true;
    }
    return false;
}

//    Segment-point distance
double segPoint(pt a, pt b, pt p) {
    if (a != b) {
        line l(a, b);
        if (l.cmpProj(a, p) && l.cmpProj(p, b)) // if closest toprojection
            return l.dist(p); // output distance toline
    }
    return min(abs(p - a), abs(p - b)); // otherwise distance to A or B
}

// Segment-segment distance
double segSeg(pt a, pt b, pt c, pt d) {
    pt dummy;
    if (properInter(a, b, c, d, dummy))
        return 0;
    return min({segPoint(a, b, c), segPoint(a, b, d),
                segPoint(c, d, a), segPoint(c, d, b)});
}

double areaPolygon(vector<pt> p) {
    double area = 0.0;
    for (int i = 0, n = p.size(); i < n; i++) {
        area += cross(p[i], p[(i + 1) % n]); // wrap back to 0 if i == n-1
    }
    return abs(area) / 2.0;
}

bool above(pt a, pt p) {
    return p.y >= a.y;
}

// check if [PQ] crosses ray from A
bool crossesRay(pt a, pt p, pt q) {
    return (above(a, q) - above(a, p)) * orient(a, p, q) > 0;
}

bool inPolygon(vector<pt> p, pt a, bool strict = true) {
    int numCrossings = 0;
    for (int i = 0, n = p.size(); i < n; i++) {
        if (onSegment(p[i], p[(i + 1) % n], a))
            return !strict;
        numCrossings += crossesRay(a, p[i], p[(i + 1) % n]);
    }
    return numCrossings & 1; // inside if odd number of crossings
}

const double ERR = 0.01;

bool feq(double a, double b) {
    return fabs(a - b) < ERR;
}

double fgcd(double a, double b) {
    if (feq(a, 0)) return b;
    if (feq(b, 0)) return a;
    return fgcd(b, fmod(a, b));
}

void solve() {
    pt a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    line l1(a, b), l2(a, c);
    line p1 = l1.perpThrough((a + b) / 2), p2 = l2.perpThrough((a + c) / 2);
    pt o;
    inter(p1, p2, o);

    double thita1 = 2 * atan2(abs(a - (a + b) / 2), abs(o - (a + b) / 2));
    double thita2 = 2 * atan2(abs(a - (a + c) / 2), abs(o - (a + c) / 2));
    double thita3 = 2 *pi- thita1-thita2;  // here found a problem ,    double thita3 = 2 * atan2(abs(b - (c + b) / 2), abs(o - (b + c) / 2)) ,double thita3 = 2 *pi- thita1-thita2;
    double g = fgcd(thita1, fgcd(thita2, thita3));
    double m = 2*pi / g;
    cout << fixed << setprecision(7) << m * abs(a - o) * abs(a - o) * sin(g/2)*cos(g/2)<< endl;


}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    solve();
    return 0;
}
// WIP

#include <bits/stdc++.h>
using namespace std;

#define ALL(X) (X).begin(), (X).end()
#define FOR(I, X, Y) for (int I = (X); I < (Y); I++)
using ll = int64_t;
using ull = uint64_t;
namespace std {
template<class ...Ts>        istream& operator>>(istream& i,       tuple<Ts...>& x) { apply([&](auto&&... ys){ ((i >> ys), ...); }, x); return i; }
template<class ...Ts>        ostream& operator<<(ostream& o, const tuple<Ts...>& x) { o << "("; auto s = ""; apply([&](auto&&... y){ ((o << s << y, s = ", "), ...); }, x); return o << ")"; }
template<class T1, class T2> istream& operator>>(istream& i,       pair<T1, T2>& x) { return i >> tie(x.first, x.second); }
template<class T1, class T2> ostream& operator<<(ostream& o, const pair<T1, T2>& x) { return o << tie(x.first, x.second); }
template<class T, class = decltype(begin(declval<T>())), class = enable_if_t<!is_same<T, string>::value>>
istream& operator>>(istream& i,       T& x) { for (auto& y : x) { i >> y; } return i; }
template<class T, class = decltype(begin(declval<T>())), class = enable_if_t<!is_same<T, string>::value>>
ostream& operator<<(ostream& o, const T& x) { o << "{"; auto s = ""; for (auto& y : x) { o << s << y; s = ", "; } return o << "}"; }
}

#ifdef DEBUG
#define dbg(...) do { cout << #__VA_ARGS__ ": " << make_tuple(__VA_ARGS__) << endl; } while (0)
#define dbg2(X) do { cout << #X ":\n"; for (auto& __x : (X)) { cout << __x << endl; } } while (0)
#else
#define dbg(...)
#define dbg2(X)
#endif

// NOTE: matrix is row major, contrary to OpenGL convention.
namespace glm {

template<class T, size_t N>
struct vec : array<T, N> {
  vec& operator+=(const vec& y) { for (size_t i = 0; i < N; i++) { (*this)[i] += y[i]; } return *this; }
  vec& operator-=(const vec& y) { for (size_t i = 0; i < N; i++) { (*this)[i] -= y[i]; } return *this; }
  vec& operator*=(const vec& y) { for (size_t i = 0; i < N; i++) { (*this)[i] *= y[i]; } return *this; }
  vec& operator/=(const vec& y) { for (size_t i = 0; i < N; i++) { (*this)[i] /= y[i]; } return *this; }
  vec& operator+=(T y) { for (size_t i = 0; i < N; i++) { (*this)[i] += y; } return *this; }
  vec& operator-=(T y) { for (size_t i = 0; i < N; i++) { (*this)[i] -= y; } return *this; }
  vec& operator*=(T y) { for (size_t i = 0; i < N; i++) { (*this)[i] *= y; } return *this; }
  vec& operator/=(T y) { for (size_t i = 0; i < N; i++) { (*this)[i] /= y; } return *this; }
  friend vec operator+(const vec& x, const vec& y) { return vec(x) += y; }
  friend vec operator-(const vec& x, const vec& y) { return vec(x) -= y; }
  friend vec operator*(const vec& x, const vec& y) { return vec(x) *= y; }
  friend vec operator/(const vec& x, const vec& y) { return vec(x) /= y; }
  friend vec operator+(const vec& x, T y) { return vec(x) += y; }
  friend vec operator-(const vec& x, T y) { return vec(x) -= y; }
  friend vec operator*(const vec& x, T y) { return vec(x) *= y; }
  friend vec operator/(const vec& x, T y) { return vec(x) /= y; }
};

template<class T, size_t N>
struct mat : array<array<T, N>, N> {
  mat() : mat(vec<T, N * N>()) { }
  mat(const vec<T, N * N>& x) {
    for (size_t i = 0; i < N; i++)
      for (size_t j = 0; j < N; j++)
        (*this)[i][j] = x[i * N + j];
  }
  friend vec<T, N> operator*(const mat& x, const vec<T, N>& y) {
    vec<T, N> z = {};
    for (size_t i = 0; i < N; i++)
      for (size_t j = 0; j < N; j++)
        z[i] += x[i][j] * y[j];
    return z;
  }
  friend mat operator*(const mat& x, const mat& y) {
    mat z;
    for (size_t i = 0; i < N; i++)
      for (size_t j = 0; j < N; j++)
        for (size_t k = 0; k < N; k++)
          z[i][j] += x[i][k] * y[k][j];
    return z;
  }
};

template<class T>
mat<T, 2> inverse(const mat<T, 2> x) {
  auto a = x[0][0], b = x[0][1], c = x[1][0], d = x[1][1];
  auto det = a * d - b * c;
  return mat<T, 2>(vec<T, 4>({d, -b, -c, a}) / det);
}

template<class T, size_t N>
T dot(const vec<T, N>& x, const vec<T, N>& y) {
  T z = 0;
  for (size_t i = 0; i < N; i++) z += x[i] * y[i];
  return z;
}

template<class T, size_t N>
T dot2(const vec<T, N>& x) { return dot(x, x); }

template<class T, size_t N>
T length(const vec<T, N>& x) { return sqrt(dot2(x)); }

template<class T, size_t N>
vec<T, 2> normalize(const vec<T, N> x) { return x / length(x); }

} // namespace glm

using namespace glm;
using Real = double;
using vec2 = vec<Real, 2>;
using mat2 = mat<Real, 2>;
const Real pi = acos(-1);

// Main
void mainCase() {
  array<vec2, 3> ps;
  cin >> ps;
  dbg(ps);

  // Find center of circumcircle
  vec2 center = {};
  {
    // Solve v0 + t0 u0 = v1 + t1 u1
    mat2 rot90({0, -1, 1, 0});
    vec2 v0 = (ps[0] + ps[1]) / 2;
    vec2 u0 = rot90 * (ps[1] - ps[0]);
    vec2 v1 = (ps[0] + ps[2]) / 2;
    vec2 u1 = rot90 * (ps[2] - ps[0]);
    mat2 a({u0[0], -u1[0], u0[1], -u1[1]});
    vec2 t = inverse(a) * (v1 - v0);
    center = v0 + u0 * t[0];
  }
  dbg(center);
  FOR(i, 0, 3) { dbg(i, length(ps[i] - center)); }

  // Noramlize
  Real r = length(ps[0] - center);
  array<vec2, 3> vs;
  FOR(i, 0, 3) { vs[i] = normalize(ps[i] - center); }
  dbg(r, vs);

  // Find two inner angles
  auto clamp = [](Real x) { return min(Real(1), max(Real(-1), x)); };
  Real t1 = acos(clamp(dot(vs[0], vs[1])));
  Real t2 = acos(clamp(dot(vs[0], vs[2])));
  dbg(t1, t2);

  // Find minimal p s.t. p.t1, p,t2 \in 2pi.Z
  auto isInteger = [](Real x, Real eps = 1e-3) { return abs(x - round(x)) < eps; };
  const int p_lim = 100; // at most k-gon
  int p = -1, q1, q2;
  FOR(i, 3, p_lim + 1) {
    dbg(i, i * t1 / (2 * pi), i * t2 / (2 * pi));
    if (isInteger(i * t1 / (2 * pi)) && isInteger(i * t2 / (2 * pi))) {
      p = i;
      q1 = round(p * t1 / (2 * pi));
      q2 = round(p * t2 / (2 * pi));
      break;
    }
  }
  assert(p != -1);
  dbg(p, q1, q2);

  // Recular p-gon
  Real res = r * r * p * sin(2 * pi / p) / 2;
  cout << setprecision(numeric_limits<Real>::digits10 + 1) << res << "\n";
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  mainCase();
  return 0;
}

/*
python misc/run.py codeforces/problemset/1C/main.cpp --check

%%%% begin
88.653021 18.024220
51.942488 -2.527850
76.164701 24.553012
%%%%
1452.52866331
%%%% end

%%%% begin
-46.482632 -31.161247
19.689679 -70.646972
-17.902656 -58.455808
%%%%
23949.55216407458
%%%% end

%%%% begin
0.000000 0.000000
1.000000 1.000000
0.000000 1.000000
%%%%
1.00000000
%%%% end

%%%% begin
71.756151 7.532275
-48.634784 100.159986
91.778633 158.107739
%%%%
9991.278787608771
%%%% end

#include <bits/stdc++.h>
#define INF 0x3fffffff
#define EXP 0.001
#define MOD 1000000007
#define PI acos(-1.0)
#define dis(x1, y1, x2, y2) sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
#define mem(a) memset(a, 0, sizeof(a))
#define YESANSER cout << "YES" << endl
#define NOANSER cout << "NO" << endl
#define yesANSER cout << "yes" << endl
#define noANSER cout << "no" << endl
#define YesANSER cout << "Yes" << endl
#define NoANSER cout << "No" << endl
#define ANSER(flag) flag ? YESANSER : NOANSER
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> pii;
typedef int T; //统一修改类型

int fdpd(double x)
{
    if (fabs(x) < EXP)
        return 0;
    else
        return x < 0 ? -1 : 1;
}

class point
{
public:
    double x, y;
    point(double a = 0, double b = 0)
    {
        x = a;
        y = b;
    }
    double len()
    {
        return sqrt(x * x + y * y);
    }
    friend bool operator==(point a, point b)
    {
        if (fdpd(a.x - b.x) == 0 && fdpd(a.y - b.y) == 0)
            return true;
        return false;
    }
    friend bool operator<(point a, point b)
    {
        if (fdpd(a.x - b.x) == 0)
            return a.y < b.y;
        return a.x < b.x;
    }
    friend point operator+(point a, point b)
    {
        return point(a.x + b.x, a.y + b.y);
    }
    friend point operator-(point a, point b)
    {
        return point(a.x - b.x, a.y - b.y);
    }
    friend point operator*(point a, double b)
    {
        return point(a.x * b, a.y * b);
    }
    friend point operator*(double a, point b)
    {
        return point(a * b.x, a * b.y);
    }
    friend double operator*(point a, point b) //点乘
    {
        return a.x * b.x + a.y * b.y;
    }
    friend double operator^(point a, point b) //叉乘  a^b为正，a在b的逆时针方向
    {
        return a.x * b.y - a.y * b.x;
    }
    int is_angle(point b) //判断向量a和向量b的夹角 <0钝角 ==0直角 >0锐角
    {
        double tmp = *this * b;
        return fdpd(tmp);
    }
    double angle(point b) //算向量a和向量b的夹角
    {
        return acos(*this * b / len() / b.len());
    }
    double dis1(point a, point b) //点到直线ab的距离
    {
        point x1 = *this - a;
        point x2 = b - a;
        return fabs(x1 ^ x2) / x2.len();
    }
    double dists(point a, point b) //点到线段ab的距离
    {
        if (a == b)
            return (*this - a).len();
        point v1 = b - a, v2 = *this - a, v3 = *this - b;
        if (fdpd(v1 * v2) < 0)
            return v2.len();
        else if (fdpd(v1 * v3) > 0)
            return v3.len();
        return dis1(a, b);
    }
    friend bool is_cross(point a, point b, point c, point d) //判定ab线段和cd线段是否相交,true为相交
    {
        double c1 = (b - a) ^ (c - a), c2 = (b - a) ^ (d - a);
        double d1 = (d - c) ^ (a - c), d2 = (d - c) ^ (b - c);
        return fdpd(c1) * fdpd(c2) < 0 && fdpd(d1) * fdpd(d2) < 0;
    }
    friend point cross_point(point a, point b, point c, point d) //判定ab直线和cd直线的交点坐标
    {
        double s1 = fabs((b - a) ^ (c - a));
        double s2 = fabs((b - a) ^ (d - a));
        double bl = s2 / (s1 + s2);
        point tmp = (c - d) * bl + d;
        return tmp;
    }
    int point_in(vector<point> a) //判定点是否在多边形内 0在外，-1在线上，1在内
    {
        int n = a.size();
        int num = 0;
        point p = *this;
        for (int i = 0; i < n; ++i)
        {
            if (fdpd(dists(a[i], a[(i + 1) % n]) == 0))
                return -1;
            int k = fdpd((a[(i + 1) % n] - a[i]) ^ (p - a[i]));
            int d1 = fdpd(a[i].y - p.y);
            int d2 = fdpd(a[(i + 1) % n].y - p.y);
            if (k > 0 && d1 <= 0 && d2 > 0)
                num++;
            if (k < 0 && d2 <= 0 && d1 > 0)
                num--;
        }
        if (num)
            return 1;
        return 0;
    }
    friend double area(vector<point> a) //计算多边形面积,点逆时针方向
    {
        int n = a.size();
        double sum = 0;
        for (int i = 1; i < n; ++i)
            sum += a[i] ^ a[i - 1];
        sum += a[0] ^ a[n - 1];
        return fabs(sum / 2);
    }
};

double gcd(double a, double b)
{
    if (fabs(b) < EXP)
        return a;
    if (fabs(a) < EXP)
        return b;
    return gcd(b, fmod(a, b));
}

void solve()
{
    point A, B, C;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    double a = (C - B).len();
    double b = (C - A).len();
    double c = (B - A).len();
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = a * b * c / 4 / s;
    double ang1 = acos(1 - a * a / 2 / r / r);
    double ang2 = acos(1 - b * b / 2 / r / r);
    double ang3 = PI * 2 - ang1 - ang2;
    double _gcd = gcd(ang1, gcd(ang2, ang3));
    double ans = PI * r * r * sin(_gcd) / _gcd;
    printf("%.6f\n", ans);
}

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}
/*/
/*
 ID: ahmed.f2
 LANG: C++
 TASK: disjoint sets
 */

#include <iostream>
#include <cstring>
#include <string.h>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>

using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define SZ(v) (int)v.size()

#define For(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();++it)
#define mem(a,b) memset(a,b,sizeof(a))
#define mp make_pair

typedef stringstream ss;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vector<int> > vii;
typedef long long ll;

const int oo = (int) 1e9;
const double eps = 1e-11;

#define mx 105
typedef complex<double> point;
int parent[mx], rank[mx];
#define X real()
#define Y imag()
#define PI 3.1415926535897932384626433832795

point vec(const point &a, const point &b) {
    return b - a;
}
point rotate_by(const point &p, const point &about, long double radians) {
    return (p - about) * exp(point(0, radians)) + about;
}
long double length(const point& p) {
    return hypot(p.X, p.Y);
}

long double length(const point &a, const point &b) {
    return length(vec(a, b));
}
long double polygon_area(const vector<point> &polygon) {
    long double area = 0.0;
    int i;

    for (i = 0; i < (int) polygon.size(); i++) {
        int j = (i + 1) % polygon.size();

        area += polygon[i].X * polygon[j].Y - polygon[j].X * polygon[i].Y;
    }

    return 0.5 * fabs(area);
}
long double dot_product(const point &a, const point &b) {
    return real(conj(a) * b);
}

long double cross_product(const point &a, const point &b) {
    return imag(conj(a) * b);
}
// returns intersection of infinite lines ab and pq (undefined if they are parallel)
//bool lineIntersect(point a,point b, point p, point q, point& r)
//{
//         double d1 = cross_product(p-a,b-a);
//         double d2 = cross_product(q-a,b-a);
//
//        if(fabs(d2-d1)<1e-9)
//                return false;
//        r = (d1*q - d2*p)/ (d1-d2);
//        return true;
//}

bool intersect(const point &a, const point &b, const point &p, const point &q,
        point &ret) {
    double d1 = cross_product(p - a, b - a);
    double d2 = cross_product(q - a, b - a);
    ret = (d1 * q - d2 * p) / (d1 - d2);
    return fabs(d1 - d2) > eps;
}

long double get_angle(const point& p) {
    return atan2(p.Y, p.X);
}

long double get_angle(const point &a, const point &b) {
    return get_angle(vec(a, b));
}

#define outy(a) a.X<<" "<<a.Y<<endl
////////////////////
int compare(double d1, double d2) {
    if (fabs(d1 - d2) < 1e-5)
        return 0;
    if (d1 < d2)
        return -1;
    return 1;
}
point get_center_of_minimum_circle(point &a, point &b, point &c) {
    point ret, perAB, perBC;
    point midAB = (a + b) / point(2, 0), midBC = (b + c) / point(2, 0);
    //  cout << outy(midAB);
    //  cout << outy(midBC);
    perAB = rotate_by(b, a, PI / 2) - a + midAB;
    //  cout << outy(perAB);
    perBC = rotate_by(c, b, PI / 2) - b + midBC;
    //  cout << outy(perBC);
    intersect(midAB, perAB, midBC, perBC, ret);
    return ret;


}
bool equal(const point &a, const point &b)
{
    return (compare(a.X, b.X) == 0 &&   compare(a.Y, b.Y) == 0);
}
int main() {
    point a, b, c;
    ///// testy
//  point s = point(2,3);
//  vector<point> pol;
//  pol.push_back(s);
//  int n = 6;
//  for (int i = 0; i < n-1; ++i) {
//      s = rotate_by(s, point(0,0), ((2 * PI) / n));
//      pol.push_back(s);
//  }
//  cout.setf(ios::fixed);
//      cout.setf(ios::showpoint);
//      cout.precision(8);
//  cout << "pol " <<  polygon_area(pol)<<endl;
    ///

//  a = pol[0];
//  b = pol[1];
//  c = pol[2];

    cin >> a.X >> a.Y;
    cin >> b.X >> b.Y;
    cin >> c.X >> c.Y;



//  cout << length(a,b) << " " << length(a,c) << " " <<length(c,b) <<endl;
    point center = get_center_of_minimum_circle(a, b, c);
    int i;
    point cur;
    bool gotB = 0, gotC = 0;
//  vector<point> polygon;
    for (i = 3; i <= 100 && (!gotB || !gotC); ++i) {
        gotB = 0, gotC = 0;
//      polygon.clear();
        cur = a;
//      polygon.push_back(a);
        for (int j = 0; j < i - 1; ++j) {
            cur = rotate_by(cur, center, ((2 * PI) / i));
//          polygon . push_back(cur);
            if (equal(cur, b))
                gotB = 1;
            else if (equal(cur, c))
                gotC = 1;
        }

    }
    i--;
    double sideLen = length(a,rotate_by(a, center, ((2 * PI) / i)) );

    //  cout << center.X << " " << center.Y <<endl;

    //  cout << length(vec(a,center)) << " "<< length(vec(b,center))<< " "<< length(vec(c,center))<<endl;

//  cout << polygon_area(polygon)<<endl;
    cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(8);
    cout << ((sideLen * sideLen * i) / (4*tan(PI/i)))<<endl;
    return 0;
}
/***
/*

Examples
input
0.000000 0.000000
1.000000 1.000000
0.000000 1.000000
output
1.00000000

ÌâÒâ£º¸øÕý¶à±ßÐÎÖÐÈý¸öµãµÄ×ø±ê£¬ÇóÕâ¸öÕý¶à±ßÐÎµÄÃæ»ý¡£

Ë¼Â·£º¼ÈÈ»ÊÇÕý¶à±ßÐÎ£¬ÄÇÃ´±ãÓÐÍâ½ÓÔ²¡£ÀûÓÃº£Â×¹«Ê½£¬Çó³ö p = (a + b + c) / 2; s = sqrt(p * (p - a) * (p - b) * (p - c)); r = a * b * c / (4 * s);
ÔÙÇó³öÃ¿¸ö±ß¶ÔÓ¦µÄÔ²ÐÄ½Ç£¨Ô²ÐÄ½Ç = Ô²ÖÜ½Ç * 2£©£¬Çó³öÈý¸ö½ÇµÄ×î´ó¹«Ô¼Êýalpha£¬±ßÊý = 360 / alpha;
×îºóÕýn±ßÐÎ£¬·Ö³Én¸öµÈÑüÈý½ÇÐÎ£¬Ã¿¸öÈý½ÇÐÎÃæ»ýÎª r * r * sin(alpha) / 2;

*/

/**************************************** start all **************************************************/

#pragma warning(disable:4786)
#include <cstdio>
#include <cstdlib>
#include <limits>
#include <iostream>
#include <sstream>
#include <fstream>
#include <time.h>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iomanip>
#include <cstring>
#include <ctype.h>
#include <string>
#include <queue>
#include <deque>
#include <vector>
#include <cmath>
#include <list>
#include <map>
#include <stack>
#include <bitset>
#include <set>
using namespace std;

//ÀàÐÍÏà¹Ø
#ifdef LOCAL_VS
typedef __int64 INT64;
typedef unsigned __int64 UINT64;
#else
typedef long long INT64;
typedef unsigned long long UINT64;
#endif

//¸ñÊ½»¯Êä³ö
#define CLOSE_STDIO ios::sync_with_stdio(false);
#define ADD_PLUS_BEFORE_POSITIVE cout.setf(ios::showpos); //Ç¿ÖÆÔÚÕýÊýÇ°¼Ó+ºÅ
#define UN_PLUS_BEFORE_POSITIVE cout.unsetf(ios::showpos); //È¡ÏûÕýÊýÇ°¼Ó+ºÅ
#define SHOW_INVALID_ZERO cout.setf(ios::showpoint); //Ç¿ÖÆÏÔÊ¾Ð¡ÊýµãºóµÄÎÞÐ§0
#define HIDE_INVALID_ZERO cout.unsetf(ios::showpoint); //È¡ÏûÏÔÊ¾Ð¡ÊýµãºóµÄÎÞÐ§0
#define SCIENTIFIC_NOTATION cout.setf(ios::scientific); //¿ÆÑ§¼ÇÊý·¨
#define UN_SCIENTIFIC_NOTATION cout.unsetf(ios::scientific); //È¡Ïû¿ÆÑ§¼ÇÊý·¨
#define SHOW_AS_DOT_ZERO cout.setf(ios::fixed); //°´µãÊä³öÏÔÊ¾
#define UN_SHOW_AS_DOT_ZERO cout.unsetf(ios::fixed); //È¡Ïû°´µãÊä³öÏÔÊ¾
#define SET_PRECISION(x) cout.precision(x); //¾«¶ÈÎªx£¬Õý³£Îª6
#define KEEP_DECIMAL_PLACE(x) SET_PRECISION(x) //coutÊä³öÊ±±£ÁôÁ½Î»Ð¡Êý£¬Êä³öÍê³ÉÐè½øÐÐclose²Ù×÷
#define CLOSE_DECIMAL_KEEP SET_PRECISION(6) //¹Ø±Õ±£ÁôÁ½Î»Ð¡Êý
#define ALIGN_LEFT cout.setf(ios::left); //×ó¶ÔÆë
#define ALIGN_RIGHT cout.setf(ios::right); //ÓÒ¶ÔÆë
#define ALIGN_INTERNAL cout << internal; //·ûºÅÓëÊý×Ö×óÓÒ·Ö¿ª
#define SET_WIDTH(x) setw(x) // ÉèÖÃÊä³ö¿í¶È
#define SET_FILL(c) cout << setfill( c ); //ÉèÖÃÌî³ä×Ö·û
#define SET_BASE(x) setbase(x) //ÉèÖÃ½øÖÆÏÔÊ¾£¬xÖ»ÄÜÎª8£¬10£¬16£¬½«Êý×Ö×ª»»Îª½øÖÆÏÔÊ¾
#define BASE_UPPERCASE cout << uppercase; //´óÐ´Êä³ö
#define BASE_LOWERCASE cout << nouppercase; //Ð¡Ð´Êä³ö

//Êä³öÊ±¼ä
#define SHOW_RUN_TIME SHOW_AS_DOT_ZERO cout << endl << "Time used = " << setprecision(2) << 1000 * (double)clock() / CLOCKS_PER_SEC << "ms" << setprecision(6) << endl;

//ÊýÑ§Ïà¹Ø
#define MAXINF(type) (numeric_limits<type>::max)() //ÇótypeÀàÐÍ×î´óÖµ
#define MININF(type) (numeric_limits<type>::min)() //ÇótypeÀàÐÍ×îÐ¡Öµ

//½á¹¹Ñ­»·
#define FOR_EACH(var, begin, end) \
for (var = begin; var <= end; var ++)
#define FOR_EACH_DESC(var, begin, end) \
for (var = end; var >= begin; var --)

//ÅÅÐò¹æÔò
#define DESC(type) greater<type>()
#define ASC(type) less<type>()

//³£Á¿
const double PI = acos(-1.0);
const double EPS = 1.0e-10;

//------------------------------------- start local global ----------------------------------------//

struct Point
{
	double x, y;
};

//------------ end local global

//------------------------------------- start local function ----------------------------------------//

double dist(Point &a, Point &b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

bool feq(double a, double b) {
    return fabs(a - b) < 0.01;
}

double fgcd(double a, double b) {
    if (feq(a, 0)) return b;
    if (feq(b, 0)) return a;
    return fgcd(b, fmod(a, b));
}

//------------ end local function

//---------------------------------------- start main -----------------------------------------------//

int main()
{
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w+", stdout);
#endif
	CLOSE_STDIO;
	SHOW_AS_DOT_ZERO;
	KEEP_DECIMAL_PLACE(6);
	//main content

	Point a, b, c;
	while (scanf("%lf%lf%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y) != EOF)
	{
		double l[3];
		l[0] = dist(a, b);
		l[1] = dist(b, c);
		l[2] = dist(a, c);
		double p = (l[0] + l[1] + l[2]) / 2;
		double s = sqrt(p * (p - l[0]) * (p - l[1]) * (p - l[2]));
		double r = l[0] * l[1] * l[2] / (4 * s);
		//cout << s << " " << r << endl;
		double o1, o2, o3;
		o1 = acos(1 - l[0] * l[0] / (2 * r * r));
		o2 = acos(1 - l[1] * l[1] / (2 * r * r));
		//o1 = asin(2 * s / l[0] / l[1]) * 2;
		//o2 = asin(2 * s / l[1] / l[2]) * 2;
		o3 = 2 * PI - o1 - o2;
		//cout << o1 << " " << o2 << " " << o3 << endl;
		double aa = fgcd(fgcd(o1, o2), o3);
		//int bb = 2 * PI / aa;
		//cout << aa << endl;
		//cout << bb << endl;
		//cout << r << endl;
		double ss = 0;
		//ss = 1.0 * bb * (r * r * sin(aa) / 2);
		ss = r * r * sin(aa) * PI / aa;
		cout << ss << endl;
	}

	//end main content
	return 0;
}
//--------------- end main

/**************************************** end all **************************************************/
/*/
/*


  ██████  ▒█████   █    ██  ██▀███       ██████  ▒█████   █    ██  ██▓███
▒██    ▒ ▒██▒  ██▒ ██  ▓██▒▓██ ▒ ██▒   ▒██    ▒ ▒██▒  ██▒ ██  ▓██▒▓██░  ██▒
░ ▓██▄   ▒██░  ██▒▓██  ▒██░▓██ ░▄█ ▒   ░ ▓██▄   ▒██░  ██▒▓██  ▒██░▓██░ ██▓▒
  ▒   ██▒▒██   ██░▓▓█  ░██░▒██▀▀█▄       ▒   ██▒▒██   ██░▓▓█  ░██░▒██▄█▓▒ ▒
▒██████▒▒░ ████▓▒░▒▒█████▓ ░██▓ ▒██▒   ▒██████▒▒░ ████▓▒░▒▒█████▓ ▒██▒ ░  ░
▒ ▒▓▒ ▒ ░░ ▒░▒░▒░ ░▒▓▒ ▒ ▒ ░ ▒▓ ░▒▓░   ▒ ▒▓▒ ▒ ░░ ▒░▒░▒░ ░▒▓▒ ▒ ▒ ▒▓▒░ ░  ░
░ ░▒  ░ ░  ░ ▒ ▒░ ░░▒░ ░ ░   ░▒ ░ ▒░   ░ ░▒  ░ ░  ░ ▒ ▒░ ░░▒░ ░ ░ ░▒ ░
░  ░  ░  ░ ░ ░ ▒   ░░░ ░ ░   ░░   ░    ░  ░  ░  ░ ░ ░ ▒   ░░░ ░ ░ ░░
      ░      ░ ░     ░        ░              ░      ░ ░     ░

*/

#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>

using namespace std;

#define forn(ind, b) for(int ind = 0; ind < int(b); ++ind)
#define fore(ind, l, r) for(int ind = int(l); ind < int(r); ++ind)
#define forit(it, divs) for (auto it = (divs).begin(); it != (divs).end(); ++it)
#define all(v) (v).begin(), (v).end()
#define y1 initialD
#define sqr(x1) (ll(x1) * ll(x1))
#define pb push_back
#define sz(divs) int(divs.size())
#define endl '\n'


using ll = long long;
using ld = long double;

template<class A, class B>
istream& operator>>(istream& in, pair<A, B>& x) {
    in >> x.first >> x.second;
    return in;
}
template<class A, class B>
ostream& operator<<(ostream& out, pair<A, B>& x) {
    out << x.first << ' ' << x.second;
    return out;
}

template<class A>
istream& operator>>(istream& in, vector<A>& v) {
    for (auto& x : v)
        in >> x;
    return in;
}
template<class A>
ostream& operator<<(ostream& out, vector<A>& v) {
    for (auto x : v)
        out << x << ' ';
    return out;
}

int mod = 998244353;
const int INF = 1e9 + 10;
const ll INF_64 = 1e18 + 10;
const ld eps = 1e-2;
const ld pi = acosl(-1.0);

int add(int a, int b) {
    a += b;
    if (a >= mod)
        a -= mod;
    if (a < 0)
        a += mod;
    return a;
}
ll mul(ll a, ll b) {
    a *= b;
    return a % mod;
}
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1)
            res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}
ll inv(ll a) {
    return binpow(a, mod - 2);
}

struct vec {
    ld x, y;
    friend vec operator+(const vec a, const vec b) {
        return { a.x + b.x, a.y + b.y };
    }
    friend vec operator-(const vec a, const vec b) {
        return { a.x - b.x, a.y - b.y };
    }
    friend ld operator*(const vec a, const vec b) {
        return a.x * b.x + a.y * b.y;
    }
    friend ld operator%(const vec a, const vec b) {
        return a.x * b.y - a.y * b.x;
    }
    friend vec operator/(const vec a, ld b) {
        return { a.x / b, a.y / b };
    }
    friend istream& operator>>(istream& in, vec& a) {
        in >> a.x >> a.y;
        return in;
    }
    friend ostream& operator<<(ostream& out, const vec a) {
        out << a.x << ' ' << a.y;
        return out;
    }
};

vec orto(vec a) {
    return { -a.y, a.x };
}

struct line {
    ld a, b, c;
    line() {}
    line(const vec x1, const vec x2) {
        vec n = x2 - x1;
        a = -n.y;
        b = n.x;
        c = -a * x1.x - b * x1.y;
    }
};

ld dist(vec a) {
    return sqrt(a * a);
}

vec intersec(line p, line q) {
    ld d = vec{ p.a,p.b } % vec{ q.a,q.b };
    ld d1 = vec{ p.c,p.b } % vec{ q.c,q.b };
    ld d2 = vec{ p.a,p.c } % vec{ q.a,q.c };
    return { d1 / d, d2 / d };
}

ld mygcd(ld a, ld b) {
    if (abs(a) < eps) return b;
    if (abs(b) < eps) return a;
    return mygcd(b, fmodl(a, b));
}

void solve() {
    vector<vec>a(3);
    cin >> a;
    vec m1 = a[0] + (a[1] - a[0]) / 2;
    vec m2 = a[1] + (a[2] - a[1]) / 2;
    line p(m1, m1 + orto(a[1] - a[0]));
    line q(m2, m2 + orto(a[2] - a[1]));

    ld a1 = dist(a[1] - a[0]);
    ld b1 = dist(a[2] - a[1]);
    ld c1 = dist(a[2] - a[0]);

    ld s = abs((a[1] - a[0]) % (a[2] - a[0]) / 2);
    ld r = a1 * b1 * c1 / (4 * s);

    vector<ld>ang(3);
    ld t1 = 1 - a1 * a1 / (2 * r * r);
    ld t2 = 1 - b1 * b1 / (2 * r * r);
    ang[0] = acosl(max(min(t1, 1.l), -1.l));
    ang[1] = acosl(max(min(t2, 1.l), -1.l));
    ang[2] = 2 * pi - ang[0] - ang[1];

    ld g = mygcd(ang[0], mygcd(ang[1], ang[2]));
    cout << pi * r * r * sin(g) / g << endl;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(15);
    cout << fixed;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
/***/
/*
 ID: ahmed.f2
 LANG: C++
 TASK: disjoint sets
 */

#include <iostream>
#include <cstring>
#include <string.h>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>

using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define SZ(v) (int)v.size()

#define For(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();++it)
#define mem(a,b) memset(a,b,sizeof(a))
#define mp make_pair

typedef stringstream ss;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vector<int> > vii;
typedef long long ll;

const int oo = (int) 1e9;
const double eps = 1e-11;

#define mx 105
typedef complex<double> point;
int parent[mx], rank[mx];
#define X real()
#define Y imag()
#define PI 3.1415926535897932384626433832795

point vec(const point &a, const point &b) {
    return b - a;
}
point rotate_by(const point &p, const point &about, long double radians) {
    return (p - about) * exp(point(0, radians)) + about;
}
long double length(const point& p) {
    return hypot(p.X, p.Y);
}

long double length(const point &a, const point &b) {
    return length(vec(a, b));
}
long double polygon_area(const vector<point> &polygon) {
    long double area = 0.0;
    int i;

    for (i = 0; i < (int) polygon.size(); i++) {
        int j = (i + 1) % polygon.size();

        area += polygon[i].X * polygon[j].Y - polygon[j].X * polygon[i].Y;
    }

    return 0.5 * fabs(area);
}
long double dot_product(const point &a, const point &b) {
    return real(conj(a) * b);
}

long double cross_product(const point &a, const point &b) {
    return imag(conj(a) * b);
}
// returns intersection of infinite lines ab and pq (undefined if they are parallel)
//bool lineIntersect(point a,point b, point p, point q, point& r)
//{
//         double d1 = cross_product(p-a,b-a);
//         double d2 = cross_product(q-a,b-a);
//
//        if(fabs(d2-d1)<1e-9)
//                return false;
//        r = (d1*q - d2*p)/ (d1-d2);
//        return true;
//}

bool intersect(const point &a, const point &b, const point &p, const point &q,
        point &ret) {
    double d1 = cross_product(p - a, b - a);
    double d2 = cross_product(q - a, b - a);
    ret = (d1 * q - d2 * p) / (d1 - d2);
    return fabs(d1 - d2) > eps;
}

long double get_angle(const point& p) {
    return atan2(p.Y, p.X);
}

long double get_angle(const point &a, const point &b) {
    return get_angle(vec(a, b));
}

#define outy(a) a.X<<" "<<a.Y<<endl
////////////////////
int compare(double d1, double d2) {
    if (fabs(d1 - d2) < 1e-5)
        return 0;
    if (d1 < d2)
        return -1;
    return 1;
}
point get_center_of_minimum_circle(point &a, point &b, point &c) {
    point ret, perAB, perBC;
    point midAB = (a + b) / point(2, 0), midBC = (b + c) / point(2, 0);
    //  cout << outy(midAB);
    //  cout << outy(midBC);
    perAB = rotate_by(b, a, PI / 2) - a + midAB;
    //  cout << outy(perAB);
    perBC = rotate_by(c, b, PI / 2) - b + midBC;
    //  cout << outy(perBC);
    intersect(midAB, perAB, midBC, perBC, ret);
    return ret;


}
bool equal(const point &a, const point &b)
{
    return (compare(a.X, b.X) == 0 &&   compare(a.Y, b.Y) == 0);
}
int main() {
    point a, b, c;
    ///// testy
//  point s = point(2,3);
//  vector<point> pol;
//  pol.push_back(s);
//  int n = 6;
//  for (int i = 0; i < n-1; ++i) {
//      s = rotate_by(s, point(0,0), ((2 * PI) / n));
//      pol.push_back(s);
//  }
//  cout.setf(ios::fixed);
//      cout.setf(ios::showpoint);
//      cout.precision(8);
//  cout << "pol " <<  polygon_area(pol)<<endl;
    ///

//  a = pol[0];
//  b = pol[1];
//  c = pol[2];

    cin >> a.X >> a.Y;
    cin >> b.X >> b.Y;
    cin >> c.X >> c.Y;



//  cout << length(a,b) << " " << length(a,c) << " " <<length(c,b) <<endl;
    point center = get_center_of_minimum_circle(a, b, c);
    int i;
    point cur;
    bool gotB = 0, gotC = 0;
//  vector<point> polygon;
    for (i = 3; i <= 100 && (!gotB || !gotC); ++i) {
        gotB = 0, gotC = 0;
//      polygon.clear();
        cur = a;
//      polygon.push_back(a);
        for (int j = 0; j < i - 1; ++j) {
            cur = rotate_by(cur, center, ((2 * PI) / i));
//          polygon . push_back(cur);
            if (equal(cur, b))
                gotB = 1;
            else if (equal(cur, c))
                gotC = 1;
        }

    }
    i--;
    double sideLen = length(a,rotate_by(a, center, ((2 * PI) / i)) );

    //  cout << center.X << " " << center.Y <<endl;

    //  cout << length(vec(a,center)) << " "<< length(vec(b,center))<< " "<< length(vec(c,center))<<endl;

//  cout << polygon_area(polygon)<<endl;
    cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(8);
    cout << ((sideLen * sideLen * i) / (4*tan(PI/i)))<<endl;
    return 0;
}
/*/
#include <bits/stdc++.h>
#define INF 0x3fffffff
#define EXP 0.001
#define MOD 1000000007
#define PI acos(-1.0)
#define dis(x1, y1, x2, y2) sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
#define mem(a) memset(a, 0, sizeof(a))
#define YESANSER cout << "YES" << endl
#define NOANSER cout << "NO" << endl
#define yesANSER cout << "yes" << endl
#define noANSER cout << "no" << endl
#define YesANSER cout << "Yes" << endl
#define NoANSER cout << "No" << endl
#define ANSER(flag) flag ? YESANSER : NOANSER
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> pii;
typedef int T; //统一修改类型

int fdpd(double x)
{
    if (fabs(x) < EXP)
        return 0;
    else
        return x < 0 ? -1 : 1;
}

class point
{
public:
    double x, y;
    point(double a = 0, double b = 0)
    {
        x = a;
        y = b;
    }
    double len()
    {
        return sqrt(x * x + y * y);
    }
    friend bool operator==(point a, point b)
    {
        if (fdpd(a.x - b.x) == 0 && fdpd(a.y - b.y) == 0)
            return true;
        return false;
    }
    friend bool operator<(point a, point b)
    {
        if (fdpd(a.x - b.x) == 0)
            return a.y < b.y;
        return a.x < b.x;
    }
    friend point operator+(point a, point b)
    {
        return point(a.x + b.x, a.y + b.y);
    }
    friend point operator-(point a, point b)
    {
        return point(a.x - b.x, a.y - b.y);
    }
    friend point operator*(point a, double b)
    {
        return point(a.x * b, a.y * b);
    }
    friend point operator*(double a, point b)
    {
        return point(a * b.x, a * b.y);
    }
    friend double operator*(point a, point b) //点乘
    {
        return a.x * b.x + a.y * b.y;
    }
    friend double operator^(point a, point b) //叉乘  a^b为正，a在b的逆时针方向
    {
        return a.x * b.y - a.y * b.x;
    }
    int is_angle(point b) //判断向量a和向量b的夹角 <0钝角 ==0直角 >0锐角
    {
        double tmp = *this * b;
        return fdpd(tmp);
    }
    double angle(point b) //算向量a和向量b的夹角
    {
        return acos(*this * b / len() / b.len());
    }
    double dis1(point a, point b) //点到直线ab的距离
    {
        point x1 = *this - a;
        point x2 = b - a;
        return fabs(x1 ^ x2) / x2.len();
    }
    double dists(point a, point b) //点到线段ab的距离
    {
        if (a == b)
            return (*this - a).len();
        point v1 = b - a, v2 = *this - a, v3 = *this - b;
        if (fdpd(v1 * v2) < 0)
            return v2.len();
        else if (fdpd(v1 * v3) > 0)
            return v3.len();
        return dis1(a, b);
    }
    friend bool is_cross(point a, point b, point c, point d) //判定ab线段和cd线段是否相交,true为相交
    {
        double c1 = (b - a) ^ (c - a), c2 = (b - a) ^ (d - a);
        double d1 = (d - c) ^ (a - c), d2 = (d - c) ^ (b - c);
        return fdpd(c1) * fdpd(c2) < 0 && fdpd(d1) * fdpd(d2) < 0;
    }
    friend point cross_point(point a, point b, point c, point d) //判定ab直线和cd直线的交点坐标
    {
        double s1 = fabs((b - a) ^ (c - a));
        double s2 = fabs((b - a) ^ (d - a));
        double bl = s2 / (s1 + s2);
        point tmp = (c - d) * bl + d;
        return tmp;
    }
    int point_in(vector<point> a) //判定点是否在多边形内 0在外，-1在线上，1在内
    {
        int n = a.size();
        int num = 0;
        point p = *this;
        for (int i = 0; i < n; ++i)
        {
            if (fdpd(dists(a[i], a[(i + 1) % n]) == 0))
                return -1;
            int k = fdpd((a[(i + 1) % n] - a[i]) ^ (p - a[i]));
            int d1 = fdpd(a[i].y - p.y);
            int d2 = fdpd(a[(i + 1) % n].y - p.y);
            if (k > 0 && d1 <= 0 && d2 > 0)
                num++;
            if (k < 0 && d2 <= 0 && d1 > 0)
                num--;
        }
        if (num)
            return 1;
        return 0;
    }
    friend double area(vector<point> a) //计算多边形面积,点逆时针方向
    {
        int n = a.size();
        double sum = 0;
        for (int i = 1; i < n; ++i)
            sum += a[i] ^ a[i - 1];
        sum += a[0] ^ a[n - 1];
        return fabs(sum / 2);
    }
};

double gcd(double a, double b)
{
    if (fabs(b) < EXP)
        return a;
    if (fabs(a) < EXP)
        return b;
    return gcd(b, fmod(a, b));
}

void solve()
{
    point A, B, C;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    double a = (C - B).len();
    double b = (C - A).len();
    double c = (B - A).len();
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = a * b * c / 4 / s;
    double ang1 = acos(1 - a * a / 2 / r / r);
    double ang2 = acos(1 - b * b / 2 / r / r);
    double ang3 = PI * 2 - ang1 - ang2;
    double _gcd = gcd(ang1, gcd(ang2, ang3));
    double ans = PI * r * r * sin(_gcd) / _gcd;
    printf("%.6f\n", ans);
}

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}
/***/
const long long MOD = 998244353;
const long long INF = 1e9 + 10;
const long long INFLL = 1e18;

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vll;
typedef complex<double> cd;

#define forn(i, n) for (int i = 0; (i) != (n); (i)++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define popcount(x) __builtin_popcount(x)
#define popcountll(x) __builtin_popcountll(x)
#define fi first
#define se second
#define re return
#define pb push_back
#define uniq(x) sort(all(x)); (x).resize(unique(all(x)) - (x).begin())

#ifdef LOCAL
#define dbg(x) cerr << __LINE__ << " " << #x << " " << x << endl
#define ln cerr << __LINE__ << endl
#else
#define dbg(x) void(0)
#define ln void(0)
#endif // LOCAL

int cx[4] = {-1, 0, 1, 0};
int cy[4] = {0, -1, 0, 1};
string Yes[2] = {"No\n", "Yes\n"};
string YES[2] = {"NO\n", "YES\n"};
string Possible[2] = {"Impossible\n", "Possible\n"};
string POSSIBLE[2] = {"IMPOSSIBLE\n", "POSSIBLE\n"};

#define ok(x, n) (0 <= (x) && (x) < (n))
#define withBit(mask, i) ((mask & (1 << i)) > 0)

ll log10(ll x)
{
    if (x < 10) re 1;
    re 1 + log10(x / 10);
}

ll ds(ll x)
{
    if (x < 10) return x;
    re x % 10 + ds(x / 10);
}

double sqr(double x)
{
    return x * x;
}

bool inmask(int bit, int mask)
{
    return (mask & (1 << bit)) > 0;
}

void Del(vector<int> &v, int pos)
{
    swap(v[pos], v[v.size() - 1]);
    v.pop_back();
}

long long g(vector<long long> &p, int pos)
{
    if (ok(pos, p.size())) return p[pos];
    if (pos < 0 || p.size() == 0) return 0;
    return p.back();
}

int g(vector<int> &p, int pos)
{
    if (ok(pos, p.size())) return p[pos];
    if (pos < 0 || p.size() == 0) return 0;
    return p.back();
}

ll binpow(ll x, ll y)
{
    if (!y) re 1 % MOD;
    ll l = binpow(x, y / 2);
    if (y % 2) re l * l % MOD * x % MOD;
    re l * l % MOD;
}

ll rev(ll x)
{
    return binpow(x, MOD - 2);
}

int __precomputed_combinatorics = 0;
vector<ll> __fact, __ufact, __rev;

inline void __precompute_combinatorics(int __n)
{
    if (__n < 2) __n = 2;
    if (__precomputed_combinatorics >= __n)
        return;
    __fact.resize(__n);
    __ufact.resize(__n);
    __rev.resize(__n);
    __rev[1] = 1;
    for (int i = max(2, __precomputed_combinatorics); i < __n; i++)
        __rev[i] = MOD - __rev[MOD % i] * (MOD / i) % MOD;
    __fact[0] = 1, __ufact[0] = 1;
    for (int i = max(1, __precomputed_combinatorics); i < __n; i++)
        __fact[i] = __fact[i - 1] * i % MOD, __ufact[i] = __ufact[i - 1] * __rev[i] % MOD;
    __precomputed_combinatorics = __n;
}

ll fact(int x)
{
    if (__precomputed_combinatorics <= x)
        __precompute_combinatorics(x + 1);
    return __fact[x];
}

ll cnk(int n, int k)
{
    if (k < 0 || k > n)
        return 0;
    if (__precomputed_combinatorics <= n)
        __precompute_combinatorics(n + 1);
    return __fact[n] * __ufact[n - k] % MOD * __ufact[k] % MOD;
}

template<typename T> istream& operator>>(istream& in, vector<T>& a)
{
    for (int i = 0; i < a.size(); i++)
        in >> a[i];
    return in;
}

template<typename T> ostream& operator<<(ostream& out, const vector<T>& a)
{
    for (auto e : a)
    {
        out << e << " ";
        if (typeid(T) != typeid(int) && typeid(T) != typeid(ll))
            out << "\n";
    }
    return out;
}

void solve()
{
    const double PI = acos(-1);
    auto dist = [&](double x1, double y1, double x2, double y2){
        return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    };

    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    vector<double> tr;
    tr.push_back(dist(x1, y1, x2, y2));
    tr.push_back(dist(x1, y1, x3, y3));
    tr.push_back(dist(x3, y3, x2, y2));
    sort(tr.begin(), tr.end());

    double ans = 1e9;
    for (int v = 3; v <= 100; v++)
    {
        for (int a = 1; a < v; a++)
        {
            for (int b = a + 1; b < v; b++)
            {
                double ang1 = 0;
                double ang2 = 2 * PI / v * a;
                double ang3 = 2 * PI / v * b;
                vector<double> di;
                di.push_back(dist(cos(ang1), sin(ang1), cos(ang2), sin(ang2)));
                di.push_back(dist(cos(ang1), sin(ang1), cos(ang3), sin(ang3)));
                di.push_back(dist(cos(ang3), sin(ang3), cos(ang2), sin(ang2)));
                sort(di.begin(), di.end());

                int ok = 1;
                for (int i = 1; i < 3; i++)
                {
                    if (abs(di[0] * tr[i] - tr[0] * di[i]) > 1e-4)
                        ok = 0;
                }
                if (ok)
                {
                    double S = v * sin(2 * PI / v) / 2 * tr[0] / di[0] * tr[0] / di[0];
                    ans = min(ans, S);
                }
            }
        }
    }
    cout << setprecision(20) << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    #ifdef LOCAL
    cout << "\n";
    #endif // LOCAL

    int t = 1;
    #ifdef tests
    cin >> t;
    #endif // tests
    while (t--)
    {
        solve();
    }
}

/*/
//░░░░░░░░░░▄
//░░░░░░░░▄▐░▄▄█████▄▄
//░░░░░░▄█████████████▄▀▄▄░▄▄▄
//░░░░░█████████████████▄██████
//░░░░████▐█████▌████████▌█████▌
//░░░████▌█████▌█░████████▐▀██▀
//░▄█████░█████▌░█░▀██████▌█▄▄▀▄
//░▌███▌█░▐███▌▌░░▄▄░▌█▌███▐███░▀
//▐░▐██░░▄▄▐▀█░░░▐▄█▀▌█▐███▐█
//░░███░▌▄█▌░░▀░░▀██░░▀██████▌
//░░░▀█▌▀██▀░▄░░░░░░░░░███▐███
//░░░░██▌░░░░░░░░░░░░░▐███████▌
//░░░░███░░░░░▀█▀░░░░░▐██▐███▀▌
//░░░░▌█▌█▄░░░░░░░░░▄▄████▀░▀
//░░░░░░█▀██▄▄▄░▄▄▀▀▒█▀█░▀
//░░░░░░░░░▀░▀█▀▌▒▒▒░▐▄▄
//░░░░░░░░▄▄▀▀▄░░░░░░▄▀░▀▀▄▄
//░░░░░░▄▀░▄▀▄░▌░░░▄▀░░░░░░▄▀▀▄
//░░░░░▐▒▄▀▄▀░▌▀▄▄▀░░░░░░▄▀▒▒▒▐
//░░░░▐▒▒▌▀▄░░░░░▌░░░░▄▄▀▒▐▒▒▒▒▌
//░░░▐▒▒▐░▌░▀▄░░▄▀▀▄▀▀▒▌▒▐▒▒▒▒▐▐
//░░░▌▄▀░░░▄▀░█▀▒▒▒▒▀▄▒▌▐▒▒▒▒▒▌▌
//░░▄▀▒▐░▄▀░░░▌▒▐▒▐▒▒▒▌▀▒▒▒▒▒▐▒▌
#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <set>
#include <algorithm>
#include <map>
#include <chrono>
#include <cstring>
#include <stack>
#include <bitset>
#include <cmath>

using namespace std;
#define ll long long
#define pii pair<int,int>
#define vpii vector<pii>
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define vvd vector<vd>
#define pdd pair<double,double>
#define vpdd vector<pdd>
#define vvll vector<vll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define search(set0, x) (set0.find(x)!=set0.end())
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vvc vector<vc>
#define vvb vector<vb>
#define mp make_pair
#define F first
#define S second
#define pss pair<string, string>
#define vpss vector<pss>
#define double long double
#define vvs vector<vs>
#define mysort(vector) sort(vector.begin(), vector.end())
#define myreverse(vector) reverse(vector.begin(), vector.end())
#define printvi(vector) for (int x: vector) cout << x << " "; cout << endl;
#define printvll(arr) for (ll x: arr) cout << x << " "; cout << endl;
#define vvpii vector<vpii>
#define vvpll vector<vpll>
#define vp3i vector<pair<int, pii>>
#define treap Node*
#define printpair(p0) cout << p0.F << " " << p0.S << endl;
#define printvp(arr) for (auto p0: arr) { printpair(p0) };
#define FOR(x0) for (int i = 0; i < x0; ++i)
#define ull unsigned long long
#define vpt vector<Point>
#define M_PI 3.14159265358979323846
//#define endl '\n'
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const ll mod0 = 1e9 + 7;
const ll mod1 = 998244353;
const ll mod2 = 1e9 + 9;
const ll mod3 = 2147483647;

const int maxn = 5e5 + 5;
const int sz = 512 * 1024;
const ll inf = 2 * 1024 * 1024 * 1023 - 1;
const ll INF = inf * inf;
const double eps = 1e-3;

void init() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.precision(16);
}

int main() {
    init();
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double al = acos((a * a + b * b - c * c) / (2 * a * b));
    double be = acos((a * a + c * c - b * b) / (2 * a * c));
    double ga = acos((b * b + c * c - a * a) / (2 * b * c));
    double s;
    double p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = a * b * c / (4 * s);
    for (int i = 3; i <= 100; ++i){
        double al1 = al * i, be1 = be * i, ga1 = ga * i;
        double maxsin = max(abs(sin(al1)), max(abs(sin(be1)), abs(sin(ga1))));
        if (maxsin < eps){
            cout << i * r * r * sin(2 * M_PI / i) / 2 << endl;
            return 0;
        }
    }
    return 0;
}
/*/
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <cstdio>
#include <vector>
#include <utility>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#define INF 1e9
#define pb push_back
#define mp make_pair
#define forn(i,n) for (int i = 0; i < n; i++)

using namespace std;

const double EPS = 1e-5;
const double PI = 3.1415926;

struct vect
{
    double x, y;
    vect () {}
    vect (double a, double b)
    {
        x = a;
        y = b;
    }
};

struct segment
{
    double x1, y1, x2, y2;
    segment () {}
    segment (const vect &a, const vect &b)
    {
        x1 = a.x;
        y1 = a.y;
        x2 = b.x;
        y2 = b.y;
    }
};

struct line
{
    double a, b, c;
    line () {}
    line (const segment & s)
    {
        a = s.y2 - s.y1;
        b = s.x1 - s.x2;
        c = - (a * s.x1 + b * s.y1);
    }
    line (const vect & p1, const vect & p2)
    {
        a = p2.y - p1.y;
        b = p1.x - p2.x;
        c = - (a * p1.x + b * p1.y);
    }
    line (const line & n, double r)
    {
        vect t;
        if (n.a != 0)
        {
            t.x = - n.c / n.a;
            t.y = 0;
        }
        else
        {
            t.x = 0;
            t.y = - n.c / n.b;
        }

        a = n.a;
        b = n.b;
        c = - a * t.x - b * t.y - r * sqrt(a * a + b * b);
    }
    line (const line & n, const vect & p1)
    {
        vect p2(p1.x + n.a, p1.y + n.b);
        a = p2.y - p1.y;
        b = p1.x - p2.x;
        c = - (a * p1.x + b * p1.y);
    }
};

double distvv (const vect & a, const vect & b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double distvv2 (const vect & a, const vect & b)
{
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

struct angle
{
    double ang;
    angle() {}
    angle (vect & a, vect & b, vect & c)
    {
        double x2 = distvv2(a, b);
        double y2 = distvv2(b, c);
        double z2 = distvv2(a, c);
        double x = distvv(a, b);
        double y = distvv(b, c);
        double z = distvv(a, c);
        ang = acos((x * x + y * y - z * z) / (2 * x * y));
    }
};

bool eq (double a, double b)
{
        return fabs (a - b) < EPS;
}

double len (const vect & a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

vect operator - (const vect & a, const vect & b)
{
    vect t;
    t.x = a.x - b.x;
    t.y = a.y - b.y;
    return t;
}

vect operator + (const vect & a, const vect & b)
{
    vect t;
    t.x = a.x + b.x;
    t.y = a.y + b.y;
    return t;
}
double operator ^ (const vect & a, const vect & b)
{
    return a.x * b.x + a.y * b.y;
}

double det (double a, double b, double c, double d)
{
    return a * d - b * c;
}

bool equivalent (line & n, line & m)
{
    return (fabs(det(n.a, n.b, m.a, m.b)) < EPS) && (fabs(det(n.a, n.c, m.a, m.c)) < EPS) && (fabs(det(n.c, n.b, m.c, m.b)) < EPS);
}

bool parallel (line & n, line & m)
{
    return fabs(det(n.a, n.b, m.a, m.b)) < EPS;
}

vect intersect (line & n, line & m)
{
    vect res;
    res.x = - det(n.c, n.b, m.c, m.b) / det(n.a, n.b, m.a, m.b);
    res.y = - det(n.a, n.c, m.a, m.c) / det(n.a, n.b, m.a, m.b);
    return res;
}

line bissect (const vect & a, const vect & b, const vect & c)
{
    vect t1((a - b).x / len(a - b), (a - b).y / len(a - b));
    vect t2((c - b).x / len(c - b), (c - b).y / len(c - b));
    return line(b, t1 + t2 + b);
}

bool intersect2 (vect & a, vect & b, vect & p)
{
    return ((b - a) ^ (p - a)) >= 0;
}

double distvl (const vect & a, const line & l)
{
    return fabs(l.a * a.x + l.b * a.y + l.c) / (sqrt(l.a * l.a + l.b * l.b));
}

bool eqin (vect & a, vect &b, vect &c, vect &d)
{
    if (a.x == b.x)
    {
        return ((a.y < b.y) && (b.y < c.y) && (c.y < d.y));
    }
    else
    {
        return ((a.x < b.x) && (b.x < c.x) && (c.x < d.x));
    }
}

bool good (double a)
{
    double b = floor(a + 0.5);
    return eq(a, b);
}

int main()
{
    //freopen("input.txt", "r", stdin);
    vect a, b, c;
    scanf("%lf%lf%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
    vect abp((a.x + b.x) / 2, (a.y + b.y) / 2), bcp((b.x + c.x) / 2, (b.y + c.y) / 2);
    line abl(a, b), bcl(b, c);
    line n(abl, abp);
    line m(bcl, bcp);
    vect t = intersect(n, m);
    double radius = distvv(t, a);
    angle p = angle (a, t, b), q = angle (a, t, c), r = angle (b, t, c);
    for (int k = 3; ; k++)
    {
        double fi = 2 * PI / k;
        if (good(p.ang / fi) && good(q.ang / fi) && good(r.ang / fi))
        {
            double s = radius * radius * sin(fi) / 2 * k;
            printf("%.6lf", s);
            return 0;
        }
    }
    return 0;
}

/*/
/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define CASET int ___T, case_n = 1; scanf("%d ", &___T); while (___T-- > 0)
#define MP make_pair
#define PB push_back
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define PII pair<int,int>
#define VI vector<int>
#define VL vector<long long>
#define VPII vector<pair<int,int> >
#define PLL pair<long long,long long>
#define VPLL vector<pair<long long,long long> >
#define F first
#define S second
typedef long long LL;
using namespace std;


//1. Determine radius r of circumcircle : its product of the sides / (4xarea of triangle)
//2. Determine number n of polygons, it's the pgdc of the 3 angles or something.
//3. Determine area of arena, it's  r^2*n*sin(2pi/n)/2


double area(double x1,double x2,double y1,double y2,double z1,double z2){
    return abs(0.5*(x1*(y2-z2)+y1*(z2-x2)+z1*(x2-y2)));
}

double dist(double x1,double x2,double y1,double y2){
    return sqrt(pow((x1-y1),2)+pow(x2-y2,2));
}

double angle(double a,double b,double c){
    return acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
}


double pgcd (double m, double n)
{
  return (abs(n)<pow(10,-6))?(m):(pgcd( n,fmod(m+0.5*pow(10,-6),n))-0.5*pow(10,-6));
}

bool divise(double m,double n,double prec=0.5*pow(10,-6))
{
    return abs(fmod(m+prec,n)-prec)<prec;
}

int main(){
    double x1,x2,y1,y2,z1,z2;
//    cout<<x1<<" "<<x2<<endl;
    scanf("%lf%lf",&x1,&x2);
    scanf("%lf%lf",&y1,&y2);
    scanf("%lf%lf",&z1,&z2);
    cout.precision(12);
 //   cout<<x1<<" "<<x2<<endl;
 //   cout<<y1<<" "<<y2<<endl;
//    cout<<z1<<" "<<z2<<endl;
    double At=area(x1,x2,y1,y2,z1,z2);
 //    cout<<At<<endl;
    double a,b,c;
    a=dist(x1,x2,y1,y2);
    b=dist(y1,y2,z1,z2);
    c=dist(x1,x2,z1,z2);
//    cout<<a<<" "<<b<<" "<<c<<endl;
    double rc=(a*b*c)/(4*At);
//    cout<<rc<<endl;
    //angles
    double A,B,C;
    A=angle(a,b,c);
    B=angle(b,c,a);
    C=angle(c,b,a);
   //  cout<<A<<" "<<B<<" "<<C<<endl;
    double pi=3.14159265358979;
//    double nbsides=pi/pgcd(A,pgcd(B,C));
    long nbs;//=(long)(nbsides+0.5);
    REP(i,3000){
        if (divise(A,pi/(i+1)) && divise(B,pi/(i+1)) && divise(C,pi/(i+1)))
        {
            nbs=i+1;
            break;
        }
    }
    double res=pow(rc,2)*nbs*sin(2*pi/nbs)/2;
 //    cout<<pgcd(A,pgcd(B,C))<<" "<<nbsides<<" "<<nbs<<" "<<rc<<" "<<res<<endl;
    cout<<res<<endl;
}
#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define lowbit(x) (x&-x)
#define reg register
#define pb push_back
#define mkpr make_pair
#define fir first
#define sec second
typedef long long LL;
typedef unsigned long long uLL;
const int mo=998244353;
const int jzm=2333;
const int lim=10000000;
const int orG=3,invG=332748118;
const double Pi=acos(-1.0);
const double eps=1e-5;
typedef pair<int,int> pii;
template<typename _T>
_T Fabs(_T x){return x<0?-x:x;}
template<typename _T>
void read(_T &x){
	_T f=1;x=0;char s=getchar();
	while(s>'9'||s<'0'){if(s=='-')f=-1;s=getchar();}
	while('0'<=s&&s<='9'){x=(x<<3)+(x<<1)+(s^48);s=getchar();}
	x*=f;
}
template<typename _T>
void print(_T x){if(x<0){x=(~x)+1;putchar('-');}if(x>9)print(x/10);putchar(x%10+'0');}
LL gcd(LL a,LL b){return !b?a:gcd(b,a%b);}
int add(int x,int y,int p){return x+y<p?x+y:x+y-p;}
int qkpow(int a,int s,int p){int t=1;while(s){if(s&1LL)t=1ll*a*t%p;a=1ll*a*a%p;s>>=1LL;}return t;}
int T,n,m,tot;
double sqr(double x){return x*x;}
struct point{
	double x,y;point(){x=y=0;}
	point(double X,double Y){x=X;y=Y;}
	point operator + (const point &rhs)const{return point(x+rhs.x,y+rhs.y);}
	point operator - (const point &rhs)const{return point(x-rhs.x,y-rhs.y);}
	double operator * (const point &rhs)const{return x*rhs.x+y*rhs.y;}
	double operator ^ (const point &rhs)const{return x*rhs.y-y*rhs.x;}
	point operator * (const double &rhs)const{return point(x*rhs,y*rhs);}
	point operator / (const double &rhs)const{return point(x/rhs,y/rhs);}
	bool operator == (const point &rhs){return Fabs(x-rhs.x)<eps&&Fabs(y-rhs.y)<eps;}
	bool operator != (const point &rhs){return Fabs(x-rhs.x)>eps||Fabs(y-rhs.y)>eps;}
	double length(){return sqrt(sqr(x)+sqr(y));}
	point rev(){return point(y,-x);}
};
double dist(point x,point y){return (x-y).length();}
struct line{
	point s,t;line(){}line(point S,point T){s=S;t=T;}
	void Sorted(){if(s.y<t.y)swap(s,t);}
	bool containX(double x){return min(s.x,t.x)<=x&&x<=max(s.x,t.x);}
	bool conPoint(point x){return Fabs((s-x)^(t-x))<eps&&(s.x-x.x)*(t.x-x.x)<=0;}
	double queryY(double y){
		if(Fabs(s.y-y)<eps)return s.x;
		if(Fabs(t.y-y)<eps)return t.x;
		if(Fabs(s.x-t.x)<eps)return s.x;
		return s.x+(s.y-y)/(s.y-t.y)*(t.x-s.x);
	}
	double queryX(double x){
		if(Fabs(s.x-x)<eps)return s.y;
		if(Fabs(t.x-x)<eps)return t.y;
		if(Fabs(s.y-t.y)<eps)return s.y;
		return s.y+(s.x-x)/(s.x-t.x)*(t.y-s.y);
	}
	double slope(){return (t.y-s.y)/(t.x-s.x);}
	point direct(){return t-s;}
	point askMid(){return (s+t)/2.0;}
};
int work(double x){if(Fabs(x)<eps)return 0;return x>0?1:-1;}
bool LineCross(line x,line y){return work((x.s-y.s)^(x.t-y.s))*work((x.s-y.t)^(x.t-y.t))<=0;}
double askSize(point x,point y,point z){return 0.5*Fabs((x-z)^(y-z));}
double askAngle(point x,point y){
	if(Fabs(x*y/(x.length()*y.length()))>1.0)return x*y>0?Pi+Pi:Pi;
	return acos(x*y/(x.length()*y.length()));
}
point askCross(line x,line y){
	double tmp1=askSize(x.s,y.s,y.t),tmp2=askSize(x.t,y.s,y.t);
	return (x.s*tmp2+x.t*tmp1)/(tmp1+tmp2);
}
bool cmp(point x,point y){if(Fabs(x.x-y.x)<eps)return x.y<y.y;return x.x<y.x;}
bool likint(double x){return min(Fabs(x-floor(x)),Fabs(x-ceil(x)))<eps;}
signed main(){
	point x,y,z;
	scanf("%lf %lf",&x.x,&x.y);
	scanf("%lf %lf",&y.x,&y.y);
	scanf("%lf %lf",&z.x,&z.y);
	line a=line(x,y),b=line(x,z),c=line(y,z);
	point mida=(x+y)/2.0,midb=(x+z)/2.0;
	line d=line(mida,mida+(mida-x).rev()),tmpd=d;
	line e=line(midb,midb+(midb-x).rev()),tmpe=e;
	if(Fabs((tmpd.s-tmpd.t).x)>Fabs((tmpd.s-tmpd.t).y))
		d=line(point(1e6,tmpd.queryX(1e6)),point(-1e6,tmpd.queryX(-1e6)));
	else d=line(point(tmpd.queryY(1e6),1e6),point(tmpd.queryY(-1e6),-1e6));
	if(Fabs((tmpe.s-tmpe.t).x)>Fabs((tmpe.s-tmpe.t).y))
		e=line(point(1e6,tmpe.queryX(1e6)),point(-1e6,tmpe.queryX(-1e6)));
	else e=line(point(tmpe.queryY(1e6),1e6),point(tmpe.queryY(-1e6),-1e6));
	point O=askCross(d,e);double r=dist(O,x);
	double a1=askAngle(x-O,y-O),a2=askAngle(x-O,z-O),a3=askAngle(y-O,z-O);
	//printf("middle %.3f %.3f %.3f %.3f %.3f\n",O.x,O.y,(x-O).length(),(y-O).length(),(z-O).length());
	for(int i=3;;i++){
		double tmp=(Pi+Pi)/(1.0*i);
		if(likint(a1/tmp)&&likint(a2/tmp)&&likint(a3/tmp))
			{printf("%.6f\n",0.5*i*r*r*sin(tmp));break;}
	}
	return 0;
}
/*
(1,2)(-2,1)
*/ 
﻿#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <vector>
#include <functional>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <set>
#include <cstdlib>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <numeric>
#include <deque>
#include <random>
#include <chrono>
#include <ctime>
#include <climits>
#include <stack>
#include <array>
#include <iomanip>
#include <complex>
#include <bitset>
#include <iostream>
#include <cstring>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define all(a) a.begin(), a.end()
#define pii pair<int, int>
#define len(a) (int)a.size()
#define pb push_back
#define eb emplace_back
#define em emplace
#define y0 withindarkness
#define y1 apinklotusbloomed
#define yn carryingapurplesoul
#define j1 togetherformingtheTeam

/*Всё,
пиздуй-бороздуй, и я попиздил, нахуй*/

void useiostream() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cerr.tie(0);
}

void drop(char const *bu) {
	printf("%s", bu);
	exit(0);
}

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a / gcd(a, b)*b;
}

ld const pi = acos(-1.0L);
ld const eps = 0.00001L;

template<typename T, typename TT> bool mi(T &a, TT b) { return a > b ? (a = b, true) : false; }
template<typename T, typename TT> bool ma(T &a, TT b) { return a < b ? (a = b, true) : false; }

mt19937 ran(time(0));

int const mod = (int)1e9 + 7;

int bp(int a, int p) {
	int re = 1;
	while (p) {
		if (p & 1)re = (re * 1LL * a) % mod;
		p >>= 1;
		a = (a * 1LL * a) % mod;
	}
	return re;
}

int inv(int a) {
	return bp(a, mod - 2);
}

struct pt {
	ld x, y;
	pt() {}
	pt(ld a, ld b) { x = a, y = b; }
	void read() {
		scanf("%Lf %Lf", &x, &y);
	}
	ld getlen() {
		return sqrt(x*x + y * y);
	}
};

bool eq(ld a, ld b) {
	return abs(a - b) <= eps;
}

bool eq(pt a, pt b) {
	return eq(a.x, b.x) && eq(a.y, b.y);
}

pt arr[3];

struct seg {
	pt p1, p2;
	pt middle;
	ld le;
	pt ve;
	seg() {}
	seg(pt a, pt b) {
		p1 = a;
		p2 = b;
		middle.x = (a.x + b.x) / 2;
		middle.y = (a.y + b.y) / 2;
		ve.x = b.x - a.x;
		ve.y = b.y - a.y;
		le = ve.getlen();
	}
	seg norm() {
		ld Y, X;
		Y = ve.x;
		X = -ve.y;
		pt ome;
		ome.x = middle.x + X;
		ome.y = middle.y + Y;
		return seg(middle, ome);
	}
};

pt intersection(seg a, seg b) {
	/*
	a.p1.x + A * a.ve.x - b.p1.x - B * b.ve.x = 0;
	a.p1.y + A * a.ve.y - b.p1.y - B * b.ve.y = 0;


	a.p1.x * a.ve.y + A * a.ve.x * a.ve.y - b.p1.x * a.ve.y- B * b.ve.x * a.ve.y = 0;
	-a.p1.y * a.ve.x- A * a.ve.y * a.ve.x + b.p1.y * a.ve.x + B * b.ve.y * a.ve.x = 0;

	-a.p1.x * a.ve.y + a.p1.y * a.ve.x + b.p1.x * a.ve.y - b.p1.y * a.ve.x = B(b.ve.y * a.ve.x - b.ve.x * a.ve.y)


	*/
	ld B = (-a.p1.x * a.ve.y + a.p1.y * a.ve.x + b.p1.x * a.ve.y - b.p1.y * a.ve.x) / (b.ve.y * a.ve.x - b.ve.x * a.ve.y);
	ld x, y;
	x = b.p1.x + B * b.ve.x;
	y = b.p1.y + B * b.ve.y;
	return {x, y};
}

pt rot(pt o, pt a, ld betta) {
	ld Y, X;
	ld x = -o.x + a.x;
	ld y = -o.y + a.y;	
	Y = y * cos(betta) + x * sin(betta);
	X = cos(betta)*x - y * sin(betta);
	return { o.x + X, o.y + Y };
}

int main() {
	//useiostream();
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	//freopen("points.in", "r", stdin);
	//freopen("points.out", "w", stdout);
#endif

	for (int i = 0; i < 3; i++)arr[i].read();

	seg a(arr[0], arr[1]), b(arr[0], arr[2]);
	
	seg na = a.norm(), nb = b.norm();

	pt o = intersection(na, nb);

	for (int n = 3; n <= 200; n++) {
		vector<pt> polygon;
		ld alpha = 2*pi / n;
		polygon.pb(arr[0]);
		while (len(polygon) < n) {
			polygon.pb(rot(o, polygon.back(), alpha));
		}
		vector<bool> kek(3, 0);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3; j++) {
				kek[j] = kek[j] | eq(arr[j], polygon[i]);
			}
		}
		bool k = 1;
		for (auto x : kek)k &= x;
		if (k == 1) {
			ld s = (o.x - polygon[0].x)*(o.y - polygon[1].y) - (o.y - polygon[0].y)*(o.x - polygon[1].x);
			s = abs(s) / 2;
			s *= n;
			printf("%.9Lf\n", s);
			return 0;
		}
	}
	
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
#pragma region start
#define fi first
#define se second
#define ll long long
#define pb push_back
#define eb emplace_back
#define lll __int128
#define ull unsigned long long
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pii pair<int,int>
#define pcc pair<char,char>
#define pss pair<string,string>
#define pdd pair<double,double>
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define YN(can) ((can) ? "YES" : "NO")
#define lowbit(x) (x&-x)
#define low lower_bound
#define upp upper_bound
#define MOD(x) (((x)%mod+mod)%mod)
#define all(x) (x).begin(),(x).end()
#define uni(x) (x).erase(unique(all(x)),(x).end())
#define mem(a,x,n) memset(a,x,sizeof(a[0])*(n+1))
#define cpy(a,x,n) memcpy(a,x,sizeof(a[0])*(n+1))
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,r,l) for(int i=r;i>=l;i--)
#define endl '\n'
#define x01(x) cout<<bitset<sizeof(x)*8>(x)<<endl
#define x8(x) cout<<oct<<(x)<<endl
#define x10(x) cout<<dec<<(x)<<endl
#define x16(x) cout<<hex<<(x)<<endl
#define double(x,len) fixed<<setprecision(len)<<(x)
#ifdef CF_DEBUG
#include "zcx/zcx.h"
#else
#define zcx (0)
#define debug(...) (0)
#define out(x) (0)
#endif
template <class T> using vc = vector<T>;
template <class T> using vvc = vector<vc<T> >;
template<typename T>T gcd(T a, T b) { return a ? gcd(b % a, a) : b; }
template<typename T, typename T2>ll ksm(ll x, T n, T2 mod) { ll ret = 1; if (x == 1) return 1; while (n) { if(n & 1) ret = ret * x % mod; n >>= 1; x = x * x % mod; } return ret % mod; }
int T_T = 1;

void init();
void solve();
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	// int size(512 << 20); // 512M
    // __asm__("movq %0, %%rsp\n"::"r"( ( char* )malloc(size) + size ));
	init();
	rep(i, 1, T_T)
	{
		// cout << "Case #" << i << ": ";
		solve();
	}
	// exit(0);
	return 0;
}
#pragma endregion start

// const int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};
const int inf = 0x3f3f3f3f;
const ll  INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 998244353;
const int N = 1e5 + 5;

int n, m, k;

namespace Calc_G
{
	const double PI = acos(-1.0);

	struct P2
	{
		double x, y;
		P2(double x = 0.0, double y = 0.0):x(x), y(y) {}
		
		void rot(double d) //旋转角
		{
			double cs = cos(d), sn = sin(d);
			double tmp = x * cs - y * sn;
			y = x * sn + y * cs;
			x = tmp;
		}

		friend P2 operator-(const P2 &a, const P2 &b) { return P2(a.x - b.x, a.y - b.y); }
		friend P2 operator+(const P2 &a, const P2 &b) { return P2(a.x + b.x, a.y + b.y); }
		template<typename T>
		friend P2 operator/(const P2 &a, const T &b) { return P2(a.x / b, a.y / b); }
		friend double abs2(const P2 &a) { return a.x * a.x + a.y * a.y; }
		friend double abs(const P2 &a) { return sqrt(abs2(a)); }
	};
}
using namespace Calc_G;

P2 p[4];

void solve()
{
	rep(i, 1, 3) cin >> p[i].x >> p[i].y;

	double ma, mb;
	do
	{
		double f = rand() % 311 / 100.0;
		rep(i, 1, 3) p[i].rot(f);
		if (p[1].y == p[2].y || p[2].y == p[3].y) continue;

		ma = -(p[2].x - p[1].x) / (p[2].y - p[1].y);
		mb = -(p[3].x - p[2].x) / (p[3].y - p[2].y);
	} while (ma == mb);

	P2 p1 = (p[1] + p[2]) / 2, p2 = (p[2] + p[3]) / 2;

	P2 cp((-p1.y + p2.y + p1.x * ma - p2.x * mb) / (ma - mb), 0.0);
	cp.y = ma * (cp.x - p1.x) + p1.y;

	//边长
	double s1 = hypot(p[1].x - p[2].x, p[1].y - p[2].y),
		   s2 = hypot(p[2].x - p[3].x, p[2].y - p[3].y),
		   s3 = hypot(p[3].x - p[1].x, p[3].y - p[1].y);

	//半径
	double r1 = hypot(p[1].x - cp.x, p[1].y - cp.y),
		   r2 = hypot(p[2].x - cp.x, p[2].y - cp.y),
		   r3 = hypot(p[3].x - cp.x, p[3].y - cp.y);

	//角
	double f1 = atan2(p[1].x - cp.x, p[1].y - cp.y),
		   f2 = atan2(p[2].x - cp.x, p[2].y - cp.y),
		   f3 = atan2(p[3].x - cp.x, p[3].y - cp.y);

	// double q = 180 / PI;

	rep(i, 3, 100)
	{
		if (fabs(sin((f1 - f3) * i / 2.0)) > 1e-4) continue;
		if (fabs(sin((f1 - f2) * i / 2.0)) > 1e-4) continue;
		if (fabs(sin((f2 - f3) * i / 2.0)) > 1e-4) continue;
		cout << double(i * r1 * r1 * 0.5 * sin(2 * PI / i), 8) << endl;
		return;
	}

	assert(false);
}

void init()
{
    // cin >> T_T;
}

/*
log2(1e5) = 16.609
log2(1e6) = 19.931
log2(1e7) = 23.253
*/
/*/
#include <iostream>
#include <math.h>

const double PI = 3.141592653589793238463;

struct Vector2 {
    double x;
    double y;

    Vector2()
        : x(0), y(0)
    {
    }

    Vector2 (double x, double y)
        : x(x), y(y)
    {
    }

    Vector2 operator+(const Vector2& v) const
    {
        return Vector2(x + v.x, y + v.y);
    }

    Vector2 operator-(const Vector2& v) const
    {
        return Vector2(x - v.x, y - v.y);
    }

    Vector2 operator*(const double& nb) const
    {
        return Vector2(x * nb, y * nb);
    }

    Vector2 operator/(const double& nb) const
    {
        return Vector2(x / nb, y / nb);
    }

    double dotProduct(const Vector2& v) const
    {
        return x * v.x + y * v.y;
    }

    double length() const
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }
};

Vector2 getCentroid(Vector2 p0, Vector2 p1, Vector2 p2)
{
    Vector2 center01 = (p0 + p1) / 2.0f;
    Vector2 center02 = (p0 + p2) / 2.0f;
    Vector2 center12 = (p1 + p2) / 2.0f;

    Vector2 edge01 = p1 - p0;
    Vector2 edge02 = p2 - p0;
    Vector2 edge12 = p2 - p1;

    if (edge01.y == 0.0f)
        edge01 = edge12;
    if (edge02.y == 0.0f)
        edge02 = edge12;

    Vector2 n01(edge01.y, -edge01.x);
    Vector2 n02(edge02.y, -edge02.x);

    double a01 = n01.y / n01.x;
    double a02 = n02.y / n02.x;

    double b01 = center01.y - a01 * center01.x;
    double b02 = center02.y - a02 * center02.x;

    Vector2 centroid;
    centroid.x = (b02 - b01) / (a01 - a02);
    centroid.y = a01 * centroid.x + b01;

    return centroid;
}

double minArea(Vector2 centroid, double radius, double angleNumber)
{
    double angle = 2 * PI / angleNumber;

    Vector2 right = centroid + Vector2(radius, 0);  
    Vector2 next = centroid + Vector2(cos(angle), sin(angle)) * radius;
    Vector2 consecutivePointsVector = next - right;
    double distanceBetweenConsecutives = consecutivePointsVector.length();
    double perimeter = distanceBetweenConsecutives * angleNumber;

    Vector2 middle = (right + next) / 2;
    Vector2 centroidToMiddle = middle - centroid;
    double apothem = centroidToMiddle.length();
    return 0.5 * perimeter * apothem;
}

float isWholeNumber(double value)
{
    double epsilon = 1e-2;
    double absoluteValue = abs(value);
    if (absoluteValue - floor(absoluteValue + epsilon) < epsilon)
        return true;
    return false;
}

double determineTheta(double theta01, double theta02, double theta12)
{
    double smallest = theta01;
    if (theta02 < smallest)
        smallest = theta02;
    if (theta12 < smallest)
        smallest = theta12;

    double theta = smallest;
    double epsilon = PI / 50;
    int divisor = 1;

    while (theta >= epsilon)
    {
        if (isWholeNumber(theta01 / theta) && isWholeNumber(theta02 / theta) && isWholeNumber(theta12 / theta) && isWholeNumber(2 * PI / theta))
            return theta;

        divisor++;
        theta = smallest / divisor;
    }
    return theta;
}

int main()
{
    Vector2 p0, p1, p2;

    std::cin >> p0.x;
    std::cin >> p0.y;
    std::cin >> p1.x;
    std::cin >> p1.y;
    std::cin >> p2.x;
    std::cin >> p2.y;

    Vector2 centroid = getCentroid(p0, p1, p2);

    Vector2 d0 = p0 - centroid;
    Vector2 d1 = p1 - centroid;
    Vector2 d2 = p2 - centroid;

    double theta01 = abs(acos(d0.dotProduct(d1) / (d0.length() * d1.length())));
    double theta02 = abs(acos(d0.dotProduct(d2) / (d0.length() * d2.length())));
    double theta12 = abs(acos(d1.dotProduct(d2) / (d1.length() * d2.length())));

    double theta = determineTheta(theta01, theta02, theta12);

    double angleNumber = round(2 * PI / theta);

    Vector2 centroidToPoint = p0 - centroid;
    double radius = centroidToPoint.length();
    double area = minArea(centroid, radius, angleNumber);

    std::cout.precision(12);
    std::cout << area << std::endl;
    return 0;
}




  	   	 	  	  	 		 

