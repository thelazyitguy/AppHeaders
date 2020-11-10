//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOIAccountCreationViewDelegate-Protocol.h"
#import "GOIGMAccountCreationViewDelegate-Protocol.h"
#import "GOIModalController-Protocol.h"

@class GOIExperimentFlags, GOILogger, GOIServiceInfo, NSDictionary, NSString, NSURL;
@protocol GOIAccountCreationDelegate, SSOIdentity, SSOService;

@interface GOIAccountCreationModalController : NSObject <GOIAccountCreationViewDelegate, GOIGMAccountCreationViewDelegate, GOIModalController>
{
    GOIServiceInfo *_serviceInfo;
    id <GOIAccountCreationDelegate> _delegate;
    id <SSOService> _ssoService;
    id <SSOIdentity> _identity;
    NSURL *_consentURL;
    NSString *_consentText;
    NSURL *_learnMoreURL;
    NSDictionary *_UIResources;
    GOIExperimentFlags *_experimentFlags;
    GOILogger *_logger;
}

- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (void)dialogDidDismissWithUseAnotherAccount;
- (void)dialogDidDismiss;
- (void)dialogDidDismissWithDeny;
- (void)present;
- (id)initWithServiceInfo:(id)arg1 ssoService:(id)arg2 identity:(id)arg3 logger:(id)arg4 consentURL:(id)arg5 consentText:(id)arg6 learnMoreURL:(id)arg7 UIResources:(id)arg8 experimentFlags:(id)arg9 delegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

