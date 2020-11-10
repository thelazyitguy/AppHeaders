//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SendBirdSDK/NSCopying-Protocol.h>

@class NSString;

@interface SBDOpenChannelListQuery : NSObject <NSCopying>
{
    _Bool _includeFrozenChannel;
    _Bool _hasNext;
    _Bool _loading;
    unsigned long long _limit;
    NSString *_urlKeyword;
    NSString *_nameKeyword;
    NSString *_channelUrlFilter;
    NSString *_channelNameFilter;
    NSString *_customTypeFilter;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *customTypeFilter; // @synthesize customTypeFilter=_customTypeFilter;
@property(copy, nonatomic) NSString *channelNameFilter; // @synthesize channelNameFilter=_channelNameFilter;
@property(copy, nonatomic) NSString *channelUrlFilter; // @synthesize channelUrlFilter=_channelUrlFilter;
@property(retain, nonatomic) NSString *nameKeyword; // @synthesize nameKeyword=_nameKeyword;
@property(retain, nonatomic) NSString *urlKeyword; // @synthesize urlKeyword=_urlKeyword;
@property _Bool hasNext; // @synthesize hasNext=_hasNext;
@property _Bool includeFrozenChannel; // @synthesize includeFrozenChannel=_includeFrozenChannel;
@property unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)loadNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setLoadingState:(_Bool)arg1;
- (_Bool)isLoading;
- (id)init;

@end
