import urllib.request
from pathlib import Path

url = "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/main/xml/vk.xml"
urllib.request.urlretrieve(url, "vk.xml")

VULKAN_XML = Path("vk.xml")
