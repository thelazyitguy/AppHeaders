//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSDictionary;

@interface TFNTwitterCompositionReplyChainScribeDetails : NSObject <NSCoding>
{
    _Bool _thread;
    _Bool _reply;
    long long _photoCount;
    long long _videoCount;
    long long _pollCount;
    long long _GIFCount;
    long long _replyChainTotalCount;
}

@property(readonly, nonatomic) long long replyChainTotalCount; // @synthesize replyChainTotalCount=_replyChainTotalCount;
@property(readonly, nonatomic) long long GIFCount; // @synthesize GIFCount=_GIFCount;
@property(readonly, nonatomic) long long pollCount; // @synthesize pollCount=_pollCount;
@property(readonly, nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
@property(readonly, nonatomic) long long photoCount; // @synthesize photoCount=_photoCount;
@property(readonly, nonatomic, getter=isReply) _Bool reply; // @synthesize reply=_reply;
@property(readonly, nonatomic, getter=isThread) _Bool thread; // @synthesize thread=_thread;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *scribeParameters;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
- (id)initWithComposition:(id)arg1;
- (id)initWithThread:(_Bool)arg1 reply:(_Bool)arg2 photoCount:(long long)arg3 videoCount:(long long)arg4 pollCount:(long long)arg5 GIFCount:(long long)arg6 replyChainTotalCount:(long long)arg7;
- (id)init;

@end
