//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WJ2WhisperJoinBlePacket : NSObject
{
    _Bool _additionalChunks;
    int _packetKey;
    int _chunkIndex;
    NSData *_payload;
}

@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) _Bool additionalChunks; // @synthesize additionalChunks=_additionalChunks;
@property(nonatomic) int chunkIndex; // @synthesize chunkIndex=_chunkIndex;
@property(nonatomic) int packetKey; // @synthesize packetKey=_packetKey;
- (void).cxx_destruct;
- (id)responsePacket;
- (id)initWith:(int)arg1 chunkIndex:(int)arg2 additionalChunks:(_Bool)arg3 andPayload:(id)arg4;

@end
