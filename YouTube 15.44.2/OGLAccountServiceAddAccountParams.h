//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol OGLAccount;

@interface OGLAccountServiceAddAccountParams : NSObject
{
    UIViewController *_presentingViewController;
    id <OGLAccount> _accountToReauthenticate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <OGLAccount> accountToReauthenticate; // @synthesize accountToReauthenticate=_accountToReauthenticate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)initWithPresentingViewController:(id)arg1;

@end

