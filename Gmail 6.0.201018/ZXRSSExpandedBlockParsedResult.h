//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZXRSSExpandedDecodedInformation;

@interface ZXRSSExpandedBlockParsedResult : NSObject
{
    _Bool _finished;
    ZXRSSExpandedDecodedInformation *_decodedInformation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) ZXRSSExpandedDecodedInformation *decodedInformation; // @synthesize decodedInformation=_decodedInformation;
- (id)initWithInformation:(id)arg1 finished:(_Bool)arg2;
- (id)initWithFinished:(_Bool)arg1;

@end
