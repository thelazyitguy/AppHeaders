//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class GRWSApplicationIdentifier, NSMutableArray, NSString;

@interface GRWSGeneralPromptUi : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int actionAlignment; // @dynamic actionAlignment;
@property(nonatomic) int actionLayout; // @dynamic actionLayout;
@property(copy, nonatomic) NSString *bodyText; // @dynamic bodyText;
@property(copy, nonatomic) NSString *confirmationText; // @dynamic confirmationText;
@property(copy, nonatomic) NSString *drawableId; // @dynamic drawableId;
@property(nonatomic) _Bool hasActionAlignment; // @dynamic hasActionAlignment;
@property(nonatomic) _Bool hasActionLayout; // @dynamic hasActionLayout;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasConfirmationText; // @dynamic hasConfirmationText;
@property(nonatomic) _Bool hasHeadlineSize; // @dynamic hasHeadlineSize;
@property(nonatomic) _Bool hasHeadlineText; // @dynamic hasHeadlineText;
@property(nonatomic) _Bool hasPromotedApp; // @dynamic hasPromotedApp;
@property(nonatomic) _Bool hasPromptGraphic; // @dynamic hasPromptGraphic;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) int headlineSize; // @dynamic headlineSize;
@property(copy, nonatomic) NSString *headlineText; // @dynamic headlineText;
@property(readonly, nonatomic) int imageOneOfCase; // @dynamic imageOneOfCase;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) GRWSApplicationIdentifier *promotedApp; // @dynamic promotedApp;
@property(nonatomic) int promptGraphic; // @dynamic promptGraphic;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) NSMutableArray *stylingSchemeArray; // @dynamic stylingSchemeArray;
@property(readonly, nonatomic) unsigned long long stylingSchemeArray_Count; // @dynamic stylingSchemeArray_Count;
@property(retain, nonatomic) NSMutableArray *userActionArray; // @dynamic userActionArray;
@property(readonly, nonatomic) unsigned long long userActionArray_Count; // @dynamic userActionArray_Count;

@end
