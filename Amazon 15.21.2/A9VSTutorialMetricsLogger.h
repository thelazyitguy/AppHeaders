//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface A9VSTutorialMetricsLogger : NSObject
{
}

+ (id)sharedLogger;
- (void)logPhotoAccessSettingsNotNowSelected;
- (void)logPhotoAccessSettingsSettingsSelected;
- (void)logPhotoAccessSettingsDisplayed;
- (void)logDevicePromptDenyPhotoPermissionsSelected;
- (void)logDevicePromptAllowPhotoPermissionsSelected;
- (void)logDevicePromptDenyCameraPermissionsSelected;
- (void)logDevicePromptAllowCameraPermissionsSelected;
- (void)logCameraAccessSettingsNotNowSelected;
- (void)logCameraAccessSettingsSettingsSelected;
- (void)logCameraAccessSettingsDisplayed;
- (void)logCameraSearchTutorialLowNetworkNotDisplayed;
- (void)logCameraSearchTutorialDismissedOnResultsDisplay;
- (void)logCameraSearchTutorialDismissed;
- (void)logCameraSearchTutorialModesSheetDisplayedAfterTutorial;
- (void)logCameraSearchTutorialNoteSheetBackgroundTapped;
- (void)logCameraSearchTutorialShowProductSearchSelected;
- (void)logCameraSearchTutorialNotNowSelected;
- (void)logCameraSearchTutorialAllowSelected;
- (void)logCameraSearchTutorialPermissionsPrompted;
- (void)logCameraSearchTutorialGetStartedSelected;
- (void)logCameraSearchTutorialDisplayed;

@end
