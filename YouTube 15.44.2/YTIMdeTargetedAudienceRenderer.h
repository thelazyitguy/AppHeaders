//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIFormattedString, YTIMdeTargetedAudienceSection, YTIRenderer;

@interface YTIMdeTargetedAudienceRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMdeTargetedAudienceSection *ageRestrictionQuestion; // @dynamic ageRestrictionQuestion;
@property(retain, nonatomic) YTIMdeTargetedAudienceSection *crosswalkQuestion; // @dynamic crosswalkQuestion;
@property(nonatomic) int currentOptionIndex; // @dynamic currentOptionIndex;
@property(nonatomic) _Bool editable; // @dynamic editable;
@property(retain, nonatomic) YTIFormattedString *explanatoryText; // @dynamic explanatoryText;
@property(nonatomic) _Bool hasAgeRestrictionQuestion; // @dynamic hasAgeRestrictionQuestion;
@property(nonatomic) _Bool hasCrosswalkQuestion; // @dynamic hasCrosswalkQuestion;
@property(nonatomic) _Bool hasCurrentOptionIndex; // @dynamic hasCurrentOptionIndex;
@property(nonatomic) _Bool hasEditable; // @dynamic hasEditable;
@property(nonatomic) _Bool hasExplanatoryText; // @dynamic hasExplanatoryText;
@property(nonatomic) _Bool hasLearnMoreButton; // @dynamic hasLearnMoreButton;
@property(nonatomic) _Bool hasRacyOverride; // @dynamic hasRacyOverride;
@property(nonatomic) _Bool hasRequestReviewButton; // @dynamic hasRequestReviewButton;
@property(retain, nonatomic) YTIRenderer *learnMoreButton; // @dynamic learnMoreButton;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(nonatomic) _Bool racyOverride; // @dynamic racyOverride;
@property(retain, nonatomic) YTIRenderer *requestReviewButton; // @dynamic requestReviewButton;

@end
