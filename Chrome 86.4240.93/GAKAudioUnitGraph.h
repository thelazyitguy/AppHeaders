//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface GAKAudioUnitGraph : NSObject
{
    NSMutableSet *_audioUnits;
    struct OpaqueAUGraph *_auGraph;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct OpaqueAUGraph *auGraph; // @synthesize auGraph=_auGraph;
- (id)description;
- (id)update;
- (_Bool)isRunning;
- (id)stop;
- (id)start;
- (id)close;
- (id)uninitialize;
- (_Bool)isInitialized;
- (id)initialize;
- (id)disconnectInputFromUnit:(id)arg1 element:(unsigned int)arg2;
- (id)disconnectInputFromUnit:(id)arg1;
- (id)connectOutputFromUnit:(id)arg1 toInputOfUnit:(id)arg2;
- (id)connectOutputFromUnit:(id)arg1 toInputOfUnit:(id)arg2 outputElement:(unsigned int)arg3 inputElement:(unsigned int)arg4;
- (id)removeAudioUnit:(id)arg1;
- (id)addAudioUnit:(id)arg1;
- (void)dealloc;
- (id)initWithError:(id *)arg1;
- (id)init;

@end
