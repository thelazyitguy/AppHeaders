//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GAKAudioUnit, NSError;

@protocol GAKAudioUnitGraph <NSObject>
@property(readonly, nonatomic) struct OpaqueAUGraph *auGraph;
- (NSError *)update;
- (_Bool)isRunning;
- (NSError *)stop;
- (NSError *)start;
- (NSError *)close;
- (NSError *)uninitialize;
- (_Bool)isInitialized;
- (NSError *)initialize;
- (NSError *)disconnectInputFromUnit:(GAKAudioUnit *)arg1;
- (NSError *)disconnectInputFromUnit:(GAKAudioUnit *)arg1 element:(unsigned int)arg2;
- (NSError *)connectOutputFromUnit:(GAKAudioUnit *)arg1 toInputOfUnit:(GAKAudioUnit *)arg2;
- (NSError *)connectOutputFromUnit:(GAKAudioUnit *)arg1 toInputOfUnit:(GAKAudioUnit *)arg2 outputElement:(unsigned int)arg3 inputElement:(unsigned int)arg4;
- (NSError *)removeAudioUnit:(GAKAudioUnit *)arg1;
- (NSError *)addAudioUnit:(GAKAudioUnit *)arg1;
- (id)initWithError:(id *)arg1;
@end

