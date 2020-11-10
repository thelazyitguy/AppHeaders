//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class MessageSet, NSMutableArray, NSString, OrchLayout;

@interface OrchImageWithCaption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *altText; // @dynamic altText;
@property(nonatomic) _Bool applyRoundedCorners; // @dynamic applyRoundedCorners;
@property(copy, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) NSMutableArray *captionArray; // @dynamic captionArray;
@property(readonly, nonatomic) unsigned long long captionArray_Count; // @dynamic captionArray_Count;
@property(copy, nonatomic) NSString *darkImageUri; // @dynamic darkImageUri;
@property(retain, nonatomic) NSMutableArray *fifeOptionArray; // @dynamic fifeOptionArray;
@property(readonly, nonatomic) unsigned long long fifeOptionArray_Count; // @dynamic fifeOptionArray_Count;
@property(copy, nonatomic) NSString *fontIcon; // @dynamic fontIcon;
@property(nonatomic) _Bool hasAltText; // @dynamic hasAltText;
@property(nonatomic) _Bool hasApplyRoundedCorners; // @dynamic hasApplyRoundedCorners;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasDarkImageUri; // @dynamic hasDarkImageUri;
@property(nonatomic) _Bool hasFontIcon; // @dynamic hasFontIcon;
@property(nonatomic) _Bool hasHeightDp; // @dynamic hasHeightDp;
@property(nonatomic) _Bool hasHeightPixels; // @dynamic hasHeightPixels;
@property(nonatomic) _Bool hasImageUri; // @dynamic hasImageUri;
@property(nonatomic) _Bool hasLayout; // @dynamic hasLayout;
@property(nonatomic) _Bool hasPrivateExtensions; // @dynamic hasPrivateExtensions;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasWidthDp; // @dynamic hasWidthDp;
@property(nonatomic) _Bool hasWidthPixels; // @dynamic hasWidthPixels;
@property(nonatomic) int heightDp; // @dynamic heightDp;
@property(nonatomic) int heightPixels; // @dynamic heightPixels;
@property(copy, nonatomic) NSString *imageUri; // @dynamic imageUri;
@property(retain, nonatomic) OrchLayout *layout; // @dynamic layout;
@property(retain, nonatomic) MessageSet *privateExtensions; // @dynamic privateExtensions;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(nonatomic) int widthDp; // @dynamic widthDp;
@property(nonatomic) int widthPixels; // @dynamic widthPixels;

@end

