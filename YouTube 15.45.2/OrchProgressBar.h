//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class OrchInfoMessage, OrchSimpleForm;

@interface OrchProgressBar : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchInfoMessage *completionCondition; // @dynamic completionCondition;
@property(nonatomic) int completionPercentage; // @dynamic completionPercentage;
@property(nonatomic) _Bool hasCompletionCondition; // @dynamic hasCompletionCondition;
@property(nonatomic) _Bool hasCompletionPercentage; // @dynamic hasCompletionPercentage;
@property(nonatomic) _Bool hasStatusDescription; // @dynamic hasStatusDescription;
@property(nonatomic) _Bool hasStatusSimpleForm; // @dynamic hasStatusSimpleForm;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchInfoMessage *statusDescription; // @dynamic statusDescription;
@property(retain, nonatomic) OrchSimpleForm *statusSimpleForm; // @dynamic statusSimpleForm;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end
