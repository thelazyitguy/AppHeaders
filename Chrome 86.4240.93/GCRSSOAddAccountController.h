//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSOAddAccountController;

@interface GCRSSOAddAccountController : NSObject
{
    SSOAddAccountController *_SSOAddAccountController;
}

+ (id)controllerWithSSOAddAccountController:(id)arg1;
- (void).cxx_destruct;
- (id)initWithSSOAddAccountController:(id)arg1;
- (id)SSOAddAccountController;
- (void)cancelFlowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startFlowWithPresentingViewController:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startFlowWithPresentingViewController:(id)arg1 userEmail:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithSSOService:(id)arg1;

@end
