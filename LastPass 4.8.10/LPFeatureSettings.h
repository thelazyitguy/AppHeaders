//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class lputil;

@interface LPFeatureSettings : NSObject
{
    lputil *_util;
}

- (void).cxx_destruct;
@property(nonatomic) __weak lputil *util; // @synthesize util=_util;
@property(nonatomic) _Bool accountRecoveryDisallowed; // @dynamic accountRecoveryDisallowed;
@property(nonatomic) _Bool onboardingAutofillSkip; // @dynamic onboardingAutofillSkip;
@property(nonatomic) _Bool showExtensionPopupEnabled; // @dynamic showExtensionPopupEnabled;
@property(nonatomic) _Bool noFolderFeatureEnabled; // @dynamic noFolderFeatureEnabled;
@property(nonatomic) _Bool isOneSharing; // @dynamic isOneSharing;
@property(nonatomic) _Bool isFormFillMigration; // @dynamic isFormFillMigration;
@property(nonatomic) _Bool isOmarIA; // @dynamic isOmarIA;
- (_Bool)featureValue:(_Bool)arg1 featureOverride:(long long)arg2;
- (_Bool)booleanUserPrefForKey:(id)arg1;
- (void)setBooleanUserPref:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)isLoggedIn;
- (id)initWithUtil:(id)arg1;
- (id)init;

@end
