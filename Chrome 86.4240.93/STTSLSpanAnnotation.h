//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class STTSLAnnotation;

@interface STTSLSpanAnnotation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) STTSLAnnotation *annotation; // @dynamic annotation;
@property(nonatomic) int first; // @dynamic first;
@property(nonatomic) _Bool hasAnnotation; // @dynamic hasAnnotation;
@property(nonatomic) _Bool hasFirst; // @dynamic hasFirst;
@property(nonatomic) _Bool hasLast; // @dynamic hasLast;
@property(nonatomic) int last; // @dynamic last;

@end

