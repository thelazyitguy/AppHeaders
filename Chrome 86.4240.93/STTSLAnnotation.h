//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class STTSLCrossLingual, STTSLLucidAnnotationClientExtensions, STTSLProsody, STTSLSemantics, STTSLSyntax, STTSLSynthesisParameters, STTSLVoiceSelection;

@interface STTSLAnnotation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) STTSLLucidAnnotationClientExtensions *clientExtensions; // @dynamic clientExtensions;
@property(retain, nonatomic) STTSLCrossLingual *crossLingual; // @dynamic crossLingual;
@property(nonatomic) _Bool hasClientExtensions; // @dynamic hasClientExtensions;
@property(nonatomic) _Bool hasCrossLingual; // @dynamic hasCrossLingual;
@property(nonatomic) _Bool hasProsody; // @dynamic hasProsody;
@property(nonatomic) _Bool hasSemantics; // @dynamic hasSemantics;
@property(nonatomic) _Bool hasSyntax; // @dynamic hasSyntax;
@property(nonatomic) _Bool hasSynthesisParameters; // @dynamic hasSynthesisParameters;
@property(nonatomic) _Bool hasVoiceSelection; // @dynamic hasVoiceSelection;
@property(retain, nonatomic) STTSLProsody *prosody; // @dynamic prosody;
@property(retain, nonatomic) STTSLSemantics *semantics; // @dynamic semantics;
@property(retain, nonatomic) STTSLSyntax *syntax; // @dynamic syntax;
@property(retain, nonatomic) STTSLSynthesisParameters *synthesisParameters; // @dynamic synthesisParameters;
@property(retain, nonatomic) STTSLVoiceSelection *voiceSelection; // @dynamic voiceSelection;

@end
