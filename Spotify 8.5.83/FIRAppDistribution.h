//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRAppDistributionInstanceProvider-Protocol.h"
#import "FIRLibrary-Protocol.h"

@class FIRAppDistributionUIService, NSString;

@interface FIRAppDistribution : NSObject <FIRLibrary, FIRAppDistributionInstanceProvider>
{
    _Bool _isTesterSignedIn;
    FIRAppDistributionUIService *_uiService;
}

+ (id)appDistribution;
+ (id)componentsToRegister;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) FIRAppDistributionUIService *uiService; // @synthesize uiService=_uiService;
@property(nonatomic) _Bool isTesterSignedIn; // @synthesize isTesterSignedIn=_isTesterSignedIn;
- (_Bool)isCodeHashIdentical:(id)arg1;
- (_Bool)isCurrentVersion:(id)arg1 buildVersion:(id)arg2;
- (void)checkForUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchNewLatestRelease:(CDUnknownBlockType)arg1;
- (id)mapFetchReleasesError:(id)arg1;
- (id)NSErrorForErrorCodeAndMessage:(unsigned long long)arg1 message:(id)arg2;
- (void)signOutTester;
- (id)getAppBuild;
- (id)getAppVersion;
- (id)getAppName;
- (void)persistTesterSignInStateAndHandleCompletion:(CDUnknownBlockType)arg1;
- (void)signInTesterWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithApp:(id)arg1 appInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
