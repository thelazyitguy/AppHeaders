//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/CCTClearcutLogTransformer-Protocol.h>

@class NSString;

@interface CHMPermissionsTransformer : NSObject <CCTClearcutLogTransformer>
{
}

+ (id)sharedInstance;
- (int)protoValueForShowPreviewsSetting:(long long)arg1;
- (int)protoValueForAlertStyle:(long long)arg1;
- (int)protoValueForAuthorizationStatus:(long long)arg1;
- (int)protoValueForNotificationSetting:(long long)arg1;
- (id)transform:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
