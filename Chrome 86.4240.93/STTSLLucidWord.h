//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSString, STTSLAnnotation;

@interface STTSLLucidWord : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) STTSLAnnotation *annotation; // @dynamic annotation;
@property(nonatomic) _Bool hasAnnotation; // @dynamic hasAnnotation;
@property(nonatomic) _Bool hasOwnIndex; // @dynamic hasOwnIndex;
@property(nonatomic) _Bool hasPhonologyType; // @dynamic hasPhonologyType;
@property(nonatomic) _Bool hasSpelling; // @dynamic hasSpelling;
@property(nonatomic) _Bool hasTtsPronunciation; // @dynamic hasTtsPronunciation;
@property(nonatomic) _Bool hasWordId; // @dynamic hasWordId;
@property(nonatomic) int ownIndex; // @dynamic ownIndex;
@property(nonatomic) int phonologyType; // @dynamic phonologyType;
@property(copy, nonatomic) NSString *spelling; // @dynamic spelling;
@property(copy, nonatomic) NSString *ttsPronunciation; // @dynamic ttsPronunciation;
@property(nonatomic) int variantEnum; // @dynamic variantEnum;
@property(copy, nonatomic) NSString *variantId; // @dynamic variantId;
@property(readonly, nonatomic) int variantOneOfCase; // @dynamic variantOneOfCase;
@property(copy, nonatomic) NSString *wordId; // @dynamic wordId;

@end
