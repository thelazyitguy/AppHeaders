//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BTUITextField, NSString;

@protocol BTUITextFieldEditDelegate <NSObject>

@optional
- (void)textField:(BTUITextField *)arg1 didInsertText:(NSString *)arg2;
- (void)textField:(BTUITextField *)arg1 willInsertText:(NSString *)arg2;
- (void)textFieldDidDeleteBackward:(BTUITextField *)arg1 originalText:(NSString *)arg2;
- (void)textFieldWillDeleteBackward:(BTUITextField *)arg1;
@end
