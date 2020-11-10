//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIIcon;

@interface YTIPollEditorInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *addOptionButton; // @dynamic addOptionButton;
@property(retain, nonatomic) NSMutableArray *customOptionPlaceholderTextArray; // @dynamic customOptionPlaceholderTextArray;
@property(readonly, nonatomic) unsigned long long customOptionPlaceholderTextArray_Count; // @dynamic customOptionPlaceholderTextArray_Count;
@property(nonatomic) _Bool hasAddOptionButton; // @dynamic hasAddOptionButton;
@property(nonatomic) _Bool hasHeaderIcon; // @dynamic hasHeaderIcon;
@property(nonatomic) _Bool hasHeaderText; // @dynamic hasHeaderText;
@property(nonatomic) _Bool hasMaxPollOptionChars; // @dynamic hasMaxPollOptionChars;
@property(nonatomic) _Bool hasMaxPollOptions; // @dynamic hasMaxPollOptions;
@property(nonatomic) _Bool hasMaxPollQuestionChars; // @dynamic hasMaxPollQuestionChars;
@property(nonatomic) _Bool hasMinPollOptionChars; // @dynamic hasMinPollOptionChars;
@property(nonatomic) _Bool hasMinPollOptions; // @dynamic hasMinPollOptions;
@property(nonatomic) _Bool hasOptionPlaceholderText; // @dynamic hasOptionPlaceholderText;
@property(nonatomic) _Bool hasPollQuestionCharCountErrorText; // @dynamic hasPollQuestionCharCountErrorText;
@property(nonatomic) _Bool hasQuestionPlaceholderText; // @dynamic hasQuestionPlaceholderText;
@property(retain, nonatomic) YTIIcon *headerIcon; // @dynamic headerIcon;
@property(retain, nonatomic) YTIFormattedString *headerText; // @dynamic headerText;
@property(nonatomic) int maxPollOptionChars; // @dynamic maxPollOptionChars;
@property(nonatomic) int maxPollOptions; // @dynamic maxPollOptions;
@property(nonatomic) int maxPollQuestionChars; // @dynamic maxPollQuestionChars;
@property(nonatomic) int minPollOptionChars; // @dynamic minPollOptionChars;
@property(nonatomic) int minPollOptions; // @dynamic minPollOptions;
@property(retain, nonatomic) YTIFormattedString *optionPlaceholderText; // @dynamic optionPlaceholderText;
@property(retain, nonatomic) YTIFormattedString *pollQuestionCharCountErrorText; // @dynamic pollQuestionCharCountErrorText;
@property(retain, nonatomic) YTIFormattedString *questionPlaceholderText; // @dynamic questionPlaceholderText;

@end

