//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol SPTPaymentFailureModalViewModel <NSObject>
@property(readonly, nonatomic) NSString *localizedButtonTitleString;
@property(readonly, nonatomic) NSString *localizedSubtitleString;
@property(readonly, nonatomic) NSString *localizedTitleString;
@property(readonly, nonatomic) UIImage *backgroundImage;
- (void)actionButtonPressed;
- (void)viewDidAppear;
@end
