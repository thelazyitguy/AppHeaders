//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class ADDONSFormattedText, ADDONSThemeColors, NSString;

@interface ADDONSContextualAddOn_Toolbar : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int color; // @dynamic color;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasIconURL; // @dynamic hasIconURL;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasThemeColors; // @dynamic hasThemeColors;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(retain, nonatomic) ADDONSFormattedText *name; // @dynamic name;
@property(retain, nonatomic) ADDONSThemeColors *themeColors; // @dynamic themeColors;

@end
