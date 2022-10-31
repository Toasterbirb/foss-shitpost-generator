#include <string>
#include <vector>

static std::vector<std::string> topics = {
	"package manager", "distro", "desktop environment", "window manager", "shell", "terminal emulator", "music player", "video player", "matrix client"
};

static std::vector<std::string> question_words = {
	"What", "Which"
};

static std::vector<std::string> comparisons = {
	"is better", "has more users", "has less users", "is more stable", "is less stable", "has more bugs", "has less bugs", "is more popular", "is worse", "is more configurable", "looks better", "has better documentation", "has more features", "gets more updates", "has better performance", "uses less ram", "is more bloated", "is more lightweight", "has less bloat"
};

static std::vector<std::string> most_questions = {
	"is the easiest to use", "has the most users", "is the best", "is the most popular", "has the least users", "has the best ouf ot the box configuration", "is the most customizable"
};

static std::vector<std::string> grade = {
	"good", "bad", "easy to use", "difficult to use", "usable out of the box", "old", "new", "relevant"
};

static std::vector<std::string> package_managers = {
	"snap", "flatpak", "appimage", "dpkg", "entropy", "homebrew", "ipkg", "netpkg", "nix", "pacman", "petget", "PISI", "pkgsrc", "rpm", "apt", "slackpkg", "slapt-get", "swaret", "windows store", "cygwin"
};

static std::vector<std::string> distros = {
	"4MLinux", "ALT Linux", "Absolute Linux", "AlmaLinux",
	"Alpine Linux", "Amazon Linux 2", "Antergos", "ArchBang",
	"ArchLabs", "Artix Linux", "Asahi Linux", "Asianux",
	"Astra Linux", "Austrumi Linux", "BLAG Linux and GNU", "BackBox",
	"BackSlash Linux", "BackTrack", "Berry Linux", "Bharat Operating System Solutions (BOSS)",
	"Billix", "BlackArch", "Bodhi Linux", "CHAOS",
	"CRUX", "Calculate Linux", "Caldera OpenLinux", "Canaima",
	"CentOS Stream", "Chakra Linux", "ChromeOS", "Chromium OS",
	"Clear Linux OS", "ClearOS", "Clip OS", "Container Linux",
	"Corel Linux", "CrunchBang Linux", "Cub Linux", "DD-WRT",
	"Damn Small Linux", "Damn Vulnerable Linux", "Deepin", "Devuan",
	"DoudouLinux", "Dragora GNU/Linux-Libre", "Dreamlinux", "ELinOS",
	"EasyPeasy", "Edubuntu", "Eeebuntu", "Element OS",
	"Emdebian Grip", "Emmabuntüs", "EnGarde Secure Linux", "EndeavourOS",
	"Feather Linux", "Fermi Linux LTS", "Finnix", "Firefox OS",
	"Foresight Linux", "Frugalware Linux", "Fuduntu", "GNU Guix System",
	"GalliumOS", "Garuda Linux", "GeckoLinux", "GeeXboX",
	"GendBuntu", "GoboLinux", "Gobuntu", "Goobuntu",
	"HandyLinux", "Hanthana", "Hyperbola GNU/Linux-libre", "Jlime",
	"Joli OS", "KDE neon", "KaOS", "KaiOS",
	"Kali Linux", "Kanotix", "Karoshi", "KateOS",
	"Korora", "Kubuntu", "Kurumin", "Kwort",
	"LEAF Project", "LMDE", "LXLE Linux", "LiMux",
	"LiMux", "Libranet", "Lightweight Portable Security (LPS)", "LinHES",
	"Linpus Linux", "Linux From Scratch", "Linux Lite", "Linux Mint",
	"Linux Router Project", "Linux XP", "Linux for PlayStation 2", "LinuxMCE",
	"LinuxTLE", "LliureX", "Lubuntu", "MAX",
	"MEPIS", "MX Linux", "Maemo", "Mageia",
	"Manjaro", "MeeGo", "MeeGo", "MintPPC",
	"Miracle Linux", "MkLinux", "Moblin", "Molinux",
	"MontaVista Linux", "MuLinux", "Musix GNU+Linux", "Mythbuntu",
	"NepaLinux", "Netrunner", "Network Security Toolkit", "NimbleX",
	"Nitix", "NixOS", "Nova", "OpenGEU",
	"OpenMandriva", "OpenWrt", "OpenZaurus", "Oracle Linux",
	"PCLinuxOS", "Parabola GNU/Linux-libre", "Pardus", "Parrot OS",
	"Parsix", "PelicanHPC", "Pentoo", "Peppermint OS",
	"Pinguy OS", "Platypux", "Pop! OS", "Porteus",
	"Poseidon Linux", "Prevas Industrial Linux", "Puppy Linux", "PureOS",
	"Q4OS", "Qubes OS", "ROSA Linux", "Raspberry Pi OS",
	"Red Flag Linux", "Red Hat Linux", "Red Star OS", "Rocks Cluster Distribution",
	"Rocky Linux", "Russian Fedora Remix", "SUSE Linux Enterprise", "SUSE Linux",
	"Sabayon Linux", "Sabily", "Sacix", "Sailfish OS", "Salix OS",
	"Scientific Linux", "Sentry Firewall", "Skolelinux", "Slackintosh",
	"Slax", "SliTaz", "Smallfoot", "SmoothWall",
	"Solus", "SolydXK", "Sorcerer", "Source Mage",
	"SparkyLinux", "SteamOS", "Sugar-on-a-Stick Linux", "Sunwah Linux",
	"SuperGamer", "SystemRescue", "T2 SDE", "The Amnesic Incognito Live System (TAILS)",
	"Think Blue Linux", "Tinfoil Hat Linux", "Tiny Core Linux", "Tizen",
	"Topologilinux", "Trisquel GNU/Linux", "Trustix", "Turbolinux",
	"TurnKey Linux", "Twister OS", "UberStudent", "Ubuntu Budgie",
	"Ubuntu GNOME", "Ubuntu JeOS", "Ubuntu Kylin", "Ubuntu MATE",
	"Ubuntu Mobile", "Ubuntu Netbook Edition", "Ubuntu Server", "Ubuntu Studio",
	"Ubuntu TV", "Ubuntu Touch", "Ubuntu Unity", "Ubuntu for Android",
	"Univention Corporate Server", "Ututo", "Ututo", "VectorLinux",
	"Vine Linux", "Vinux", "Void Linux", "VyOS",
	"Vyatta", "Webconverger", "Xubuntu", "Yellow Dog Linux",
	"Zenwalk", "ZipSlack", "Zorin OS", "antiX", "elementary OS",
	"fli4l", "gLinux", "gNewSense", "gOS",
	"grml", "paldo", "postmarketOS", "rPath",
	"tomsrtbt",
	"Windows 95", "Windows 98", "Windows ME", "Windows 2000", "Windows XP", "Windows Vista", "Windows 7", "Windows 8", "Windows 8.1", "Windows 9", "Windows 10", "Windows 11", "Windows 12"
};

