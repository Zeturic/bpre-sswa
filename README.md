## Wrapping Summary Screen

In XY and later games, the Summary Screen wraps around. By that I mean if you press down on the summary screen of the last Pokémon in your party, you'll be taken back to the first Pokémon in your party (in earlier games, it would just do nothing). Similarly, if you press up while on the first Pokémon in your party, you'll go to the last.

This ports that feature to FR ROMs.

### Build Instructions

See [here](https://gist.github.com/Zeturic/db1611cc7b17c3140f9b9af32e1b596b) for the prequisites and help in installing them.

#### Cloning the repo and building the tools

Open your terminal to whatever folder you want to download this repo into. Then, do the following to download the repo and build the included tools:

```shell
$ git clone https://github.com/Zeturic/bpre-sswa.git
$ cd bpre-sswa
$ ./build_tools.sh
```

#### Adding your ROM

Copy your ROM to this directory and rename it `rom.gba`.

#### Configuration

The build system is smart enough to find enough free space on its own, but if you want it to be inserted at a particular address, you can specify it by updating the definition of `START_AT` in `config.mk`.

If the given address is acceptable (i.e. is word-aligned and has enough bytes of free space), it will be inserted there. Otherwise, it will just use `START_AT` to determine where in the ROM it should start looking for free space.

#### Building the project itself

Once you're ready, run the following to build the project:

```shell
make
```

This won't actually modify `rom.gba`, instead your output will be in `test.gba`. Naturally, test it in an emulator.
