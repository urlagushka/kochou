import xml.etree.ElementTree as ET
from pathlib import Path
import urllib.request


url = "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/main/xml/vk.xml"
urllib.request.urlretrieve(url, "vk.xml")


VULKAN_XML = Path("vk.xml")
ROOT = ET.parse(VULKAN_XML).getroot()
