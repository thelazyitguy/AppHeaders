//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray;

@interface STTSLVoiceAttributes : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *preferredAttributesArray; // @dynamic preferredAttributesArray;
@property(readonly, nonatomic) unsigned long long preferredAttributesArray_Count; // @dynamic preferredAttributesArray_Count;
@property(nonatomic) _Bool randomize; // @dynamic randomize;
@property(retain, nonatomic) NSMutableArray *requiredAttributesArray; // @dynamic requiredAttributesArray;
@property(readonly, nonatomic) unsigned long long requiredAttributesArray_Count; // @dynamic requiredAttributesArray_Count;
@property(readonly, nonatomic) int tieBreakerOneOfCase; // @dynamic tieBreakerOneOfCase;
@property(nonatomic) int variant; // @dynamic variant;

@end
