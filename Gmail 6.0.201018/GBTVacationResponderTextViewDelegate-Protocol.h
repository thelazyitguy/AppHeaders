//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GBTVacationResponderTextView, NSString;

@protocol GBTVacationResponderTextViewDelegate <NSObject>
- (void)vacationResponderTextViewTextChanged:(GBTVacationResponderTextView *)arg1;
- (void)vacationResponderTextViewFrameSizeChanged:(GBTVacationResponderTextView *)arg1;
- (_Bool)vacationResponderTextView:(GBTVacationResponderTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
@end
