# Use python3 image
FROM python:3

# Dockerfile maintainer
MAINTAINER "sifis-home" "https://github.com/sifis-home"

# Upgrade pip
RUN python -m pip install --upgrade pip

# Install Python packages
RUN pip install meson ninja gcovr

# Set workdir
WORKDIR /src
