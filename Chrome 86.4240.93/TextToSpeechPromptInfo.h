//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray, PromptSpecificData;

@interface TextToSpeechPromptInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *biasingTokenArray; // @dynamic biasingTokenArray;
@property(readonly, nonatomic) unsigned long long biasingTokenArray_Count; // @dynamic biasingTokenArray_Count;
@property(nonatomic) _Bool expectFollowOn; // @dynamic expectFollowOn;
@property(nonatomic) _Bool hasExpectFollowOn; // @dynamic hasExpectFollowOn;
@property(nonatomic) _Bool hasIsAppendedPrompt; // @dynamic hasIsAppendedPrompt;
@property(nonatomic) _Bool hasPromptData; // @dynamic hasPromptData;
@property(nonatomic) _Bool hasPromptSourceType; // @dynamic hasPromptSourceType;
@property(nonatomic) _Bool hasTtsSourceType; // @dynamic hasTtsSourceType;
@property(nonatomic) _Bool isAppendedPrompt; // @dynamic isAppendedPrompt;
@property(retain, nonatomic) PromptSpecificData *promptData; // @dynamic promptData;
@property(nonatomic) int promptSourceType; // @dynamic promptSourceType;
@property(nonatomic) int ttsSourceType; // @dynamic ttsSourceType;

@end
