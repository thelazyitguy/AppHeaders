//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class CMLLPDatePickerConfig, CMLLPTimePickerConfig, ComGoogleTypeDate, ComGoogleTypeTimeOfDay;
@protocol CMLLDateCallback, CMLLTimeCallback;

@protocol CMLLDateTimePickerService <JavaObject>
- (void)showTimeDialogWithComGoogleTypeTimeOfDay:(ComGoogleTypeTimeOfDay *)arg1 withCMLLPTimePickerConfig:(CMLLPTimePickerConfig *)arg2 withCMLLTimeCallback:(id <CMLLTimeCallback>)arg3;
- (void)showDateDialogWithComGoogleTypeDate:(ComGoogleTypeDate *)arg1 withCMLLPDatePickerConfig:(CMLLPDatePickerConfig *)arg2 withCMLLDateCallback:(id <CMLLDateCallback>)arg3;
@end
