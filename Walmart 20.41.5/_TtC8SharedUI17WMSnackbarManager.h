//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC8SharedUI17WMSnackbarManager : NSObject
{
    // Error parsing type: , name: overlayView
    // Error parsing type: , name: buttonActionHandler
    // Error parsing type: , name: delegate
    // Error parsing type: , name: responderChain
    // Error parsing type: , name: pinned
    // Error parsing type: , name: timed
    // Error parsing type: , name: showing
    // Error parsing type: , name: isRunning
}

+ (id)shared;
- (void).cxx_destruct;
- (void)buttonTapped;
- (void)resignResponder:(id)arg1;
- (void)becomeResponder:(id)arg1;
- (void)showAttributedMessage:(id)arg1 buttonTitle:(id)arg2 duration:(double)arg3 accessibilityAnnouncement:(_Bool)arg4 accessibilityFocus:(_Bool)arg5 actionHandler:(CDUnknownBlockType)arg6;
- (void)showMessage:(id)arg1 buttonTitle:(id)arg2 duration:(double)arg3 accessibilityAnnouncement:(_Bool)arg4 accessibilityFocus:(_Bool)arg5 actionHandler:(CDUnknownBlockType)arg6;
- (void)showMessage:(id)arg1 accessibilityAnnouncement:(_Bool)arg2 accessibilityFocus:(_Bool)arg3;
- (id)init;

@end
