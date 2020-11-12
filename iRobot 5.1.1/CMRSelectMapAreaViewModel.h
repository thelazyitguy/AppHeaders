//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRCoreViewModel.h>

@interface CMRSelectMapAreaViewModel : CMRCoreViewModel
{
    struct Handle<std::__1::shared_ptr<core::SelectMapAreaViewModel>, std::__1::shared_ptr<core::SelectMapAreaViewModel>> _cppRefHandle;
}

+ (id)getTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)saveState;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)getType;
- (id)teamingConfigurationData;
- (void)customizeMapPressed;
- (void)mapPrivacyPressed;
- (void)sendCleanWithConfiguration;
- (id)getCleanConfigurationData;
- (void)toggleZone:(int)arg1;
- (void)toggleRoom:(int)arg1;
- (void)changeFloor:(int)arg1;
- (void)chooseDirectedClean;
- (void)chooseCleanAll;
- (void)load:(_Bool)arg1 skipLoadingConfig:(_Bool)arg2 mapData:(id)arg3;
- (void)loadFromCommandDef:(id)arg1;
- (void)loadShowingFloorAndUnlabeledRooms;
- (void)loadForTeaming;
- (void)loadWithMapData:(id)arg1;
- (id)getCustomizeMapVersion;
- (id)getCustomizeMapId;
- (id)currentState;
- (const shared_ptr_f4ad6862 *)cppRef;
- (id)initWithCpp:(const shared_ptr_f4ad6862 *)arg1;

@end
