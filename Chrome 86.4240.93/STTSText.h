//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray, STTSLLucidMarkup;

@interface STTSText : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLucid; // @dynamic hasLucid;
@property(retain, nonatomic) STTSLLucidMarkup *lucid; // @dynamic lucid;
@property(retain, nonatomic) NSMutableArray *sentenceArray; // @dynamic sentenceArray;
@property(readonly, nonatomic) unsigned long long sentenceArray_Count; // @dynamic sentenceArray_Count;

@end
