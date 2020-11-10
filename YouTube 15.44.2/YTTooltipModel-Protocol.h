//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSString, UIColor, YTICommand, YTIFormattedString;
@protocol YTClickableButton><YTTooltipButtonModel;

@protocol YTTooltipModel <NSObject>
@property(readonly, nonatomic, getter=isCounterfactual) _Bool counterfactual;
@property(readonly, nonatomic) NSArray *impressionEndpoints;
@property(readonly, nonatomic) double frequencyCap;
@property(readonly, nonatomic) long long impressionCap;
@property(readonly, nonatomic) double dwellTime;
@property(readonly, nonatomic) int dismissalCondition;
@property(readonly, nonatomic) int tooltipTargetEffect;
@property(readonly, nonatomic) int preferredPosition;
@property(readonly, nonatomic) double maxWidthRatio;
@property(readonly, nonatomic) YTICommand *promoDismissCommand;
@property(readonly, nonatomic) YTICommand *promoAcceptCommand;
@property(readonly, nonatomic) YTICommand *dismissAction;
@property(readonly, nonatomic) _Bool hasDismissAction;
@property(readonly, nonatomic) id <YTClickableButton><YTTooltipButtonModel> acceptButtonModel;
@property(readonly, nonatomic) id <YTClickableButton><YTTooltipButtonModel> dismissButtonModel;
@property(readonly, nonatomic) UIColor *hintColor;
@property(readonly, nonatomic) YTIFormattedString *detailsText;
@property(readonly, nonatomic) YTIFormattedString *text;
@property(readonly, nonatomic) NSString *ID;
@end

