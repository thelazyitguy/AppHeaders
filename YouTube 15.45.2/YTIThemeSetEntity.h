//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableDictionary, NSString;

@interface YTIThemeSetEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *activeThemeKey; // @dynamic activeThemeKey;
@property(nonatomic) _Bool hasActiveThemeKey; // @dynamic hasActiveThemeKey;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSMutableDictionary *themeMap; // @dynamic themeMap;
@property(readonly, nonatomic) unsigned long long themeMap_Count; // @dynamic themeMap_Count;

@end

