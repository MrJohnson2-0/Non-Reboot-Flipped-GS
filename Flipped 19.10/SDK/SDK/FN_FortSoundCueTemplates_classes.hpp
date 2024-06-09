#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.FortSoundCueTemplateBase
class UFortSoundCueTemplateBase : public USoundCueTemplate
{
public:

	static class UClass* StaticClass();
	static class UFortSoundCueTemplateBase* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.EmoteBase
class UEmoteBase : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass();
	static class UEmoteBase* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.EmoteFoley
class UEmoteFoley : public UEmoteBase
{
public:

	static class UClass* StaticClass();
	static class UEmoteFoley* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.EmoteMusic
class UEmoteMusic : public UEmoteBase
{
public:

	static class UClass* StaticClass();
	static class UEmoteMusic* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.EmoteMusic3P
class UEmoteMusic3P : public UEmoteBase
{
public:

	static class UClass* StaticClass();
	static class UEmoteMusic3P* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.FortSoundCueTemplateSimple
class UFortSoundCueTemplateSimple : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass();
	static class UFortSoundCueTemplateSimple* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.GliderOpen
class UGliderOpen : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UGliderOpen* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.GliderClose
class UGliderClose : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UGliderClose* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.GliderThrustLoop
class UGliderThrustLoop : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass();
	static class UGliderThrustLoop* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.GliderThrustStart
class UGliderThrustStart : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass();
	static class UGliderThrustStart* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.MusicPack
class UMusicPack : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass();
	static class UMusicPack* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.PhysicsStateLoop
class UPhysicsStateLoop : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass();
	static class UPhysicsStateLoop* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.PhysicsImpact
class UPhysicsImpact : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass();
	static class UPhysicsImpact* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.PickaxeBase
class UPickaxeBase : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass();
	static class UPickaxeBase* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.PickaxeImpactEnemy
class UPickaxeImpactEnemy : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UPickaxeImpactEnemy* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.PickaxeReady
class UPickaxeReady : public UPickaxeBase
{
public:

	static class UClass* StaticClass();
	static class UPickaxeReady* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.PickaxeSwing
class UPickaxeSwing : public UPickaxeBase
{
public:

	static class UClass* StaticClass();
	static class UPickaxeSwing* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.WeaponLowAmmo
class UWeaponLowAmmo : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UWeaponLowAmmo* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.WeaponOutOfAmmo
class UWeaponOutOfAmmo : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UWeaponOutOfAmmo* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.WeaponReloadStart
class UWeaponReloadStart : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UWeaponReloadStart* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.WeaponReloadInsert
class UWeaponReloadInsert : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UWeaponReloadInsert* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.WeaponReloadEnd
class UWeaponReloadEnd : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UWeaponReloadEnd* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.WeaponTargetingStart
class UWeaponTargetingStart : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UWeaponTargetingStart* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class FortSoundCueTemplates.WeaponTargetingEnd
class UWeaponTargetingEnd : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass();
	static class UWeaponTargetingEnd* GetDefaultObj();

};

}


