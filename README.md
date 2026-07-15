

# 📺 TizenTube for Linux (ARM64)

[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/starfish367/tizentube-linux/build.yml?branch=main&logo=github&style=for-the-badge)](https://github.com/starfish367/tizentube-linux/actions)
[![Platform](https://img.shields.io/badge/Platform-Linux%20ARM64%20%2F%20Armbian-orange?logo=linux&style=for-the-badge)](https://github.com/starfish367/tizentube-linux)
[![Based on](https://img.shields.io/badge/Based%20on-Cobalt%20%2F%20TizenTube-blue?logo=youtube&style=for-the-badge)](https://github.com/reisxd/TizenTubeCobalt)

A customized build of **Cobalt (YouTube for TV)** optimized specifically for **Linux ARM64** devices (such as Android TV Boxes running **Armbian**). 

This project automatically builds and packages the application into a `.deb` installer, making the deployment process on your TV Box as simple as possible.

---

## ✨ Key Features

*   🛡️ **100% Ad-free:** Enjoy YouTube TV smoothly without any annoying interruptions.
*   🚫 **Disabled Auto-Update:** Completely blocks the upstream auto-update system to prevent broken dependencies and crashes on Linux.
*   🎮 **Custom Key Mapping:** Overrides key mappings specifically to allow seamless navigation using standard TV remotes or keyboards on X11/Armbian environments.
*   ⚙️ **Bypassed Android Check:** Fixed the hardcoded Android dependency in the upstream build configuration, allowing flawless cross-compilation on Linux targets.

---

## 🏗️ How to Trigger a Build

Whenever you want to build the latest version of the application:
1.  Navigate to the **Actions** tab of this repository.
2.  Select the **TizenTube Linux ARM64 Auto-Build** workflow from the left sidebar.
3.  Click the **Run workflow** dropdown button on the right (green button) and trigger the build.
4.  Wait for the build runner to complete (approx. 1.5 - 2 hours for the initial clean build). The compiled `.deb` package will be automatically generated and published under the **Releases** section on the main page.

---

## 💾 Installation Guide (Armbian Box)

Once you have downloaded the `.deb` file from the Releases page, run the following commands in your Terminal to install it:

```bash
# Install the downloaded .deb package
sudo dpkg -i tizentube-linux-arm64.deb

# Resolve any missing dependency issues automatically
sudo apt install -f

🌐 Language Configuration

By default, the application will adapt to your system's locale. If you want to force the interface to run in a specific language, you can launch it with the --lang flag:

    Run in Vietnamese:
    Bash

    /opt/tizentube/cobalt --lang=vi

    Run in English:
    Bash

    /opt/tizentube/cobalt --lang=en

    💡 Tip: You can edit your desktop shortcut (.desktop file) and append the --lang=vi or --lang=en flag directly to the Exec= line to always launch the app in your preferred language.

🤝 Credits

    This project is forked and customized based on the excellent TizenTubeCobalt repository by @reisxd.

    Powered by Google's open-source Cobalt/Chromium port.
