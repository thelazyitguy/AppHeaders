//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBDBaseChannel;

@interface SBDOperatorListQuery : NSObject
{
    _Bool _hasNext;
    _Bool _loading;
    unsigned long long _limit;
    NSString *_token;
    SBDBaseChannel *_channel;
}

@property(retain) SBDBaseChannel *channel; // @synthesize channel=_channel;
@property(retain) NSString *token; // @synthesize token=_token;
@property(getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property _Bool hasNext; // @synthesize hasNext=_hasNext;
@property unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)description;
- (void)loadNextPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithChannel:(id)arg1;

@end

