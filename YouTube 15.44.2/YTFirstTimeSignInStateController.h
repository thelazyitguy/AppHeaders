//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol YTShowTopicPickerViewControllerProtocol;

@interface YTFirstTimeSignInStateController : NSObject
{
    id <YTShowTopicPickerViewControllerProtocol> _showingViewController;
    _Bool _isSigningIn;
}

- (void).cxx_destruct;
- (void)dismissViewController;
- (void)showViewController;
- (void)startedSignIn;
- (void)endedSignIn;
- (void)setViewController:(id)arg1;
- (_Bool)isSigningIn;
- (void)setup;

@end
