//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GKBThemeDef : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attributeDefsArray; // @dynamic attributeDefsArray;
@property(readonly, nonatomic) unsigned long long attributeDefsArray_Count; // @dynamic attributeDefsArray_Count;
@property(nonatomic) _Bool hasThemeId; // @dynamic hasThemeId;
@property(copy, nonatomic) NSString *themeId; // @dynamic themeId;

@end
