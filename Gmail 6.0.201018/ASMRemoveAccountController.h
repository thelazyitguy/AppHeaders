//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"

@class GOOAlertView, NSString, SSOActivityShieldView, UIViewController;
@protocol SSOIdentity, SSOService;

@interface ASMRemoveAccountController : NSObject <GOOAlertViewDelegate>
{
    GOOAlertView *_alertView;
    SSOActivityShieldView *_removeShieldView;
    id <SSOIdentity> _identity;
    id <SSOService> _service;
    UIViewController *_viewController;
    CDUnknownBlockType _removeAccountCallback;
}

- (void).cxx_destruct;
- (void)showAlertViewForError:(id)arg1 stringID:(int)arg2;
- (void)hideRemoveIdentityShield;
- (void)showRemoveIdentityShield;
- (void)removeIdentity;
- (void)confirmRemoveIdentity;
- (void)showRemoveIdentityFlow;
- (id)initWithService:(id)arg1 identity:(id)arg2 viewController:(id)arg3 removeAccountCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
