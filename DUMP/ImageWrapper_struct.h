// Enum ImageWrapper.EBitmapCSType
enum class EBitmapCSType : uint8 {
	BCST_BLCS_CALIBRATED_RGB,
	BCST_LCS_sRGB,
	BCST_LCS_WINDOWS_COLOR_SPACE,
	BCST_PROFILE_LINKED,
	BCST_PROFILE_EMBEDDED,
	BCST_MAX,
};

// Enum ImageWrapper.EBitmapHeaderVersion
enum class EBitmapHeaderVersion : uint8 {
	BHV_BITMAPINFOHEADER,
	BHV_BITMAPV2INFOHEADER,
	BHV_BITMAPV3INFOHEADER,
	BHV_BITMAPV4HEADER,
	BHV_BITMAPV5HEADER,
	BHV_MAX,
};
