//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BTUIFormField;

@protocol BTUIFormFieldDelegate <NSObject>
- (void)formFieldDidDeleteWhileEmpty:(BTUIFormField *)arg1;
- (void)formFieldDidChange:(BTUIFormField *)arg1;

@optional
- (void)formFieldDidEndEditing:(BTUIFormField *)arg1;
- (void)formFieldDidBeginEditing:(BTUIFormField *)arg1;
- (_Bool)formFieldShouldReturn:(BTUIFormField *)arg1;
@end

