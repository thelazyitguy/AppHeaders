//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol TFNAttributedTextViewDelegate;

@protocol T1OnboardingFooterSpec <NSObject>
@property(readonly, nonatomic) __weak id <TFNAttributedTextViewDelegate> detailTextViewDelegate;
@property(readonly, nonatomic) NSArray *detailActiveRanges;
@property(readonly, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSString *skipLabel;
@property(readonly, nonatomic) NSString *nextLabel;
@end
