//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GIPMicPermissionController : NSObject
{
    _Bool _micPermissionGranted;
    _Bool _haveRequestedMicPermission;
}

+ (id)sharedInstance;
- (void)checkForPermissionToUseMicWithoutOpeningDialog:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setHaveRequestedMicPermissions;
- (_Bool)lastRunHadMicPermissionsLogic;
- (void)requestPermissionToUseMicrophone:(CDUnknownBlockType)arg1;
- (void)performMicPermissionBlockOnMainThread:(CDUnknownBlockType)arg1;
- (_Bool)havePermissionToUseMicrophone;
- (_Bool)requestWillTriggerModalDialog;
- (_Bool)supportsRequestRecordPermission;

@end