static std::vector<std::string> desktop_environments = {
	"Ambient", "Budgie", "CDE", "Cinnamon", "Deepin DE", "Enlightenment", "GNOME", "KDE", "Lumina", "LXDE", "LXQt", "MATE", "Pantheon", "ROX Desktop", "Trinity", "UKUI", "Unity", "Xfce"
};

static std::vector<std::string> tiling_window_managers = {
	"bspwm", "EXWM", "Herbstluftwm", "i3", "Larswm", "LeftWM", "Notion", "Ratpoison", "Stumpwm", "awesome", "dwm", "echinus", "FrankenWM", "spectrwm", "Qtile", "xmonad"
};

static std::vector<std::string> shells = {
	"bash", "ksh", "zsh", "fish", "nushell", "dash", "powershell", "python"
};

static std::vector<std::string> terminal_emulators = {
	"Terminator", "Tilda", "Guake", "Yakuake", "ROXTerm", "Eterm", "Rxvt", "Tilix", "LXTerminal", "Konsole", "Kitty", "st", "Gnome-Terminal", "xfce4-terminal", "Terminology", "Deepin Terminal", "xterm", "LilyTerm", "Sakura", "Extraterm", "DomTerm", "TermKit", "alacritty", "termite", "Windows terminal"
};

static std::vector<std::string> music_players = {
	"MPV", "Amberol", "Elisa", "Rythmbox", "Sayonara Player", "Strawberry Music Player", "DeaDBeef Player", "cmus", "VLC Media Player", "Museeks", "Audacious"
};

static std::vector<std::string> video_players = {
	"Haruna", "MPlayer", "SMPlayer", "MPV", "VLC Media Player", "Dragon Player", "GNOME Videos", "Deepin Movie", "Clapper", "QMPlay2", "Parole", "Celluloid", "Kaffeine", "Xine Multimedia Engine"
};

static std::vector<std::string> matrix_clients = {
	"Element", "Ditto Chat", "FluffyChat", "Hydrogen", "NeoChat", "Nio", "quadrix.chat", "SchildiChat", "Syphon", "Cinny", "Fractal", "gotktrix", "kazv", "Mirage", "Nheko", "Quaternion", "Seaglass", "Spectral"
};
