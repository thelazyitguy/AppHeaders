//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/DrishtiGraphDelegate-Protocol.h>
#import <Module_Framework/XNOCameraRecordingAnalysisOutput-Protocol.h>

@class DrishtiGraph, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface XNOL2LRecordingAnalysisOutput : NSObject <DrishtiGraphDelegate, XNOCameraRecordingAnalysisOutput>
{
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSNumber *_audioRate;
    id _output;
    DrishtiGraph *_graph;
    double _audioFilePadding;
    CDUnknownBlockType _applicabilityCallback;
}

+ (_Bool)writeAudioPacket:(struct Packet)arg1 toURL:(id)arg2 audioRate:(id)arg3 paddingDuration:(double)arg4 error:(id *)arg5;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType applicabilityCallback; // @synthesize applicabilityCallback=_applicabilityCallback;
@property(nonatomic) double audioFilePadding; // @synthesize audioFilePadding=_audioFilePadding;
@property(readonly, nonatomic) DrishtiGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) id output; // @synthesize output=_output;
- (void)drishtiGraph:(id)arg1 didOutputPacket:(const struct Packet *)arg2 fromStream:(const basic_string_90719d97 *)arg3;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (void)determineApplicabilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithGraph:(id)arg1 audioRate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

