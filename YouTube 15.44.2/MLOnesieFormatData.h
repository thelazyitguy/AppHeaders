//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAMFormatDescription, MLOnesieDataBuffer, MLOnesieFormatKey;
@protocol HAMMediaChunkIndex;

@interface MLOnesieFormatData : NSObject
{
    MLOnesieFormatKey *_formatKey;
    MLOnesieDataBuffer *_dataBuffer;
    HAMFormatDescription *_formatDescription;
    id <HAMMediaChunkIndex> _mediaChunkIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HAMMediaChunkIndex> mediaChunkIndex; // @synthesize mediaChunkIndex=_mediaChunkIndex;
@property(readonly, nonatomic) HAMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
@property(readonly, nonatomic) MLOnesieDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(readonly, nonatomic) MLOnesieFormatKey *formatKey; // @synthesize formatKey=_formatKey;
- (id)initWithFormatKey:(id)arg1 parentData:(id)arg2;
- (void)setFormatDescription:(id)arg1 mediaChunkIndex:(id)arg2;

@end

