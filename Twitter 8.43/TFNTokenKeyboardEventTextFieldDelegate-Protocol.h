//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/UITextFieldDelegate-Protocol.h>

@class UITextField;

@protocol TFNTokenKeyboardEventTextFieldDelegate <UITextFieldDelegate>

@optional
- (void)textField:(UITextField *)arg1 didAttemptToResignFirstResponder:(_Bool)arg2;
- (void)textFieldWillAttemptToResignFirstResponder:(UITextField *)arg1;
- (void)textField:(UITextField *)arg1 didAttemptToBecomeFirstResponder:(_Bool)arg2;
- (void)textFieldWillAttemptToBecomeFirstResponder:(UITextField *)arg1;
- (_Bool)textFieldShouldResignFirstResponder:(UITextField *)arg1;
- (void)textFieldDidReceiveDeleteKeyOnEmptyText:(UITextField *)arg1;
@end
