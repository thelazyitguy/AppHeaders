//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAMDASHRepresentation, HAMFormatDescription, HAMIndexChunk, HAMInitializationChunk;
@protocol HAMMediaChunkIndex;

@interface HAMDASHFormatAssociatedData : NSObject
{
    HAMDASHRepresentation *_representation;
    HAMInitializationChunk *_initializationChunk;
    HAMFormatDescription *_formatDescription;
    HAMIndexChunk *_indexChunk;
    id <HAMMediaChunkIndex> _mediaChunkIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HAMMediaChunkIndex> mediaChunkIndex; // @synthesize mediaChunkIndex=_mediaChunkIndex;
@property(retain, nonatomic) HAMIndexChunk *indexChunk; // @synthesize indexChunk=_indexChunk;
@property(retain, nonatomic) HAMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
@property(retain, nonatomic) HAMInitializationChunk *initializationChunk; // @synthesize initializationChunk=_initializationChunk;
@property(retain, nonatomic) HAMDASHRepresentation *representation; // @synthesize representation=_representation;
@property(readonly, nonatomic) _Bool initialized;
- (id)init;
- (id)initWithRepresentation:(id)arg1;

@end
