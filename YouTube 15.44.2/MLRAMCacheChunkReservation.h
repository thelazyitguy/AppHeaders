//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMCacheChunkReservation-Protocol.h>

@class MLRAMCache;
@protocol HAMCache;

@interface MLRAMCacheChunkReservation : NSObject <HAMCacheChunkReservation>
{
    MLRAMCache *_cache;
    id <HAMCache> _videoCache;
    long long _reservationSize;
    // Error parsing type: {atomic_flag="__a_"{__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >="__a_value"AB}}, name: _atomicFlag
}

- (void).cxx_destruct;
- (void)fulfillWithChunkSize:(long long)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithCache:(id)arg1 videoCache:(id)arg2 reservationSize:(long long)arg3;

@end

