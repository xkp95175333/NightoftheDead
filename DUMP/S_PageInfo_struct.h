// UserDefinedStruct S_PageInfo.S_PageInfo
// Size: 0x68 (Inherited: 0x00)
struct FS_PageInfo {
	struct FText TitleText_59_A8813CD7417122233C4B0A87941F73F5; // 0x00(0x18)
	struct UTexture* PictureTextureifany_31_D94F08EA47B3C7BAEC64AC9F1AD1AEEB; // 0x18(0x08)
	struct UMediaSource* PictureMovieifany_33_E627EAC94BE58045174966917DC50A98; // 0x20(0x08)
	struct FVector2D PictureSize_19_BB090B2B4D0869A7207B5A8338D6AEC5; // 0x28(0x08)
	struct FText BodyText_61_B2A8FA694836BA932215448AD5A148C1; // 0x30(0x18)
	bool RemoveMargins_35_5FE6849546BBDEA47BA7D9A6B08D335A; // 0x48(0x01)
	bool AnimateText_37_183732044AE626301B3B59A88949AA73; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t AnimTitleChopLength_57_5304A59E408A050BC728AA8522FFA867; // 0x4c(0x04)
	float AnimPictureOpacity_62_55A0607C40B5C8DF351EB2AD539851F2; // 0x50(0x04)
	int32_t AnimBodyChopLength_55_F63E3F994468BEB3BE7830A0FB39AFCD; // 0x54(0x04)
	bool AnimAllowedToReset_64_47AA002B4916F35FCEB1D499509C680D; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct USoundBase* VoiceOverSoundifany_68_51AC611F4E735A85C34C41A6E58646C4; // 0x60(0x08)
};

