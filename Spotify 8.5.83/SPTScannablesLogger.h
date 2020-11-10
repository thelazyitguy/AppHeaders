//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileScannablesEventFactory;

@interface SPTScannablesLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTUBIMobileScannablesEventFactory> _eventFactory;
    id <SPTUBILogger> _ubiLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTUBIMobileScannablesEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logDidTapCloseButton;
- (void)logDidSelectPhotoFromPhotoLibrary;
- (void)logDidClosePhotoLibrary;
- (void)logDidOpenPhotoLibrary;
- (void)logDidAllowPhotoLibraryPermissions:(_Bool)arg1;
- (void)logDidTapPhotoLibraryButton;
- (void)logScanDidSucceedWithURL:(id)arg1 source:(id)arg2;
- (void)logDidTapCancelCameraPermissionDisallowed;
- (void)logDidTapPermissionsSettingsWithSource:(id)arg1;
- (void)logDidAllowCameraPermission:(_Bool)arg1;
- (void)logDidCompleteCameraOnboarding:(_Bool)arg1;
- (void)logDidTapCameraButtonWithPageURL:(id)arg1;
- (void)logDidDisplayCameraButtonWithPageIdentifier:(id)arg1;
- (void)logDidMoveToPageWithPageIdentifier:(id)arg1;
- (void)logDidTapSaveToCameraRollButtonWithEntityURL:(id)arg1;
- (void)logDidTapScannableWithEntityURL:(id)arg1;
- (void)logDidDisplayScannableWithEntityURL:(id)arg1;
- (id)initWithLogCenter:(id)arg1 eventFactory:(id)arg2 ubiLogger:(id)arg3;

@end

