//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMIndexChunk.h>

@class HAMWebMDataAccumulator;

@interface HAMWebMIndexChunk : HAMIndexChunk
{
    struct HAMWebMIndexChunkCallback _callback;
    HAMWebMDataAccumulator *_dataAccumulator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)prepareAndReturnError:(id *)arg1;
- (id)initWithFormat:(id)arg1 rangedURL:(id)arg2;

@end

