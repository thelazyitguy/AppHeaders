//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableDictionary;

@interface YTIRegexUriMacroValidator : GPBMessage
{
}

+ (id)descriptor;
- (id)convertToAdMacroRegexDictionary;

// Remaining properties
@property(nonatomic) _Bool emptyMap; // @dynamic emptyMap;
@property(nonatomic) _Bool hasEmptyMap; // @dynamic hasEmptyMap;
@property(retain, nonatomic) NSMutableDictionary *macroRegexValues; // @dynamic macroRegexValues;
@property(readonly, nonatomic) unsigned long long macroRegexValues_Count; // @dynamic macroRegexValues_Count;

@end
