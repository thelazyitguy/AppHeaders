//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GRWSGeneralPromptUi_Action, GTPColor, NSMutableArray, NSString;

@interface GRWSTooltipUi : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRWSGeneralPromptUi_Action *action; // @dynamic action;
@property(retain, nonatomic) GTPColor *backgroundColor; // @dynamic backgroundColor;
@property(copy, nonatomic) NSString *bodyText; // @dynamic bodyText;
@property(copy, nonatomic) NSString *elementName; // @dynamic elementName;
@property(copy, nonatomic) NSString *elementTag; // @dynamic elementTag;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasHeadlineText; // @dynamic hasHeadlineText;
@property(nonatomic) _Bool hasPlacement; // @dynamic hasPlacement;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(copy, nonatomic) NSString *headlineText; // @dynamic headlineText;
@property(nonatomic) int placement; // @dynamic placement;
@property(retain, nonatomic) NSMutableArray *stylingSchemeArray; // @dynamic stylingSchemeArray;
@property(readonly, nonatomic) unsigned long long stylingSchemeArray_Count; // @dynamic stylingSchemeArray_Count;
@property(readonly, nonatomic) int targetOneOfCase; // @dynamic targetOneOfCase;
@property(retain, nonatomic) GTPColor *textColor; // @dynamic textColor;
@property(nonatomic) int visualElementId; // @dynamic visualElementId;

@end

