//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCPromise;
@protocol YTInstreamAdBreak;

@interface YTAdBreakIntervalData : NSObject
{
    id <YTInstreamAdBreak> _adBreak;
    GPCPromise *_adPromise;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GPCPromise *adPromise; // @synthesize adPromise=_adPromise;
@property(readonly, nonatomic) id <YTInstreamAdBreak> adBreak; // @synthesize adBreak=_adBreak;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAdBreak:(id)arg1;

@end

